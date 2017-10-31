
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    enable{YType::empty, "enable"},
    auto_config_slaac{YType::empty, "auto-config-slaac"}
{

    yang_name = "auto-configuration"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set
	|| auto_config_slaac.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(auto_config_slaac.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (auto_config_slaac.is_set || is_set(auto_config_slaac.yfilter)) leaf_name_data.push_back(auto_config_slaac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config-slaac")
    {
        auto_config_slaac = value;
        auto_config_slaac.value_namespace = name_space;
        auto_config_slaac.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "auto-config-slaac")
    {
        auto_config_slaac.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "auto-config-slaac")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicyTable()
    :
    bgp_flow_tag_policy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy>())
{
    bgp_flow_tag_policy->parent = this;

    yang_name = "bgp-flow-tag-policy-table"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::~BgpFlowTagPolicyTable()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_data() const
{
    return (bgp_flow_tag_policy !=  nullptr && bgp_flow_tag_policy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_flow_tag_policy !=  nullptr && bgp_flow_tag_policy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-flow-tag-policy-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-flow-tag-policy")
    {
        if(bgp_flow_tag_policy == nullptr)
        {
            bgp_flow_tag_policy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy>();
        }
        return bgp_flow_tag_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_flow_tag_policy != nullptr)
    {
        children["bgp-flow-tag-policy"] = bgp_flow_tag_policy;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-flow-tag-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::BgpFlowTagPolicy()
    :
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "bgp-flow-tag-policy"; yang_parent_name = "bgp-flow-tag-policy-table"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::~BgpFlowTagPolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_data() const
{
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-flow-tag-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Neighbor()
    :
    reachable_time{YType::uint32, "reachable-time"},
    ra_unspecify_hoplimit{YType::empty, "ra-unspecify-hoplimit"},
    dad_attempts{YType::uint32, "dad-attempts"},
    srp_multicast_encapsulation{YType::enumeration, "srp-multicast-encapsulation"},
    ns_interval{YType::uint32, "ns-interval"},
    cache_limit{YType::uint32, "cache-limit"},
    redirect{YType::empty, "redirect"},
    srp_unicast_encapsulation{YType::enumeration, "srp-unicast-encapsulation"},
    ramtu_suppress{YType::empty, "ramtu-suppress"},
    managed_config{YType::empty, "managed-config"},
    ra_unicast{YType::empty, "ra-unicast"},
    ra_lifetime{YType::uint32, "ra-lifetime"},
    other_config{YType::empty, "other-config"},
    ra_suppress{YType::empty, "ra-suppress"},
    router_preference{YType::enumeration, "router-preference"}
    	,
    raspecific_route_s(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>())
	,radns_searches(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>())
	,radns_servers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>())
	,ra_interval(nullptr) // presence node
	,ipv6_prefixes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>())
{
    raspecific_route_s->parent = this;
    radns_searches->parent = this;
    radns_servers->parent = this;
    ipv6_prefixes->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_data() const
{
    return reachable_time.is_set
	|| ra_unspecify_hoplimit.is_set
	|| dad_attempts.is_set
	|| srp_multicast_encapsulation.is_set
	|| ns_interval.is_set
	|| cache_limit.is_set
	|| redirect.is_set
	|| srp_unicast_encapsulation.is_set
	|| ramtu_suppress.is_set
	|| managed_config.is_set
	|| ra_unicast.is_set
	|| ra_lifetime.is_set
	|| other_config.is_set
	|| ra_suppress.is_set
	|| router_preference.is_set
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_data())
	|| (radns_searches !=  nullptr && radns_searches->has_data())
	|| (radns_servers !=  nullptr && radns_servers->has_data())
	|| (ra_interval !=  nullptr && ra_interval->has_data())
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_time.yfilter)
	|| ydk::is_set(ra_unspecify_hoplimit.yfilter)
	|| ydk::is_set(dad_attempts.yfilter)
	|| ydk::is_set(srp_multicast_encapsulation.yfilter)
	|| ydk::is_set(ns_interval.yfilter)
	|| ydk::is_set(cache_limit.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| ydk::is_set(srp_unicast_encapsulation.yfilter)
	|| ydk::is_set(ramtu_suppress.yfilter)
	|| ydk::is_set(managed_config.yfilter)
	|| ydk::is_set(ra_unicast.yfilter)
	|| ydk::is_set(ra_lifetime.yfilter)
	|| ydk::is_set(other_config.yfilter)
	|| ydk::is_set(ra_suppress.yfilter)
	|| ydk::is_set(router_preference.yfilter)
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_operation())
	|| (radns_searches !=  nullptr && radns_searches->has_operation())
	|| (radns_servers !=  nullptr && radns_servers->has_operation())
	|| (ra_interval !=  nullptr && ra_interval->has_operation())
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_time.is_set || is_set(reachable_time.yfilter)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (ra_unspecify_hoplimit.is_set || is_set(ra_unspecify_hoplimit.yfilter)) leaf_name_data.push_back(ra_unspecify_hoplimit.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.yfilter)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (srp_multicast_encapsulation.is_set || is_set(srp_multicast_encapsulation.yfilter)) leaf_name_data.push_back(srp_multicast_encapsulation.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.yfilter)) leaf_name_data.push_back(ns_interval.get_name_leafdata());
    if (cache_limit.is_set || is_set(cache_limit.yfilter)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (srp_unicast_encapsulation.is_set || is_set(srp_unicast_encapsulation.yfilter)) leaf_name_data.push_back(srp_unicast_encapsulation.get_name_leafdata());
    if (ramtu_suppress.is_set || is_set(ramtu_suppress.yfilter)) leaf_name_data.push_back(ramtu_suppress.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.yfilter)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.yfilter)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.yfilter)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.yfilter)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.yfilter)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.yfilter)) leaf_name_data.push_back(router_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "raspecific-route-s")
    {
        if(raspecific_route_s == nullptr)
        {
            raspecific_route_s = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>();
        }
        return raspecific_route_s;
    }

    if(child_yang_name == "radns-searches")
    {
        if(radns_searches == nullptr)
        {
            radns_searches = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>();
        }
        return radns_searches;
    }

    if(child_yang_name == "radns-servers")
    {
        if(radns_servers == nullptr)
        {
            radns_servers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>();
        }
        return radns_servers;
    }

    if(child_yang_name == "ra-interval")
    {
        if(ra_interval == nullptr)
        {
            ra_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval>();
        }
        return ra_interval;
    }

    if(child_yang_name == "ipv6-prefixes")
    {
        if(ipv6_prefixes == nullptr)
        {
            ipv6_prefixes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>();
        }
        return ipv6_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(raspecific_route_s != nullptr)
    {
        children["raspecific-route-s"] = raspecific_route_s;
    }

    if(radns_searches != nullptr)
    {
        children["radns-searches"] = radns_searches;
    }

    if(radns_servers != nullptr)
    {
        children["radns-servers"] = radns_servers;
    }

    if(ra_interval != nullptr)
    {
        children["ra-interval"] = ra_interval;
    }

    if(ipv6_prefixes != nullptr)
    {
        children["ipv6-prefixes"] = ipv6_prefixes;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-time")
    {
        reachable_time = value;
        reachable_time.value_namespace = name_space;
        reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit = value;
        ra_unspecify_hoplimit.value_namespace = name_space;
        ra_unspecify_hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
        dad_attempts.value_namespace = name_space;
        dad_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-multicast-encapsulation")
    {
        srp_multicast_encapsulation = value;
        srp_multicast_encapsulation.value_namespace = name_space;
        srp_multicast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
        ns_interval.value_namespace = name_space;
        ns_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-limit")
    {
        cache_limit = value;
        cache_limit.value_namespace = name_space;
        cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-unicast-encapsulation")
    {
        srp_unicast_encapsulation = value;
        srp_unicast_encapsulation.value_namespace = name_space;
        srp_unicast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ramtu-suppress")
    {
        ramtu_suppress = value;
        ramtu_suppress.value_namespace = name_space;
        ramtu_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
        managed_config.value_namespace = name_space;
        managed_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
        ra_unicast.value_namespace = name_space;
        ra_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
        ra_lifetime.value_namespace = name_space;
        ra_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-config")
    {
        other_config = value;
        other_config.value_namespace = name_space;
        other_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
        ra_suppress.value_namespace = name_space;
        ra_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
        router_preference.value_namespace = name_space;
        router_preference.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-time")
    {
        reachable_time.yfilter = yfilter;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit.yfilter = yfilter;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts.yfilter = yfilter;
    }
    if(value_path == "srp-multicast-encapsulation")
    {
        srp_multicast_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ns-interval")
    {
        ns_interval.yfilter = yfilter;
    }
    if(value_path == "cache-limit")
    {
        cache_limit.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
    if(value_path == "srp-unicast-encapsulation")
    {
        srp_unicast_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ramtu-suppress")
    {
        ramtu_suppress.yfilter = yfilter;
    }
    if(value_path == "managed-config")
    {
        managed_config.yfilter = yfilter;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast.yfilter = yfilter;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime.yfilter = yfilter;
    }
    if(value_path == "other-config")
    {
        other_config.yfilter = yfilter;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress.yfilter = yfilter;
    }
    if(value_path == "router-preference")
    {
        router_preference.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raspecific-route-s" || name == "radns-searches" || name == "radns-servers" || name == "ra-interval" || name == "ipv6-prefixes" || name == "reachable-time" || name == "ra-unspecify-hoplimit" || name == "dad-attempts" || name == "srp-multicast-encapsulation" || name == "ns-interval" || name == "cache-limit" || name == "redirect" || name == "srp-unicast-encapsulation" || name == "ramtu-suppress" || name == "managed-config" || name == "ra-unicast" || name == "ra-lifetime" || name == "other-config" || name == "ra-suppress" || name == "router-preference")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRouteS()
{

    yang_name = "raspecific-route-s"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::~RaspecificRouteS()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_data() const
{
    for (std::size_t index=0; index<raspecific_route.size(); index++)
    {
        if(raspecific_route[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_operation() const
{
    for (std::size_t index=0; index<raspecific_route.size(); index++)
    {
        if(raspecific_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "raspecific-route")
    {
        for(auto const & c : raspecific_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute>();
        c->parent = this;
        raspecific_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : raspecific_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raspecific-route")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::RaspecificRoute()
    :
    specific_route{YType::str, "specific-route"},
    prefix_length{YType::uint8, "prefix-length"},
    lifetime{YType::uint32, "lifetime"},
    preference{YType::enumeration, "preference"}
{

    yang_name = "raspecific-route"; yang_parent_name = "raspecific-route-s"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::~RaspecificRoute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_data() const
{
    return specific_route.is_set
	|| prefix_length.is_set
	|| lifetime.is_set
	|| preference.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(specific_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(preference.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route" <<"[specific-route='" <<specific_route <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specific_route.is_set || is_set(specific_route.yfilter)) leaf_name_data.push_back(specific_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "specific-route")
    {
        specific_route = value;
        specific_route.value_namespace = name_space;
        specific_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "specific-route")
    {
        specific_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "specific-route" || name == "prefix-length" || name == "lifetime" || name == "preference")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearches()
{

    yang_name = "radns-searches"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::~RadnsSearches()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_data() const
{
    for (std::size_t index=0; index<radns_search.size(); index++)
    {
        if(radns_search[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_operation() const
{
    for (std::size_t index=0; index<radns_search.size(); index++)
    {
        if(radns_search[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-searches";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radns-search")
    {
        for(auto const & c : radns_search)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch>();
        c->parent = this;
        radns_search.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : radns_search)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radns-search")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::RadnsSearch()
    :
    dns_search_list{YType::str, "dns-search-list"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "radns-search"; yang_parent_name = "radns-searches"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::~RadnsSearch()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_data() const
{
    return dns_search_list.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_search_list.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-search" <<"[dns-search-list='" <<dns_search_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_search_list.is_set || is_set(dns_search_list.yfilter)) leaf_name_data.push_back(dns_search_list.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-search-list")
    {
        dns_search_list = value;
        dns_search_list.value_namespace = name_space;
        dns_search_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-search-list")
    {
        dns_search_list.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-search-list" || name == "lifetime")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServers()
{

    yang_name = "radns-servers"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::~RadnsServers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_data() const
{
    for (std::size_t index=0; index<radns_server.size(); index++)
    {
        if(radns_server[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_operation() const
{
    for (std::size_t index=0; index<radns_server.size(); index++)
    {
        if(radns_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radns-server")
    {
        for(auto const & c : radns_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer>();
        c->parent = this;
        radns_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : radns_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radns-server")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::RadnsServer()
    :
    dns_server{YType::str, "dns-server"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "radns-server"; yang_parent_name = "radns-servers"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::~RadnsServer()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_data() const
{
    return dns_server.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_server.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-server" <<"[dns-server='" <<dns_server <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_server.is_set || is_set(dns_server.yfilter)) leaf_name_data.push_back(dns_server.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-server")
    {
        dns_server = value;
        dns_server.value_namespace = name_space;
        dns_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-server" || name == "lifetime")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::RaInterval()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefixes()
{

    yang_name = "ipv6-prefixes"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::~Ipv6Prefixes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_data() const
{
    for (std::size_t index=0; index<ipv6_prefix.size(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_operation() const
{
    for (std::size_t index=0; index<ipv6_prefix.size(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefix")
    {
        for(auto const & c : ipv6_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix>();
        c->parent = this;
        ipv6_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-prefix")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"},
    prefix_zone{YType::str, "prefix-zone"},
    prefix_length{YType::uint8, "prefix-length"},
    valid_lifetime{YType::uint32, "valid-lifetime"},
    preferred_lifetime{YType::uint32, "preferred-lifetime"},
    off_link{YType::boolean, "off-link"},
    no_auto_config{YType::boolean, "no-auto-config"},
    no_advertize{YType::boolean, "no-advertize"},
    expiry_month{YType::enumeration, "expiry-month"},
    expiry_date{YType::uint32, "expiry-date"},
    expiry_year{YType::uint32, "expiry-year"},
    expiry_hour{YType::uint32, "expiry-hour"},
    expiry_minute{YType::uint32, "expiry-minute"},
    pref_expiry_month{YType::enumeration, "pref-expiry-month"},
    pref_expiry_date{YType::uint32, "pref-expiry-date"},
    pref_expiry_year{YType::uint32, "pref-expiry-year"},
    pref_expiry_hour{YType::uint32, "pref-expiry-hour"},
    pref_expiry_minute{YType::uint32, "pref-expiry-minute"}
{

    yang_name = "ipv6-prefix"; yang_parent_name = "ipv6-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::~Ipv6Prefix()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_data() const
{
    return prefix.is_set
	|| prefix_zone.is_set
	|| prefix_length.is_set
	|| valid_lifetime.is_set
	|| preferred_lifetime.is_set
	|| off_link.is_set
	|| no_auto_config.is_set
	|| no_advertize.is_set
	|| expiry_month.is_set
	|| expiry_date.is_set
	|| expiry_year.is_set
	|| expiry_hour.is_set
	|| expiry_minute.is_set
	|| pref_expiry_month.is_set
	|| pref_expiry_date.is_set
	|| pref_expiry_year.is_set
	|| pref_expiry_hour.is_set
	|| pref_expiry_minute.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_zone.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter)
	|| ydk::is_set(preferred_lifetime.yfilter)
	|| ydk::is_set(off_link.yfilter)
	|| ydk::is_set(no_auto_config.yfilter)
	|| ydk::is_set(no_advertize.yfilter)
	|| ydk::is_set(expiry_month.yfilter)
	|| ydk::is_set(expiry_date.yfilter)
	|| ydk::is_set(expiry_year.yfilter)
	|| ydk::is_set(expiry_hour.yfilter)
	|| ydk::is_set(expiry_minute.yfilter)
	|| ydk::is_set(pref_expiry_month.yfilter)
	|| ydk::is_set(pref_expiry_date.yfilter)
	|| ydk::is_set(pref_expiry_year.yfilter)
	|| ydk::is_set(pref_expiry_hour.yfilter)
	|| ydk::is_set(pref_expiry_minute.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_zone.is_set || is_set(prefix_zone.yfilter)) leaf_name_data.push_back(prefix_zone.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.yfilter)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (off_link.is_set || is_set(off_link.yfilter)) leaf_name_data.push_back(off_link.get_name_leafdata());
    if (no_auto_config.is_set || is_set(no_auto_config.yfilter)) leaf_name_data.push_back(no_auto_config.get_name_leafdata());
    if (no_advertize.is_set || is_set(no_advertize.yfilter)) leaf_name_data.push_back(no_advertize.get_name_leafdata());
    if (expiry_month.is_set || is_set(expiry_month.yfilter)) leaf_name_data.push_back(expiry_month.get_name_leafdata());
    if (expiry_date.is_set || is_set(expiry_date.yfilter)) leaf_name_data.push_back(expiry_date.get_name_leafdata());
    if (expiry_year.is_set || is_set(expiry_year.yfilter)) leaf_name_data.push_back(expiry_year.get_name_leafdata());
    if (expiry_hour.is_set || is_set(expiry_hour.yfilter)) leaf_name_data.push_back(expiry_hour.get_name_leafdata());
    if (expiry_minute.is_set || is_set(expiry_minute.yfilter)) leaf_name_data.push_back(expiry_minute.get_name_leafdata());
    if (pref_expiry_month.is_set || is_set(pref_expiry_month.yfilter)) leaf_name_data.push_back(pref_expiry_month.get_name_leafdata());
    if (pref_expiry_date.is_set || is_set(pref_expiry_date.yfilter)) leaf_name_data.push_back(pref_expiry_date.get_name_leafdata());
    if (pref_expiry_year.is_set || is_set(pref_expiry_year.yfilter)) leaf_name_data.push_back(pref_expiry_year.get_name_leafdata());
    if (pref_expiry_hour.is_set || is_set(pref_expiry_hour.yfilter)) leaf_name_data.push_back(pref_expiry_hour.get_name_leafdata());
    if (pref_expiry_minute.is_set || is_set(pref_expiry_minute.yfilter)) leaf_name_data.push_back(pref_expiry_minute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-zone")
    {
        prefix_zone = value;
        prefix_zone.value_namespace = name_space;
        prefix_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
        preferred_lifetime.value_namespace = name_space;
        preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "off-link")
    {
        off_link = value;
        off_link.value_namespace = name_space;
        off_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-auto-config")
    {
        no_auto_config = value;
        no_auto_config.value_namespace = name_space;
        no_auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-advertize")
    {
        no_advertize = value;
        no_advertize.value_namespace = name_space;
        no_advertize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-month")
    {
        expiry_month = value;
        expiry_month.value_namespace = name_space;
        expiry_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-date")
    {
        expiry_date = value;
        expiry_date.value_namespace = name_space;
        expiry_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-year")
    {
        expiry_year = value;
        expiry_year.value_namespace = name_space;
        expiry_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-hour")
    {
        expiry_hour = value;
        expiry_hour.value_namespace = name_space;
        expiry_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-minute")
    {
        expiry_minute = value;
        expiry_minute.value_namespace = name_space;
        expiry_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-month")
    {
        pref_expiry_month = value;
        pref_expiry_month.value_namespace = name_space;
        pref_expiry_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-date")
    {
        pref_expiry_date = value;
        pref_expiry_date.value_namespace = name_space;
        pref_expiry_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-year")
    {
        pref_expiry_year = value;
        pref_expiry_year.value_namespace = name_space;
        pref_expiry_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-hour")
    {
        pref_expiry_hour = value;
        pref_expiry_hour.value_namespace = name_space;
        pref_expiry_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-minute")
    {
        pref_expiry_minute = value;
        pref_expiry_minute.value_namespace = name_space;
        pref_expiry_minute.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-zone")
    {
        prefix_zone.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime.yfilter = yfilter;
    }
    if(value_path == "off-link")
    {
        off_link.yfilter = yfilter;
    }
    if(value_path == "no-auto-config")
    {
        no_auto_config.yfilter = yfilter;
    }
    if(value_path == "no-advertize")
    {
        no_advertize.yfilter = yfilter;
    }
    if(value_path == "expiry-month")
    {
        expiry_month.yfilter = yfilter;
    }
    if(value_path == "expiry-date")
    {
        expiry_date.yfilter = yfilter;
    }
    if(value_path == "expiry-year")
    {
        expiry_year.yfilter = yfilter;
    }
    if(value_path == "expiry-hour")
    {
        expiry_hour.yfilter = yfilter;
    }
    if(value_path == "expiry-minute")
    {
        expiry_minute.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-month")
    {
        pref_expiry_month.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-date")
    {
        pref_expiry_date.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-year")
    {
        pref_expiry_year.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-hour")
    {
        pref_expiry_hour.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-minute")
    {
        pref_expiry_minute.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-zone" || name == "prefix-length" || name == "valid-lifetime" || name == "preferred-lifetime" || name == "off-link" || name == "no-auto-config" || name == "no-advertize" || name == "expiry-month" || name == "expiry-date" || name == "expiry-year" || name == "expiry-hour" || name == "expiry-minute" || name == "pref-expiry-month" || name == "pref-expiry-date" || name == "pref-expiry-year" || name == "pref-expiry-hour" || name == "pref-expiry-minute")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::Mpls()
    :
    mtu{YType::uint32, "mtu"}
    	,
    label_security(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity>())
{
    label_security->parent = this;

    yang_name = "mpls"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::~Mpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_data() const
{
    return mtu.is_set
	|| (label_security !=  nullptr && label_security->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (label_security !=  nullptr && label_security->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-cfg:mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-security")
    {
        if(label_security == nullptr)
        {
            label_security = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity>();
        }
        return label_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_security != nullptr)
    {
        children["label-security"] = label_security;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-security" || name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::LabelSecurity()
    :
    multi_label_drop{YType::empty, "multi-label-drop"},
    rpf{YType::empty, "rpf"}
{

    yang_name = "label-security"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::~LabelSecurity()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_data() const
{
    return multi_label_drop.is_set
	|| rpf.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_label_drop.yfilter)
	|| ydk::is_set(rpf.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_label_drop.is_set || is_set(multi_label_drop.yfilter)) leaf_name_data.push_back(multi_label_drop.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-label-drop")
    {
        multi_label_drop = value;
        multi_label_drop.value_namespace = name_space;
        multi_label_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-label-drop")
    {
        multi_label_drop.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-label-drop" || name == "rpf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelTeAttributes()
    :
    path_protection{YType::empty, "path-protection"},
    forward_class{YType::uint32, "forward-class"},
    destination{YType::str, "destination"},
    record_route{YType::empty, "record-route"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    soft_preemption{YType::empty, "soft-preemption"},
    load_share{YType::uint32, "load-share"},
    signalled_name{YType::str, "signalled-name"}
    	,
    backup_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>())
	,bfd_over_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>())
	,binding_segment_id_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>())
	,forwarding_adjacency(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>())
	,path_option_protects(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>())
	,bidirectional(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>())
	,admin_mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>())
	,switching(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>())
	,pce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>())
	,tunnel_path_selection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>())
	,auto_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>())
	,priority(nullptr) // presence node
	,affinity_mask(nullptr) // presence node
	,logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>())
	,bandwidth(nullptr) // presence node
	,autoroute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>())
	,policy_classes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>())
	,new_style_affinity_affinity_types(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>())
	,fast_reroute(nullptr) // presence node
{
    backup_bandwidth->parent = this;
    bfd_over_lsp->parent = this;
    binding_segment_id_mpls->parent = this;
    forwarding_adjacency->parent = this;
    path_option_protects->parent = this;
    bidirectional->parent = this;
    admin_mode->parent = this;
    switching->parent = this;
    pce->parent = this;
    tunnel_path_selection->parent = this;
    auto_bandwidth->parent = this;
    logging->parent = this;
    autoroute->parent = this;
    policy_classes->parent = this;
    new_style_affinity_affinity_types->parent = this;

    yang_name = "tunnel-te-attributes"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::~TunnelTeAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_data() const
{
    return path_protection.is_set
	|| forward_class.is_set
	|| destination.is_set
	|| record_route.is_set
	|| path_selection_metric.is_set
	|| soft_preemption.is_set
	|| load_share.is_set
	|| signalled_name.is_set
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_data())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_data())
	|| (path_option_protects !=  nullptr && path_option_protects->has_data())
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (admin_mode !=  nullptr && admin_mode->has_data())
	|| (switching !=  nullptr && switching->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_protection.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_operation())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_operation())
	|| (path_option_protects !=  nullptr && path_option_protects->has_operation())
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (admin_mode !=  nullptr && admin_mode->has_operation())
	|| (switching !=  nullptr && switching->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_protection.is_set || is_set(path_protection.yfilter)) leaf_name_data.push_back(path_protection.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-bandwidth")
    {
        if(backup_bandwidth == nullptr)
        {
            backup_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>();
        }
        return backup_bandwidth;
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp == nullptr)
        {
            bfd_over_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>();
        }
        return bfd_over_lsp;
    }

    if(child_yang_name == "binding-segment-id-mpls")
    {
        if(binding_segment_id_mpls == nullptr)
        {
            binding_segment_id_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>();
        }
        return binding_segment_id_mpls;
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency == nullptr)
        {
            forwarding_adjacency = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>();
        }
        return forwarding_adjacency;
    }

    if(child_yang_name == "path-option-protects")
    {
        if(path_option_protects == nullptr)
        {
            path_option_protects = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>();
        }
        return path_option_protects;
    }

    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "admin-mode")
    {
        if(admin_mode == nullptr)
        {
            admin_mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>();
        }
        return admin_mode;
    }

    if(child_yang_name == "switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>();
        }
        return switching;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection == nullptr)
        {
            tunnel_path_selection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>();
        }
        return tunnel_path_selection;
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_bandwidth != nullptr)
    {
        children["backup-bandwidth"] = backup_bandwidth;
    }

    if(bfd_over_lsp != nullptr)
    {
        children["bfd-over-lsp"] = bfd_over_lsp;
    }

    if(binding_segment_id_mpls != nullptr)
    {
        children["binding-segment-id-mpls"] = binding_segment_id_mpls;
    }

    if(forwarding_adjacency != nullptr)
    {
        children["forwarding-adjacency"] = forwarding_adjacency;
    }

    if(path_option_protects != nullptr)
    {
        children["path-option-protects"] = path_option_protects;
    }

    if(bidirectional != nullptr)
    {
        children["bidirectional"] = bidirectional;
    }

    if(admin_mode != nullptr)
    {
        children["admin-mode"] = admin_mode;
    }

    if(switching != nullptr)
    {
        children["switching"] = switching;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(tunnel_path_selection != nullptr)
    {
        children["tunnel-path-selection"] = tunnel_path_selection;
    }

    if(auto_bandwidth != nullptr)
    {
        children["auto-bandwidth"] = auto_bandwidth;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(policy_classes != nullptr)
    {
        children["policy-classes"] = policy_classes;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-protection")
    {
        path_protection = value;
        path_protection.value_namespace = name_space;
        path_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-protection")
    {
        path_protection.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-bandwidth" || name == "bfd-over-lsp" || name == "binding-segment-id-mpls" || name == "forwarding-adjacency" || name == "path-option-protects" || name == "bidirectional" || name == "admin-mode" || name == "switching" || name == "pce" || name == "tunnel-path-selection" || name == "auto-bandwidth" || name == "priority" || name == "affinity-mask" || name == "logging" || name == "bandwidth" || name == "autoroute" || name == "policy-classes" || name == "new-style-affinity-affinity-types" || name == "fast-reroute" || name == "path-protection" || name == "forward-class" || name == "destination" || name == "record-route" || name == "path-selection-metric" || name == "soft-preemption" || name == "load-share" || name == "signalled-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::BackupBandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    pool_type{YType::enumeration, "pool-type"},
    class_type{YType::enumeration, "class-type"},
    limit_type{YType::enumeration, "limit-type"},
    backup_bandwidth{YType::uint32, "backup-bandwidth"}
{

    yang_name = "backup-bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::~BackupBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_data() const
{
    return dste_type.is_set
	|| pool_type.is_set
	|| class_type.is_set
	|| limit_type.is_set
	|| backup_bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(limit_type.yfilter)
	|| ydk::is_set(backup_bandwidth.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (limit_type.is_set || is_set(limit_type.yfilter)) leaf_name_data.push_back(limit_type.get_name_leafdata());
    if (backup_bandwidth.is_set || is_set(backup_bandwidth.yfilter)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-type")
    {
        limit_type = value;
        limit_type.value_namespace = name_space;
        limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
        backup_bandwidth.value_namespace = name_space;
        backup_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "pool-type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "limit-type")
    {
        limit_type.yfilter = yfilter;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "pool-type" || name == "class-type" || name == "limit-type" || name == "backup-bandwidth")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::BfdOverLsp()
    :
    dampening_initial_wait{YType::uint32, "dampening-initial-wait"},
    fast_detect{YType::enumeration, "fast-detect"},
    enable{YType::empty, "enable"},
    multiplier{YType::uint32, "multiplier"},
    bringup_timeout{YType::uint32, "bringup-timeout"},
    periodic_ping_disable{YType::empty, "periodic-ping-disable"},
    dampening_secondary_wait{YType::uint32, "dampening-secondary-wait"},
    periodic_ping_interval{YType::uint32, "periodic-ping-interval"},
    dampening_maximum_wait{YType::uint32, "dampening-maximum-wait"},
    minimum_interval{YType::uint32, "minimum-interval"},
    encap_mode{YType::uint32, "encap-mode"}
{

    yang_name = "bfd-over-lsp"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_data() const
{
    return dampening_initial_wait.is_set
	|| fast_detect.is_set
	|| enable.is_set
	|| multiplier.is_set
	|| bringup_timeout.is_set
	|| periodic_ping_disable.is_set
	|| dampening_secondary_wait.is_set
	|| periodic_ping_interval.is_set
	|| dampening_maximum_wait.is_set
	|| minimum_interval.is_set
	|| encap_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_initial_wait.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(bringup_timeout.yfilter)
	|| ydk::is_set(periodic_ping_disable.yfilter)
	|| ydk::is_set(dampening_secondary_wait.yfilter)
	|| ydk::is_set(periodic_ping_interval.yfilter)
	|| ydk::is_set(dampening_maximum_wait.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(encap_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_initial_wait.is_set || is_set(dampening_initial_wait.yfilter)) leaf_name_data.push_back(dampening_initial_wait.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (bringup_timeout.is_set || is_set(bringup_timeout.yfilter)) leaf_name_data.push_back(bringup_timeout.get_name_leafdata());
    if (periodic_ping_disable.is_set || is_set(periodic_ping_disable.yfilter)) leaf_name_data.push_back(periodic_ping_disable.get_name_leafdata());
    if (dampening_secondary_wait.is_set || is_set(dampening_secondary_wait.yfilter)) leaf_name_data.push_back(dampening_secondary_wait.get_name_leafdata());
    if (periodic_ping_interval.is_set || is_set(periodic_ping_interval.yfilter)) leaf_name_data.push_back(periodic_ping_interval.get_name_leafdata());
    if (dampening_maximum_wait.is_set || is_set(dampening_maximum_wait.yfilter)) leaf_name_data.push_back(dampening_maximum_wait.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (encap_mode.is_set || is_set(encap_mode.yfilter)) leaf_name_data.push_back(encap_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait = value;
        dampening_initial_wait.value_namespace = name_space;
        dampening_initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bringup-timeout")
    {
        bringup_timeout = value;
        bringup_timeout.value_namespace = name_space;
        bringup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable = value;
        periodic_ping_disable.value_namespace = name_space;
        periodic_ping_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait = value;
        dampening_secondary_wait.value_namespace = name_space;
        dampening_secondary_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval = value;
        periodic_ping_interval.value_namespace = name_space;
        periodic_ping_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait = value;
        dampening_maximum_wait.value_namespace = name_space;
        dampening_maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-mode")
    {
        encap_mode = value;
        encap_mode.value_namespace = name_space;
        encap_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "bringup-timeout")
    {
        bringup_timeout.yfilter = yfilter;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable.yfilter = yfilter;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait.yfilter = yfilter;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval.yfilter = yfilter;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "encap-mode")
    {
        encap_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-initial-wait" || name == "fast-detect" || name == "enable" || name == "multiplier" || name == "bringup-timeout" || name == "periodic-ping-disable" || name == "dampening-secondary-wait" || name == "periodic-ping-interval" || name == "dampening-maximum-wait" || name == "minimum-interval" || name == "encap-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::BindingSegmentIdMpls()
    :
    segment_id_type{YType::enumeration, "segment-id-type"},
    label_value{YType::uint32, "label-value"}
{

    yang_name = "binding-segment-id-mpls"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::~BindingSegmentIdMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_data() const
{
    return segment_id_type.is_set
	|| label_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(label_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-segment-id-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id-type" || name == "label-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::ForwardingAdjacency()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"},
    hold_time{YType::uint32, "hold-time"}
{

    yang_name = "forwarding-adjacency"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::~ForwardingAdjacency()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_data() const
{
    return enable.is_set
	|| include_ipv6.is_set
	|| hold_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(include_ipv6.yfilter)
	|| ydk::is_set(hold_time.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.yfilter)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
        include_ipv6.value_namespace = name_space;
        include_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "include-ipv6" || name == "hold-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtects()
{

    yang_name = "path-option-protects"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::~PathOptionProtects()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_data() const
{
    for (std::size_t index=0; index<path_option_protect.size(); index++)
    {
        if(path_option_protect[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_operation() const
{
    for (std::size_t index=0; index<path_option_protect.size(); index++)
    {
        if(path_option_protect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-protect")
    {
        for(auto const & c : path_option_protect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect>();
        c->parent = this;
        path_option_protect.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option_protect)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-protect")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptionProtect()
    :
    protection{YType::enumeration, "protection"}
    	,
    path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>())
{
    path_options->parent = this;

    yang_name = "path-option-protect"; yang_parent_name = "path-option-protects"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::~PathOptionProtect()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_data() const
{
    return protection.is_set
	|| (path_options !=  nullptr && path_options->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection.yfilter)
	|| (path_options !=  nullptr && path_options->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protect" <<"[protection='" <<protection <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>();
        }
        return path_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-options" || name == "protection")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOptions()
{

    yang_name = "path-options"; yang_parent_name = "path-option-protect"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_property{YType::int32, "path-property"},
    interface{YType::str, "interface"},
    output_label{YType::int32, "output-label"},
    destination{YType::str, "destination"},
    lockdown{YType::enumeration, "lockdown"},
    verbatim{YType::enumeration, "verbatim"},
    pce{YType::enumeration, "pce"},
    pce_address{YType::str, "pce-address"},
    igp_type{YType::enumeration, "igp-type"},
    igp_instance{YType::str, "igp-instance"},
    igp_area{YType::int32, "igp-area"},
    igp_area_ip_address_id{YType::str, "igp-area-ip-address-id"},
    path_option_attribute_set_name{YType::str, "path-option-attribute-set-name"},
    protected_by_preference_level{YType::uint32, "protected-by-preference-level"},
    segment_routing{YType::enumeration, "segment-routing"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_property.is_set
	|| interface.is_set
	|| output_label.is_set
	|| destination.is_set
	|| lockdown.is_set
	|| verbatim.is_set
	|| pce.is_set
	|| pce_address.is_set
	|| igp_type.is_set
	|| igp_instance.is_set
	|| igp_area.is_set
	|| igp_area_ip_address_id.is_set
	|| path_option_attribute_set_name.is_set
	|| protected_by_preference_level.is_set
	|| segment_routing.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(path_property.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_ip_address_id.yfilter)
	|| ydk::is_set(path_option_attribute_set_name.yfilter)
	|| ydk::is_set(protected_by_preference_level.yfilter)
	|| ydk::is_set(segment_routing.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_property.is_set || is_set(path_property.yfilter)) leaf_name_data.push_back(path_property.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_ip_address_id.is_set || is_set(igp_area_ip_address_id.yfilter)) leaf_name_data.push_back(igp_area_ip_address_id.get_name_leafdata());
    if (path_option_attribute_set_name.is_set || is_set(path_option_attribute_set_name.yfilter)) leaf_name_data.push_back(path_option_attribute_set_name.get_name_leafdata());
    if (protected_by_preference_level.is_set || is_set(protected_by_preference_level.yfilter)) leaf_name_data.push_back(protected_by_preference_level.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-property")
    {
        path_property = value;
        path_property.value_namespace = name_space;
        path_property.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-ip-address-id")
    {
        igp_area_ip_address_id = value;
        igp_area_ip_address_id.value_namespace = name_space;
        igp_area_ip_address_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-attribute-set-name")
    {
        path_option_attribute_set_name = value;
        path_option_attribute_set_name.value_namespace = name_space;
        path_option_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level = value;
        protected_by_preference_level.value_namespace = name_space;
        protected_by_preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "path-property")
    {
        path_property.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-ip-address-id")
    {
        igp_area_ip_address_id.yfilter = yfilter;
    }
    if(value_path == "path-option-attribute-set-name")
    {
        path_option_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "path-type" || name == "path-id" || name == "path-name" || name == "path-property" || name == "interface" || name == "output-label" || name == "destination" || name == "lockdown" || name == "verbatim" || name == "pce" || name == "pce-address" || name == "igp-type" || name == "igp-instance" || name == "igp-area" || name == "igp-area-ip-address-id" || name == "path-option-attribute-set-name" || name == "protected-by-preference-level" || name == "segment-routing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::Bidirectional()
    :
    enabled{YType::empty, "enabled"}
    	,
    association_corouted_type(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>())
	,association_parameters(nullptr) // presence node
{
    association_corouted_type->parent = this;

    yang_name = "bidirectional"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::~Bidirectional()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_data() const
{
    return enabled.is_set
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_data())
	|| (association_parameters !=  nullptr && association_parameters->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_operation())
	|| (association_parameters !=  nullptr && association_parameters->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-corouted-type")
    {
        if(association_corouted_type == nullptr)
        {
            association_corouted_type = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>();
        }
        return association_corouted_type;
    }

    if(child_yang_name == "association-parameters")
    {
        if(association_parameters == nullptr)
        {
            association_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters>();
        }
        return association_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association_corouted_type != nullptr)
    {
        children["association-corouted-type"] = association_corouted_type;
    }

    if(association_parameters != nullptr)
    {
        children["association-parameters"] = association_parameters;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-corouted-type" || name == "association-parameters" || name == "enabled")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::AssociationCoroutedType()
    :
    wrap_protection_enable{YType::empty, "wrap-protection-enable"},
    enable{YType::empty, "enable"}
    	,
    fault_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>())
{
    fault_oam->parent = this;

    yang_name = "association-corouted-type"; yang_parent_name = "bidirectional"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::~AssociationCoroutedType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_data() const
{
    return wrap_protection_enable.is_set
	|| enable.is_set
	|| (fault_oam !=  nullptr && fault_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wrap_protection_enable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (fault_oam !=  nullptr && fault_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-corouted-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wrap_protection_enable.is_set || is_set(wrap_protection_enable.yfilter)) leaf_name_data.push_back(wrap_protection_enable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-oam")
    {
        if(fault_oam == nullptr)
        {
            fault_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>();
        }
        return fault_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_oam != nullptr)
    {
        children["fault-oam"] = fault_oam;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wrap-protection-enable")
    {
        wrap_protection_enable = value;
        wrap_protection_enable.value_namespace = name_space;
        wrap_protection_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wrap-protection-enable")
    {
        wrap_protection_enable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-oam" || name == "wrap-protection-enable" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::FaultOam()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "fault-oam"; yang_parent_name = "association-corouted-type"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::~FaultOam()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::AssociationParameters()
    :
    association_id{YType::uint32, "association-id"},
    association_source_address{YType::str, "association-source-address"},
    association_is_global_id_configured{YType::boolean, "association-is-global-id-configured"},
    association_global_id{YType::uint32, "association-global-id"}
{

    yang_name = "association-parameters"; yang_parent_name = "bidirectional"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::~AssociationParameters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_data() const
{
    return association_id.is_set
	|| association_source_address.is_set
	|| association_is_global_id_configured.is_set
	|| association_global_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_id.yfilter)
	|| ydk::is_set(association_source_address.yfilter)
	|| ydk::is_set(association_is_global_id_configured.yfilter)
	|| ydk::is_set(association_global_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_id.is_set || is_set(association_id.yfilter)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (association_source_address.is_set || is_set(association_source_address.yfilter)) leaf_name_data.push_back(association_source_address.get_name_leafdata());
    if (association_is_global_id_configured.is_set || is_set(association_is_global_id_configured.yfilter)) leaf_name_data.push_back(association_is_global_id_configured.get_name_leafdata());
    if (association_global_id.is_set || is_set(association_global_id.yfilter)) leaf_name_data.push_back(association_global_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-id")
    {
        association_id = value;
        association_id.value_namespace = name_space;
        association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-source-address")
    {
        association_source_address = value;
        association_source_address.value_namespace = name_space;
        association_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-is-global-id-configured")
    {
        association_is_global_id_configured = value;
        association_is_global_id_configured.value_namespace = name_space;
        association_is_global_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-global-id")
    {
        association_global_id = value;
        association_global_id.value_namespace = name_space;
        association_global_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-id")
    {
        association_id.yfilter = yfilter;
    }
    if(value_path == "association-source-address")
    {
        association_source_address.yfilter = yfilter;
    }
    if(value_path == "association-is-global-id-configured")
    {
        association_is_global_id_configured.yfilter = yfilter;
    }
    if(value_path == "association-global-id")
    {
        association_global_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-id" || name == "association-source-address" || name == "association-is-global-id-configured" || name == "association-global-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::AdminMode()
    :
    deactivate_tunnel{YType::empty, "deactivate-tunnel"}
{

    yang_name = "admin-mode"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::~AdminMode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_data() const
{
    return deactivate_tunnel.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deactivate_tunnel.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deactivate_tunnel.is_set || is_set(deactivate_tunnel.yfilter)) leaf_name_data.push_back(deactivate_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deactivate-tunnel")
    {
        deactivate_tunnel = value;
        deactivate_tunnel.value_namespace = name_space;
        deactivate_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deactivate-tunnel")
    {
        deactivate_tunnel.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deactivate-tunnel")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Switching()
    :
    transit(nullptr) // presence node
	,endpoint(nullptr) // presence node
{

    yang_name = "switching"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::~Switching()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_data() const
{
    return (transit !=  nullptr && transit->has_data())
	|| (endpoint !=  nullptr && endpoint->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_operation() const
{
    return is_set(yfilter)
	|| (transit !=  nullptr && transit->has_operation())
	|| (endpoint !=  nullptr && endpoint->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transit")
    {
        if(transit == nullptr)
        {
            transit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit>();
        }
        return transit;
    }

    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint>();
        }
        return endpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transit != nullptr)
    {
        children["transit"] = transit;
    }

    if(endpoint != nullptr)
    {
        children["endpoint"] = endpoint;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transit" || name == "endpoint")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::Transit()
    :
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{

    yang_name = "transit"; yang_parent_name = "switching"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::~Transit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_data() const
{
    return capability.is_set
	|| encoding.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability" || name == "encoding")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::Endpoint()
    :
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{

    yang_name = "endpoint"; yang_parent_name = "switching"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::~Endpoint()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_data() const
{
    return capability.is_set
	|| encoding.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability" || name == "encoding")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::Pce()
    :
    enable{YType::empty, "enable"},
    delegation{YType::empty, "delegation"}
{

    yang_name = "pce"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::~Pce()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_data() const
{
    return enable.is_set
	|| delegation.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(delegation.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (delegation.is_set || is_set(delegation.yfilter)) leaf_name_data.push_back(delegation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation")
    {
        delegation = value;
        delegation.value_namespace = name_space;
        delegation.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "delegation")
    {
        delegation.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "delegation")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::TunnelPathSelection()
    :
    tiebreaker{YType::enumeration, "tiebreaker"},
    path_selection_hop_limit{YType::uint32, "path-selection-hop-limit"},
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"}
    	,
    invalidation(nullptr) // presence node
{

    yang_name = "tunnel-path-selection"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::~TunnelPathSelection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_data() const
{
    return tiebreaker.is_set
	|| path_selection_hop_limit.is_set
	|| path_selection_cost_limit.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(path_selection_hop_limit.yfilter)
	|| ydk::is_set(path_selection_cost_limit.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (path_selection_hop_limit.is_set || is_set(path_selection_hop_limit.yfilter)) leaf_name_data.push_back(path_selection_hop_limit.get_name_leafdata());
    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.yfilter)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation>();
        }
        return invalidation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit = value;
        path_selection_hop_limit.value_namespace = name_space;
        path_selection_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
        path_selection_cost_limit.value_namespace = name_space;
        path_selection_cost_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "tiebreaker" || name == "path-selection-hop-limit" || name == "path-selection-cost-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::enumeration, "path-invalidation-action"}
{

    yang_name = "invalidation"; yang_parent_name = "tunnel-path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::~Invalidation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_data() const
{
    return path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-timeout" || name == "path-invalidation-action")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoBandwidth()
    :
    underflow_enable{YType::boolean, "underflow-enable"},
    enabled{YType::boolean, "enabled"},
    application_frequency{YType::uint32, "application-frequency"},
    overflow_enable{YType::boolean, "overflow-enable"},
    collection_only{YType::empty, "collection-only"}
    	,
    underflow(nullptr) // presence node
	,overflow(nullptr) // presence node
	,bandwidth_limits(nullptr) // presence node
	,adjustment_threshold(nullptr) // presence node
{

    yang_name = "auto-bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::~AutoBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_data() const
{
    return underflow_enable.is_set
	|| enabled.is_set
	|| application_frequency.is_set
	|| overflow_enable.is_set
	|| collection_only.is_set
	|| (underflow !=  nullptr && underflow->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_data())
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(underflow_enable.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(application_frequency.yfilter)
	|| ydk::is_set(overflow_enable.yfilter)
	|| ydk::is_set(collection_only.yfilter)
	|| (underflow !=  nullptr && underflow->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_operation())
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_enable.is_set || is_set(underflow_enable.yfilter)) leaf_name_data.push_back(underflow_enable.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (application_frequency.is_set || is_set(application_frequency.yfilter)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (overflow_enable.is_set || is_set(overflow_enable.yfilter)) leaf_name_data.push_back(overflow_enable.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.yfilter)) leaf_name_data.push_back(collection_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "underflow")
    {
        if(underflow == nullptr)
        {
            underflow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow>();
        }
        return underflow;
    }

    if(child_yang_name == "overflow")
    {
        if(overflow == nullptr)
        {
            overflow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow>();
        }
        return overflow;
    }

    if(child_yang_name == "bandwidth-limits")
    {
        if(bandwidth_limits == nullptr)
        {
            bandwidth_limits = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits>();
        }
        return bandwidth_limits;
    }

    if(child_yang_name == "adjustment-threshold")
    {
        if(adjustment_threshold == nullptr)
        {
            adjustment_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold>();
        }
        return adjustment_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(underflow != nullptr)
    {
        children["underflow"] = underflow;
    }

    if(overflow != nullptr)
    {
        children["overflow"] = overflow;
    }

    if(bandwidth_limits != nullptr)
    {
        children["bandwidth-limits"] = bandwidth_limits;
    }

    if(adjustment_threshold != nullptr)
    {
        children["adjustment-threshold"] = adjustment_threshold;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "underflow-enable")
    {
        underflow_enable = value;
        underflow_enable.value_namespace = name_space;
        underflow_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-frequency")
    {
        application_frequency = value;
        application_frequency.value_namespace = name_space;
        application_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable = value;
        overflow_enable.value_namespace = name_space;
        overflow_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
        collection_only.value_namespace = name_space;
        collection_only.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "underflow-enable")
    {
        underflow_enable.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "application-frequency")
    {
        application_frequency.yfilter = yfilter;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable.yfilter = yfilter;
    }
    if(value_path == "collection-only")
    {
        collection_only.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "underflow" || name == "overflow" || name == "bandwidth-limits" || name == "adjustment-threshold" || name == "underflow-enable" || name == "enabled" || name == "application-frequency" || name == "overflow-enable" || name == "collection-only")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::Underflow()
    :
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"},
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"}
{

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::~Underflow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_data() const
{
    return underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set
	|| underflow_threshold_limit.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(underflow_threshold_percent.yfilter)
	|| ydk::is_set(underflow_threshold_value.yfilter)
	|| ydk::is_set(underflow_threshold_limit.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.yfilter)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.yfilter)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());
    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.yfilter)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
        underflow_threshold_percent.value_namespace = name_space;
        underflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
        underflow_threshold_value.value_namespace = name_space;
        underflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
        underflow_threshold_limit.value_namespace = name_space;
        underflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "underflow-threshold-percent" || name == "underflow-threshold-value" || name == "underflow-threshold-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::Overflow()
    :
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"},
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"}
{

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::~Overflow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_data() const
{
    return overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set
	|| overflow_threshold_limit.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overflow_threshold_percent.yfilter)
	|| ydk::is_set(overflow_threshold_value.yfilter)
	|| ydk::is_set(overflow_threshold_limit.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.yfilter)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.yfilter)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());
    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.yfilter)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
        overflow_threshold_percent.value_namespace = name_space;
        overflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
        overflow_threshold_value.value_namespace = name_space;
        overflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
        overflow_threshold_limit.value_namespace = name_space;
        overflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-threshold-percent" || name == "overflow-threshold-value" || name == "overflow-threshold-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::BandwidthLimits()
    :
    bandwidth_min_limit{YType::uint32, "bandwidth-min-limit"},
    bandwidth_max_limit{YType::uint32, "bandwidth-max-limit"}
{

    yang_name = "bandwidth-limits"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::~BandwidthLimits()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_data() const
{
    return bandwidth_min_limit.is_set
	|| bandwidth_max_limit.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_min_limit.yfilter)
	|| ydk::is_set(bandwidth_max_limit.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_min_limit.is_set || is_set(bandwidth_min_limit.yfilter)) leaf_name_data.push_back(bandwidth_min_limit.get_name_leafdata());
    if (bandwidth_max_limit.is_set || is_set(bandwidth_max_limit.yfilter)) leaf_name_data.push_back(bandwidth_max_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit = value;
        bandwidth_min_limit.value_namespace = name_space;
        bandwidth_min_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit = value;
        bandwidth_max_limit.value_namespace = name_space;
        bandwidth_max_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit.yfilter = yfilter;
    }
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-min-limit" || name == "bandwidth-max-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::AdjustmentThreshold()
    :
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"}
{

    yang_name = "adjustment-threshold"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::~AdjustmentThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_data() const
{
    return adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_threshold_percent.yfilter)
	|| ydk::is_set(adjustment_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjustment-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.yfilter)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.yfilter)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
        adjustment_threshold_percent.value_namespace = name_space;
        adjustment_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
        adjustment_threshold_value.value_namespace = name_space;
        adjustment_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjustment-threshold-percent" || name == "adjustment-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::~Priority()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_data() const
{
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::~AffinityMask()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::Logging()
    :
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    all{YType::empty, "all"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"}
{

    yang_name = "logging"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::~Logging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_data() const
{
    return lsp_switch_over_change_message.is_set
	|| all.is_set
	|| record_route_messsage.is_set
	|| bfd_state_message.is_set
	|| bandwidth_change_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| insufficient_bw_message.is_set
	|| reoptimized_message.is_set
	|| pcalc_failure_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_switch_over_change_message.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(record_route_messsage.yfilter)
	|| ydk::is_set(bfd_state_message.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.yfilter)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.yfilter)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.yfilter)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
        lsp_switch_over_change_message.value_namespace = name_space;
        lsp_switch_over_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
        record_route_messsage.value_namespace = name_space;
        record_route_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
        bfd_state_message.value_namespace = name_space;
        bfd_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage.yfilter = yfilter;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-switch-over-change-message" || name == "all" || name == "record-route-messsage" || name == "bfd-state-message" || name == "bandwidth-change-message" || name == "reoptimize-attempts-message" || name == "reroute-messsage" || name == "state-message" || name == "insufficient-bw-message" || name == "reoptimized-message" || name == "pcalc-failure-message")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::Bandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_data() const
{
    return dste_type.is_set
	|| class_or_pool_type.is_set
	|| bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "class-or-pool-type" || name == "bandwidth")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Autoroute()
    :
    autoroute_announce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce>())
	,destinations(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations>())
{
    autoroute_announce->parent = this;
    destinations->parent = this;

    yang_name = "autoroute"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::~Autoroute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_data() const
{
    return (autoroute_announce !=  nullptr && autoroute_announce->has_data())
	|| (destinations !=  nullptr && destinations->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_operation() const
{
    return is_set(yfilter)
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_operation())
	|| (destinations !=  nullptr && destinations->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute-announce")
    {
        if(autoroute_announce == nullptr)
        {
            autoroute_announce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce>();
        }
        return autoroute_announce;
    }

    if(child_yang_name == "destinations")
    {
        if(destinations == nullptr)
        {
            destinations = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations>();
        }
        return destinations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoroute_announce != nullptr)
    {
        children["autoroute-announce"] = autoroute_announce;
    }

    if(destinations != nullptr)
    {
        children["destinations"] = destinations;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute-announce" || name == "destinations")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::AutorouteAnnounce()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"}
    	,
    exclude_traffic(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>())
	,metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric>())
{
    exclude_traffic->parent = this;
    metric->parent = this;

    yang_name = "autoroute-announce"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::~AutorouteAnnounce()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_data() const
{
    return enable.is_set
	|| include_ipv6.is_set
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(include_ipv6.yfilter)
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.yfilter)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-traffic")
    {
        if(exclude_traffic == nullptr)
        {
            exclude_traffic = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>();
        }
        return exclude_traffic;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude_traffic != nullptr)
    {
        children["exclude-traffic"] = exclude_traffic;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
        include_ipv6.value_namespace = name_space;
        include_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-traffic" || name == "metric" || name == "enable" || name == "include-ipv6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::ExcludeTraffic()
    :
    segment_routing{YType::empty, "segment-routing"}
{

    yang_name = "exclude-traffic"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::~ExcludeTraffic()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_data() const
{
    return segment_routing.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_routing.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::Metric()
    :
    metric_type{YType::enumeration, "metric-type"},
    absolute_metric{YType::uint32, "absolute-metric"},
    relative_metric{YType::int32, "relative-metric"},
    constant_metric{YType::uint32, "constant-metric"}
{

    yang_name = "metric"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_data() const
{
    return metric_type.is_set
	|| absolute_metric.is_set
	|| relative_metric.is_set
	|| constant_metric.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(absolute_metric.yfilter)
	|| ydk::is_set(relative_metric.yfilter)
	|| ydk::is_set(constant_metric.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (absolute_metric.is_set || is_set(absolute_metric.yfilter)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.yfilter)) leaf_name_data.push_back(relative_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.yfilter)) leaf_name_data.push_back(constant_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
        absolute_metric.value_namespace = name_space;
        absolute_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
        relative_metric.value_namespace = name_space;
        relative_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
        constant_metric.value_namespace = name_space;
        constant_metric.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "absolute-metric")
    {
        absolute_metric.yfilter = yfilter;
    }
    if(value_path == "relative-metric")
    {
        relative_metric.yfilter = yfilter;
    }
    if(value_path == "constant-metric")
    {
        constant_metric.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-type" || name == "absolute-metric" || name == "relative-metric" || name == "constant-metric")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destinations()
{

    yang_name = "destinations"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::~Destinations()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"}
{

    yang_name = "destination"; yang_parent_name = "destinations"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_data() const
{
    return destination_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{

    yang_name = "policy-classes"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::~PolicyClasses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_class.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity_affinity_type)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::~FastReroute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::TransportProfileTunnel()
    :
    source{YType::str, "source"}
    	,
    bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd>())
	,working_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp>())
	,destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination>())
	,fault(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault>())
	,protect_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp>())
{
    bfd->parent = this;
    working_lsp->parent = this;
    destination->parent = this;
    fault->parent = this;
    protect_lsp->parent = this;

    yang_name = "transport-profile-tunnel"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::~TransportProfileTunnel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_data() const
{
    return source.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (fault !=  nullptr && fault->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (fault !=  nullptr && fault->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:transport-profile-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "fault")
    {
        if(fault == nullptr)
        {
            fault = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault>();
        }
        return fault;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(fault != nullptr)
    {
        children["fault"] = fault;
    }

    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "working-lsp" || name == "destination" || name == "fault" || name == "protect-lsp" || name == "source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable{YType::empty, "enable"},
    multiplier_standby{YType::uint32, "multiplier-standby"}
    	,
    min_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval>())
	,min_interval_standby(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby>())
{
    min_interval->parent = this;
    min_interval_standby->parent = this;

    yang_name = "bfd"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| multiplier_standby.is_set
	|| (min_interval !=  nullptr && min_interval->has_data())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(multiplier_standby.yfilter)
	|| (min_interval !=  nullptr && min_interval->has_operation())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (multiplier_standby.is_set || is_set(multiplier_standby.yfilter)) leaf_name_data.push_back(multiplier_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-interval")
    {
        if(min_interval == nullptr)
        {
            min_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval>();
        }
        return min_interval;
    }

    if(child_yang_name == "min-interval-standby")
    {
        if(min_interval_standby == nullptr)
        {
            min_interval_standby = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby>();
        }
        return min_interval_standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_interval != nullptr)
    {
        children["min-interval"] = min_interval;
    }

    if(min_interval_standby != nullptr)
    {
        children["min-interval-standby"] = min_interval_standby;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-standby")
    {
        multiplier_standby = value;
        multiplier_standby.value_namespace = name_space;
        multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "multiplier-standby")
    {
        multiplier_standby.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-interval" || name == "min-interval-standby" || name == "detection-multiplier" || name == "enable" || name == "multiplier-standby")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::MinInterval()
    :
    interval_ms{YType::uint32, "interval-ms"},
    interval_us{YType::uint32, "interval-us"}
{

    yang_name = "min-interval"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::~MinInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_data() const
{
    return interval_ms.is_set
	|| interval_us.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_ms.yfilter)
	|| ydk::is_set(interval_us.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_ms.is_set || is_set(interval_ms.yfilter)) leaf_name_data.push_back(interval_ms.get_name_leafdata());
    if (interval_us.is_set || is_set(interval_us.yfilter)) leaf_name_data.push_back(interval_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-ms")
    {
        interval_ms = value;
        interval_ms.value_namespace = name_space;
        interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-us")
    {
        interval_us = value;
        interval_us.value_namespace = name_space;
        interval_us.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-ms")
    {
        interval_ms.yfilter = yfilter;
    }
    if(value_path == "interval-us")
    {
        interval_us.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-ms" || name == "interval-us")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::MinIntervalStandby()
    :
    interval_standby_ms{YType::uint32, "interval-standby-ms"},
    interval_standby_us{YType::uint32, "interval-standby-us"}
{

    yang_name = "min-interval-standby"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::~MinIntervalStandby()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_data() const
{
    return interval_standby_ms.is_set
	|| interval_standby_us.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_standby_ms.yfilter)
	|| ydk::is_set(interval_standby_us.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_standby_ms.is_set || is_set(interval_standby_ms.yfilter)) leaf_name_data.push_back(interval_standby_ms.get_name_leafdata());
    if (interval_standby_us.is_set || is_set(interval_standby_us.yfilter)) leaf_name_data.push_back(interval_standby_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms = value;
        interval_standby_ms.value_namespace = name_space;
        interval_standby_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us = value;
        interval_standby_us.value_namespace = name_space;
        interval_standby_us.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms.yfilter = yfilter;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-standby-ms" || name == "interval-standby-us")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::WorkingLsp()
    :
    in_label{YType::uint32, "in-label"},
    lockout{YType::empty, "lockout"},
    lsp_id{YType::uint32, "lsp-id"}
    	,
    out_label(nullptr) // presence node
{

    yang_name = "working-lsp"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::~WorkingLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_data() const
{
    return in_label.is_set
	|| lockout.is_set
	|| lsp_id.is_set
	|| (out_label !=  nullptr && out_label->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(lockout.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (out_label !=  nullptr && out_label->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-label")
    {
        if(out_label == nullptr)
        {
            out_label = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel>();
        }
        return out_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out_label != nullptr)
    {
        children["out-label"] = out_label;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "in-label" || name == "lockout" || name == "lsp-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::OutLabel()
    :
    label{YType::uint32, "label"},
    link{YType::uint32, "link"}
{

    yang_name = "out-label"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::~OutLabel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_data() const
{
    return label.is_set
	|| link.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "link")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::Destination()
    :
    node_id{YType::str, "node-id"},
    global_id{YType::uint32, "global-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "destination"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_data() const
{
    return node_id.is_set
	|| global_id.is_set
	|| tunnel_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "global-id" || name == "tunnel-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::Fault()
    :
    enable{YType::empty, "enable"}
    	,
    protection_trigger(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger>())
{
    protection_trigger->parent = this;

    yang_name = "fault"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::~Fault()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_data() const
{
    return enable.is_set
	|| (protection_trigger !=  nullptr && protection_trigger->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (protection_trigger !=  nullptr && protection_trigger->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-trigger")
    {
        if(protection_trigger == nullptr)
        {
            protection_trigger = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger>();
        }
        return protection_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection_trigger != nullptr)
    {
        children["protection-trigger"] = protection_trigger;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-trigger" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::ProtectionTrigger()
    :
    ldi{YType::boolean, "ldi"},
    ais{YType::boolean, "ais"},
    lkr{YType::boolean, "lkr"}
{

    yang_name = "protection-trigger"; yang_parent_name = "fault"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::~ProtectionTrigger()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_data() const
{
    return ldi.is_set
	|| ais.is_set
	|| lkr.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldi.yfilter)
	|| ydk::is_set(ais.yfilter)
	|| ydk::is_set(lkr.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi.is_set || is_set(ldi.yfilter)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.yfilter)) leaf_name_data.push_back(lkr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi")
    {
        ldi = value;
        ldi.value_namespace = name_space;
        ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkr")
    {
        lkr = value;
        lkr.value_namespace = name_space;
        lkr.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi")
    {
        ldi.yfilter = yfilter;
    }
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
    if(value_path == "lkr")
    {
        lkr.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi" || name == "ais" || name == "lkr")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::ProtectLsp()
    :
    in_label{YType::uint32, "in-label"},
    lockout{YType::empty, "lockout"},
    lsp_id{YType::uint32, "lsp-id"}
    	,
    out_label(nullptr) // presence node
{

    yang_name = "protect-lsp"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::~ProtectLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_data() const
{
    return in_label.is_set
	|| lockout.is_set
	|| lsp_id.is_set
	|| (out_label !=  nullptr && out_label->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(lockout.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (out_label !=  nullptr && out_label->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-label")
    {
        if(out_label == nullptr)
        {
            out_label = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel>();
        }
        return out_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out_label != nullptr)
    {
        children["out-label"] = out_label;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "in-label" || name == "lockout" || name == "lsp-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::OutLabel()
    :
    label{YType::uint32, "label"},
    link{YType::uint32, "link"}
{

    yang_name = "out-label"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::~OutLabel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_data() const
{
    return label.is_set
	|| link.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "link")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::MteTunnelAttributes()
    :
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    signalled_payload{YType::str, "signalled-payload"},
    fast_reroute{YType::empty, "fast-reroute"},
    impose_explicit_null{YType::empty, "impose-explicit-null"}
    	,
    destination_leafs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs>())
	,priority(nullptr) // presence node
	,new_style_affinities(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities>())
	,bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth>())
	,affinity_mask(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask>())
	,logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging>())
{
    destination_leafs->parent = this;
    new_style_affinities->parent = this;
    bandwidth->parent = this;
    affinity_mask->parent = this;
    logging->parent = this;

    yang_name = "mte-tunnel-attributes"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::~MteTunnelAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_data() const
{
    return record_route.is_set
	|| signalled_name.is_set
	|| path_selection_metric.is_set
	|| signalled_payload.is_set
	|| fast_reroute.is_set
	|| impose_explicit_null.is_set
	|| (destination_leafs !=  nullptr && destination_leafs->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (new_style_affinities !=  nullptr && new_style_affinities->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(signalled_payload.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(impose_explicit_null.yfilter)
	|| (destination_leafs !=  nullptr && destination_leafs->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (new_style_affinities !=  nullptr && new_style_affinities->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mte-tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (signalled_payload.is_set || is_set(signalled_payload.yfilter)) leaf_name_data.push_back(signalled_payload.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (impose_explicit_null.is_set || is_set(impose_explicit_null.yfilter)) leaf_name_data.push_back(impose_explicit_null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-leafs")
    {
        if(destination_leafs == nullptr)
        {
            destination_leafs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs>();
        }
        return destination_leafs;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "new-style-affinities")
    {
        if(new_style_affinities == nullptr)
        {
            new_style_affinities = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities>();
        }
        return new_style_affinities;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_leafs != nullptr)
    {
        children["destination-leafs"] = destination_leafs;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(new_style_affinities != nullptr)
    {
        children["new-style-affinities"] = new_style_affinities;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-payload")
    {
        signalled_payload = value;
        signalled_payload.value_namespace = name_space;
        signalled_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "impose-explicit-null")
    {
        impose_explicit_null = value;
        impose_explicit_null.value_namespace = name_space;
        impose_explicit_null.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "signalled-payload")
    {
        signalled_payload.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "impose-explicit-null")
    {
        impose_explicit_null.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-leafs" || name == "priority" || name == "new-style-affinities" || name == "bandwidth" || name == "affinity-mask" || name == "logging" || name == "record-route" || name == "signalled-name" || name == "path-selection-metric" || name == "signalled-payload" || name == "fast-reroute" || name == "impose-explicit-null")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeafs()
{

    yang_name = "destination-leafs"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::~DestinationLeafs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_data() const
{
    for (std::size_t index=0; index<destination_leaf.size(); index++)
    {
        if(destination_leaf[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_operation() const
{
    for (std::size_t index=0; index<destination_leaf.size(); index++)
    {
        if(destination_leaf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-leafs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-leaf")
    {
        for(auto const & c : destination_leaf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf>();
        c->parent = this;
        destination_leaf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_leaf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-leaf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::DestinationLeaf()
    :
    address{YType::str, "address"},
    destination_disable{YType::empty, "destination-disable"},
    destination{YType::empty, "destination"}
    	,
    s2l_logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging>())
	,path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions>())
{
    s2l_logging->parent = this;
    path_options->parent = this;

    yang_name = "destination-leaf"; yang_parent_name = "destination-leafs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::~DestinationLeaf()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_data() const
{
    return address.is_set
	|| destination_disable.is_set
	|| destination.is_set
	|| (s2l_logging !=  nullptr && s2l_logging->has_data())
	|| (path_options !=  nullptr && path_options->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(destination_disable.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| (s2l_logging !=  nullptr && s2l_logging->has_operation())
	|| (path_options !=  nullptr && path_options->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-leaf" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (destination_disable.is_set || is_set(destination_disable.yfilter)) leaf_name_data.push_back(destination_disable.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-logging")
    {
        if(s2l_logging == nullptr)
        {
            s2l_logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging>();
        }
        return s2l_logging;
    }

    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions>();
        }
        return path_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(s2l_logging != nullptr)
    {
        children["s2l-logging"] = s2l_logging;
    }

    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-disable")
    {
        destination_disable = value;
        destination_disable.value_namespace = name_space;
        destination_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "destination-disable")
    {
        destination_disable.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-logging" || name == "path-options" || name == "address" || name == "destination-disable" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::S2LLogging()
    :
    s2l_reroute_messsage{YType::empty, "s2l-reroute-messsage"},
    s2l_insufficient_bw_messsage{YType::empty, "s2l-insufficient-bw-messsage"},
    s2l_pcalc_failure_message{YType::empty, "s2l-pcalc-failure-message"},
    s2l_state_message{YType::empty, "s2l-state-message"}
{

    yang_name = "s2l-logging"; yang_parent_name = "destination-leaf"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::~S2LLogging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::has_data() const
{
    return s2l_reroute_messsage.is_set
	|| s2l_insufficient_bw_messsage.is_set
	|| s2l_pcalc_failure_message.is_set
	|| s2l_state_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_reroute_messsage.yfilter)
	|| ydk::is_set(s2l_insufficient_bw_messsage.yfilter)
	|| ydk::is_set(s2l_pcalc_failure_message.yfilter)
	|| ydk::is_set(s2l_state_message.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_reroute_messsage.is_set || is_set(s2l_reroute_messsage.yfilter)) leaf_name_data.push_back(s2l_reroute_messsage.get_name_leafdata());
    if (s2l_insufficient_bw_messsage.is_set || is_set(s2l_insufficient_bw_messsage.yfilter)) leaf_name_data.push_back(s2l_insufficient_bw_messsage.get_name_leafdata());
    if (s2l_pcalc_failure_message.is_set || is_set(s2l_pcalc_failure_message.yfilter)) leaf_name_data.push_back(s2l_pcalc_failure_message.get_name_leafdata());
    if (s2l_state_message.is_set || is_set(s2l_state_message.yfilter)) leaf_name_data.push_back(s2l_state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-reroute-messsage")
    {
        s2l_reroute_messsage = value;
        s2l_reroute_messsage.value_namespace = name_space;
        s2l_reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-insufficient-bw-messsage")
    {
        s2l_insufficient_bw_messsage = value;
        s2l_insufficient_bw_messsage.value_namespace = name_space;
        s2l_insufficient_bw_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-pcalc-failure-message")
    {
        s2l_pcalc_failure_message = value;
        s2l_pcalc_failure_message.value_namespace = name_space;
        s2l_pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state-message")
    {
        s2l_state_message = value;
        s2l_state_message.value_namespace = name_space;
        s2l_state_message.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-reroute-messsage")
    {
        s2l_reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "s2l-insufficient-bw-messsage")
    {
        s2l_insufficient_bw_messsage.yfilter = yfilter;
    }
    if(value_path == "s2l-pcalc-failure-message")
    {
        s2l_pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "s2l-state-message")
    {
        s2l_state_message.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-reroute-messsage" || name == "s2l-insufficient-bw-messsage" || name == "s2l-pcalc-failure-message" || name == "s2l-state-message")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOptions()
{

    yang_name = "path-options"; yang_parent_name = "destination-leaf"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    lockdown{YType::enumeration, "lockdown"},
    verbatim{YType::enumeration, "verbatim"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| lockdown.is_set
	|| verbatim.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "path-type" || name == "path-id" || name == "path-name" || name == "lockdown" || name == "verbatim")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::~Priority()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_data() const
{
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinities()
{

    yang_name = "new-style-affinities"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::~NewStyleAffinities()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity.size(); index++)
    {
        if(new_style_affinity[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity.size(); index++)
    {
        if(new_style_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity")
    {
        for(auto const & c : new_style_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity>();
        c->parent = this;
        new_style_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::NewStyleAffinity()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity"; yang_parent_name = "new-style-affinities"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::~NewStyleAffinity()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::Bandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_data() const
{
    return dste_type.is_set
	|| class_or_pool_type.is_set
	|| bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "class-or-pool-type" || name == "bandwidth")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::~AffinityMask()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::Logging()
    :
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    all{YType::empty, "all"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    state_message{YType::empty, "state-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    sub_lsp_state_message{YType::empty, "sub-lsp-state-message"},
    reroute_messsage{YType::empty, "reroute-messsage"}
{

    yang_name = "logging"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::~Logging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_data() const
{
    return insufficient_bw_message.is_set
	|| reoptimized_message.is_set
	|| bandwidth_change_message.is_set
	|| all.is_set
	|| pcalc_failure_message.is_set
	|| state_message.is_set
	|| reoptimize_attempts_message.is_set
	|| sub_lsp_state_message.is_set
	|| reroute_messsage.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(sub_lsp_state_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (sub_lsp_state_message.is_set || is_set(sub_lsp_state_message.yfilter)) leaf_name_data.push_back(sub_lsp_state_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message = value;
        sub_lsp_state_message.value_namespace = name_space;
        sub_lsp_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insufficient-bw-message" || name == "reoptimized-message" || name == "bandwidth-change-message" || name == "all" || name == "pcalc-failure-message" || name == "state-message" || name == "reoptimize-attempts-message" || name == "sub-lsp-state-message" || name == "reroute-messsage")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization()
    :
    ssm_disable{YType::empty, "ssm-disable"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    selection_input{YType::empty, "selection-input"},
    enable{YType::empty, "enable"},
    priority{YType::uint32, "priority"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    input_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel>())
	,output_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel>())
{
    input_quality_level->parent = this;
    output_quality_level->parent = this;

    yang_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::~CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_data() const
{
    return ssm_disable.is_set
	|| time_of_day_priority.is_set
	|| selection_input.is_set
	|| enable.is_set
	|| priority.is_set
	|| wait_to_restore_time.is_set
	|| (input_quality_level !=  nullptr && input_quality_level->has_data())
	|| (output_quality_level !=  nullptr && output_quality_level->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssm_disable.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| (input_quality_level !=  nullptr && input_quality_level->has_operation())
	|| (output_quality_level !=  nullptr && output_quality_level->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-cfg:Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_quality_level != nullptr)
    {
        children["input-quality-level"] = input_quality_level;
    }

    if(output_quality_level != nullptr)
    {
        children["output-quality-level"] = output_quality_level;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssm-disable")
    {
        ssm_disable = value;
        ssm_disable.value_namespace = name_space;
        ssm_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssm-disable")
    {
        ssm_disable.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-quality-level" || name == "output-quality-level" || name == "ssm-disable" || name == "time-of-day-priority" || name == "selection-input" || name == "enable" || name == "priority" || name == "wait-to-restore-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "input-quality-level"; yang_parent_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "output-quality-level"; yang_parent_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Portmode::Portmode()
    :
    speed_sel{YType::enumeration, "speed-sel"},
    fec_sel{YType::enumeration, "fec-sel"},
    diff_sel{YType::enumeration, "diff-sel"}
{

    yang_name = "portmode"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Portmode::~Portmode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_data() const
{
    return speed_sel.is_set
	|| fec_sel.is_set
	|| diff_sel.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(speed_sel.yfilter)
	|| ydk::is_set(fec_sel.yfilter)
	|| ydk::is_set(diff_sel.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Portmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Portmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (speed_sel.is_set || is_set(speed_sel.yfilter)) leaf_name_data.push_back(speed_sel.get_name_leafdata());
    if (fec_sel.is_set || is_set(fec_sel.yfilter)) leaf_name_data.push_back(fec_sel.get_name_leafdata());
    if (diff_sel.is_set || is_set(diff_sel.yfilter)) leaf_name_data.push_back(diff_sel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Portmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Portmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Portmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "speed-sel")
    {
        speed_sel = value;
        speed_sel.value_namespace = name_space;
        speed_sel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-sel")
    {
        fec_sel = value;
        fec_sel.value_namespace = name_space;
        fec_sel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diff-sel")
    {
        diff_sel = value;
        diff_sel.value_namespace = name_space;
        diff_sel.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Portmode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "speed-sel")
    {
        speed_sel.yfilter = yfilter;
    }
    if(value_path == "fec-sel")
    {
        fec_sel.yfilter = yfilter;
    }
    if(value_path == "diff-sel")
    {
        diff_sel.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "speed-sel" || name == "fec-sel" || name == "diff-sel")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::Pbr()
    :
    service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "pbr"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::~Pbr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_in.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-cfg:pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.yfilter)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
        service_policy_in.value_namespace = name_space;
        service_policy_in.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-in")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"}
{

    yang_name = "service-policy"; yang_parent_name = "pbr"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::PerformanceManagement()
    :
    stm_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>())
	,minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>())
	,sonet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>())
	,hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>())
	,ethernet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>())
	,minute15otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms>())
	,oc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>())
	,ethernet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>())
	,ho_vc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>())
	,second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>())
	,hour24otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms>())
	,sts_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>())
	,hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>())
	,ho_vc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>())
	,sts_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>())
	,stm_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>())
	,sonet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>())
	,minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>())
	,oc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>())
	,ethernet_second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>())
	,hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>())
	,minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>())
{
    stm_hour24->parent = this;
    minute15_gfp->parent = this;
    sonet_minute15->parent = this;
    hour24_gfp->parent = this;
    ethernet_hour24->parent = this;
    minute15otn_tcms->parent = this;
    oc_hour24->parent = this;
    ethernet_minute15->parent = this;
    ho_vc_hour24->parent = this;
    second30->parent = this;
    hour24otn_tcms->parent = this;
    sts_minute15->parent = this;
    hour24->parent = this;
    ho_vc_minute15->parent = this;
    sts_hour24->parent = this;
    stm_minute15->parent = this;
    sonet_hour24->parent = this;
    minute15_path->parent = this;
    oc_minute15->parent = this;
    ethernet_second30->parent = this;
    hour24_path->parent = this;
    minute15->parent = this;

    yang_name = "performance-management"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::~PerformanceManagement()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_data() const
{
    return (stm_hour24 !=  nullptr && stm_hour24->has_data())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_data())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_data())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_data())
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_data())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_data())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_data())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_data())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_data())
	|| (second30 !=  nullptr && second30->has_data())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_data())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_data())
	|| (hour24 !=  nullptr && hour24->has_data())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_data())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_data())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_data())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_data())
	|| (minute15_path !=  nullptr && minute15_path->has_data())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_data())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_data())
	|| (hour24_path !=  nullptr && hour24_path->has_data())
	|| (minute15 !=  nullptr && minute15->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24 !=  nullptr && stm_hour24->has_operation())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_operation())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation())
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_operation())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_operation())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_operation())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_operation())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_operation())
	|| (second30 !=  nullptr && second30->has_operation())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_operation())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_operation())
	|| (hour24 !=  nullptr && hour24->has_operation())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_operation())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_operation())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_operation())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_operation())
	|| (minute15_path !=  nullptr && minute15_path->has_operation())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_operation())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_operation())
	|| (hour24_path !=  nullptr && hour24_path->has_operation())
	|| (minute15 !=  nullptr && minute15->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-cfg:performance-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24")
    {
        if(stm_hour24 == nullptr)
        {
            stm_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>();
        }
        return stm_hour24;
    }

    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp == nullptr)
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>();
        }
        return minute15_gfp;
    }

    if(child_yang_name == "sonet-minute15")
    {
        if(sonet_minute15 == nullptr)
        {
            sonet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>();
        }
        return sonet_minute15;
    }

    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp == nullptr)
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>();
        }
        return hour24_gfp;
    }

    if(child_yang_name == "ethernet-hour24")
    {
        if(ethernet_hour24 == nullptr)
        {
            ethernet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>();
        }
        return ethernet_hour24;
    }

    if(child_yang_name == "minute15otn-tcms")
    {
        if(minute15otn_tcms == nullptr)
        {
            minute15otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms>();
        }
        return minute15otn_tcms;
    }

    if(child_yang_name == "oc-hour24")
    {
        if(oc_hour24 == nullptr)
        {
            oc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>();
        }
        return oc_hour24;
    }

    if(child_yang_name == "ethernet-minute15")
    {
        if(ethernet_minute15 == nullptr)
        {
            ethernet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>();
        }
        return ethernet_minute15;
    }

    if(child_yang_name == "ho-vc-hour24")
    {
        if(ho_vc_hour24 == nullptr)
        {
            ho_vc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>();
        }
        return ho_vc_hour24;
    }

    if(child_yang_name == "second30")
    {
        if(second30 == nullptr)
        {
            second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>();
        }
        return second30;
    }

    if(child_yang_name == "hour24otn-tcms")
    {
        if(hour24otn_tcms == nullptr)
        {
            hour24otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms>();
        }
        return hour24otn_tcms;
    }

    if(child_yang_name == "sts-minute15")
    {
        if(sts_minute15 == nullptr)
        {
            sts_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>();
        }
        return sts_minute15;
    }

    if(child_yang_name == "hour24")
    {
        if(hour24 == nullptr)
        {
            hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>();
        }
        return hour24;
    }

    if(child_yang_name == "ho-vc-minute15")
    {
        if(ho_vc_minute15 == nullptr)
        {
            ho_vc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>();
        }
        return ho_vc_minute15;
    }

    if(child_yang_name == "sts-hour24")
    {
        if(sts_hour24 == nullptr)
        {
            sts_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>();
        }
        return sts_hour24;
    }

    if(child_yang_name == "stm-minute15")
    {
        if(stm_minute15 == nullptr)
        {
            stm_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>();
        }
        return stm_minute15;
    }

    if(child_yang_name == "sonet-hour24")
    {
        if(sonet_hour24 == nullptr)
        {
            sonet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>();
        }
        return sonet_hour24;
    }

    if(child_yang_name == "minute15-path")
    {
        if(minute15_path == nullptr)
        {
            minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>();
        }
        return minute15_path;
    }

    if(child_yang_name == "oc-minute15")
    {
        if(oc_minute15 == nullptr)
        {
            oc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>();
        }
        return oc_minute15;
    }

    if(child_yang_name == "ethernet-second30")
    {
        if(ethernet_second30 == nullptr)
        {
            ethernet_second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>();
        }
        return ethernet_second30;
    }

    if(child_yang_name == "hour24-path")
    {
        if(hour24_path == nullptr)
        {
            hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>();
        }
        return hour24_path;
    }

    if(child_yang_name == "minute15")
    {
        if(minute15 == nullptr)
        {
            minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>();
        }
        return minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24 != nullptr)
    {
        children["stm-hour24"] = stm_hour24;
    }

    if(minute15_gfp != nullptr)
    {
        children["minute15-gfp"] = minute15_gfp;
    }

    if(sonet_minute15 != nullptr)
    {
        children["sonet-minute15"] = sonet_minute15;
    }

    if(hour24_gfp != nullptr)
    {
        children["hour24-gfp"] = hour24_gfp;
    }

    if(ethernet_hour24 != nullptr)
    {
        children["ethernet-hour24"] = ethernet_hour24;
    }

    if(minute15otn_tcms != nullptr)
    {
        children["minute15otn-tcms"] = minute15otn_tcms;
    }

    if(oc_hour24 != nullptr)
    {
        children["oc-hour24"] = oc_hour24;
    }

    if(ethernet_minute15 != nullptr)
    {
        children["ethernet-minute15"] = ethernet_minute15;
    }

    if(ho_vc_hour24 != nullptr)
    {
        children["ho-vc-hour24"] = ho_vc_hour24;
    }

    if(second30 != nullptr)
    {
        children["second30"] = second30;
    }

    if(hour24otn_tcms != nullptr)
    {
        children["hour24otn-tcms"] = hour24otn_tcms;
    }

    if(sts_minute15 != nullptr)
    {
        children["sts-minute15"] = sts_minute15;
    }

    if(hour24 != nullptr)
    {
        children["hour24"] = hour24;
    }

    if(ho_vc_minute15 != nullptr)
    {
        children["ho-vc-minute15"] = ho_vc_minute15;
    }

    if(sts_hour24 != nullptr)
    {
        children["sts-hour24"] = sts_hour24;
    }

    if(stm_minute15 != nullptr)
    {
        children["stm-minute15"] = stm_minute15;
    }

    if(sonet_hour24 != nullptr)
    {
        children["sonet-hour24"] = sonet_hour24;
    }

    if(minute15_path != nullptr)
    {
        children["minute15-path"] = minute15_path;
    }

    if(oc_minute15 != nullptr)
    {
        children["oc-minute15"] = oc_minute15;
    }

    if(ethernet_second30 != nullptr)
    {
        children["ethernet-second30"] = ethernet_second30;
    }

    if(hour24_path != nullptr)
    {
        children["hour24-path"] = hour24_path;
    }

    if(minute15 != nullptr)
    {
        children["minute15"] = minute15;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24" || name == "minute15-gfp" || name == "sonet-minute15" || name == "hour24-gfp" || name == "ethernet-hour24" || name == "minute15otn-tcms" || name == "oc-hour24" || name == "ethernet-minute15" || name == "ho-vc-hour24" || name == "second30" || name == "hour24otn-tcms" || name == "sts-minute15" || name == "hour24" || name == "ho-vc-minute15" || name == "sts-hour24" || name == "stm-minute15" || name == "sonet-hour24" || name == "minute15-path" || name == "oc-minute15" || name == "ethernet-second30" || name == "hour24-path" || name == "minute15")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24()
    :
    stm_hour24_stm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>())
{
    stm_hour24_stm->parent = this;

    yang_name = "stm-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::~StmHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_data() const
{
    return (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm")
    {
        if(stm_hour24_stm == nullptr)
        {
            stm_hour24_stm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>();
        }
        return stm_hour24_stm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24_stm != nullptr)
    {
        children["stm-hour24-stm"] = stm_hour24_stm;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24Stm()
    :
    stm_hour24_stm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>())
	,stm_hour24_stm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>())
{
    stm_hour24_stm_reports->parent = this;
    stm_hour24_stm_thresholds->parent = this;

    yang_name = "stm-hour24-stm"; yang_parent_name = "stm-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::~StmHour24Stm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_data() const
{
    return (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_data())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_operation())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-reports")
    {
        if(stm_hour24_stm_reports == nullptr)
        {
            stm_hour24_stm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>();
        }
        return stm_hour24_stm_reports;
    }

    if(child_yang_name == "stm-hour24-stm-thresholds")
    {
        if(stm_hour24_stm_thresholds == nullptr)
        {
            stm_hour24_stm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>();
        }
        return stm_hour24_stm_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24_stm_reports != nullptr)
    {
        children["stm-hour24-stm-reports"] = stm_hour24_stm_reports;
    }

    if(stm_hour24_stm_thresholds != nullptr)
    {
        children["stm-hour24-stm-thresholds"] = stm_hour24_stm_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-reports" || name == "stm-hour24-stm-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReports()
{

    yang_name = "stm-hour24-stm-reports"; yang_parent_name = "stm-hour24-stm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::~StmHour24StmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_data() const
{
    for (std::size_t index=0; index<stm_hour24_stm_report.size(); index++)
    {
        if(stm_hour24_stm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_report.size(); index++)
    {
        if(stm_hour24_stm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-report")
    {
        for(auto const & c : stm_hour24_stm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport>();
        c->parent = this;
        stm_hour24_stm_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_hour24_stm_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::StmHour24StmReport()
    :
    stm_report{YType::enumeration, "stm-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "stm-hour24-stm-report"; yang_parent_name = "stm-hour24-stm-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::~StmHour24StmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_data() const
{
    return stm_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-report" <<"[stm-report='" <<stm_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_report.is_set || is_set(stm_report.yfilter)) leaf_name_data.push_back(stm_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-report")
    {
        stm_report = value;
        stm_report.value_namespace = name_space;
        stm_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-report")
    {
        stm_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThresholds()
{

    yang_name = "stm-hour24-stm-thresholds"; yang_parent_name = "stm-hour24-stm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::~StmHour24StmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_data() const
{
    for (std::size_t index=0; index<stm_hour24_stm_threshold.size(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_threshold.size(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-threshold")
    {
        for(auto const & c : stm_hour24_stm_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold>();
        c->parent = this;
        stm_hour24_stm_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_hour24_stm_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::StmHour24StmThreshold()
    :
    stm_threshold{YType::enumeration, "stm-threshold"},
    stm_threshold_value{YType::int32, "stm-threshold-value"}
{

    yang_name = "stm-hour24-stm-threshold"; yang_parent_name = "stm-hour24-stm-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::~StmHour24StmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_data() const
{
    return stm_threshold.is_set
	|| stm_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_threshold.yfilter)
	|| ydk::is_set(stm_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-threshold" <<"[stm-threshold='" <<stm_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_threshold.is_set || is_set(stm_threshold.yfilter)) leaf_name_data.push_back(stm_threshold.get_name_leafdata());
    if (stm_threshold_value.is_set || is_set(stm_threshold_value.yfilter)) leaf_name_data.push_back(stm_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold = value;
        stm_threshold.value_namespace = name_space;
        stm_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value = value;
        stm_threshold_value.value_namespace = name_space;
        stm_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold.yfilter = yfilter;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-threshold" || name == "stm-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp()
    :
    minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>())
{
    minute15_gfp->parent = this;

    yang_name = "minute15-gfp"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::~Minute15Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_data() const
{
    return (minute15_gfp !=  nullptr && minute15_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp == nullptr)
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>();
        }
        return minute15_gfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_gfp != nullptr)
    {
        children["minute15-gfp"] = minute15_gfp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15Gfp_()
    :
    minute15_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>())
	,minute15_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>())
{
    minute15_gfp_reports->parent = this;
    minute15_gfp_thresholds->parent = this;

    yang_name = "minute15-gfp"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::~Minute15Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_data() const
{
    return (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_data())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_operation())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-reports")
    {
        if(minute15_gfp_reports == nullptr)
        {
            minute15_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>();
        }
        return minute15_gfp_reports;
    }

    if(child_yang_name == "minute15-gfp-thresholds")
    {
        if(minute15_gfp_thresholds == nullptr)
        {
            minute15_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>();
        }
        return minute15_gfp_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_gfp_reports != nullptr)
    {
        children["minute15-gfp-reports"] = minute15_gfp_reports;
    }

    if(minute15_gfp_thresholds != nullptr)
    {
        children["minute15-gfp-thresholds"] = minute15_gfp_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-reports" || name == "minute15-gfp-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReports()
{

    yang_name = "minute15-gfp-reports"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::~Minute15GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_data() const
{
    for (std::size_t index=0; index<minute15_gfp_report.size(); index++)
    {
        if(minute15_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_report.size(); index++)
    {
        if(minute15_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-report")
    {
        for(auto const & c : minute15_gfp_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport>();
        c->parent = this;
        minute15_gfp_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_gfp_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::Minute15GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{

    yang_name = "minute15-gfp-report"; yang_parent_name = "minute15-gfp-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::~Minute15GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_data() const
{
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-report" <<"[gfp-report='" <<gfp_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.yfilter)) leaf_name_data.push_back(gfp_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
        gfp_report.value_namespace = name_space;
        gfp_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-report")
    {
        gfp_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThresholds()
{

    yang_name = "minute15-gfp-thresholds"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::~Minute15GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15_gfp_threshold.size(); index++)
    {
        if(minute15_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_threshold.size(); index++)
    {
        if(minute15_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-threshold")
    {
        for(auto const & c : minute15_gfp_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold>();
        c->parent = this;
        minute15_gfp_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_gfp_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::Minute15GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::int32, "gfp-threshold-value"}
{

    yang_name = "minute15-gfp-threshold"; yang_parent_name = "minute15-gfp-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::~Minute15GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_data() const
{
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_threshold.yfilter)
	|| ydk::is_set(gfp_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-threshold" <<"[gfp-threshold='" <<gfp_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.yfilter)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.yfilter)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
        gfp_threshold.value_namespace = name_space;
        gfp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
        gfp_threshold_value.value_namespace = name_space;
        gfp_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold.yfilter = yfilter;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-threshold" || name == "gfp-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15()
    :
    sonet_minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>())
	,sonet_minute15_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>())
{
    sonet_minute15_path->parent = this;
    sonet_minute15_ocn->parent = this;

    yang_name = "sonet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::~SonetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_data() const
{
    return (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_data())
	|| (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_operation())
	|| (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path")
    {
        if(sonet_minute15_path == nullptr)
        {
            sonet_minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>();
        }
        return sonet_minute15_path;
    }

    if(child_yang_name == "sonet-minute15-ocn")
    {
        if(sonet_minute15_ocn == nullptr)
        {
            sonet_minute15_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>();
        }
        return sonet_minute15_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_path != nullptr)
    {
        children["sonet-minute15-path"] = sonet_minute15_path;
    }

    if(sonet_minute15_ocn != nullptr)
    {
        children["sonet-minute15-ocn"] = sonet_minute15_ocn;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path" || name == "sonet-minute15-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15Path()
    :
    sonet_minute15_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>())
	,sonet_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>())
{
    sonet_minute15_path_reports->parent = this;
    sonet_minute15_path_thresholds->parent = this;

    yang_name = "sonet-minute15-path"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::~SonetMinute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_data() const
{
    return (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_data())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_operation())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-reports")
    {
        if(sonet_minute15_path_reports == nullptr)
        {
            sonet_minute15_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>();
        }
        return sonet_minute15_path_reports;
    }

    if(child_yang_name == "sonet-minute15-path-thresholds")
    {
        if(sonet_minute15_path_thresholds == nullptr)
        {
            sonet_minute15_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>();
        }
        return sonet_minute15_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_path_reports != nullptr)
    {
        children["sonet-minute15-path-reports"] = sonet_minute15_path_reports;
    }

    if(sonet_minute15_path_thresholds != nullptr)
    {
        children["sonet-minute15-path-thresholds"] = sonet_minute15_path_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-reports" || name == "sonet-minute15-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReports()
{

    yang_name = "sonet-minute15-path-reports"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::~SonetMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path_report.size(); index++)
    {
        if(sonet_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_report.size(); index++)
    {
        if(sonet_minute15_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-report")
    {
        for(auto const & c : sonet_minute15_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport>();
        c->parent = this;
        sonet_minute15_path_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_path_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::SonetMinute15PathReport()
    :
    path_report{YType::enumeration, "path-report"}
{

    yang_name = "sonet-minute15-path-report"; yang_parent_name = "sonet-minute15-path-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::~SonetMinute15PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_data() const
{
    return path_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-report" <<"[path-report='" <<path_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-report")
    {
        path_report = value;
        path_report.value_namespace = name_space;
        path_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-report")
    {
        path_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThresholds()
{

    yang_name = "sonet-minute15-path-thresholds"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::~SonetMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path_threshold.size(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_threshold.size(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-threshold")
    {
        for(auto const & c : sonet_minute15_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold>();
        c->parent = this;
        sonet_minute15_path_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_path_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::SonetMinute15PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{

    yang_name = "sonet-minute15-path-threshold"; yang_parent_name = "sonet-minute15-path-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::~SonetMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_data() const
{
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_threshold.yfilter)
	|| ydk::is_set(path_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
        path_threshold.value_namespace = name_space;
        path_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
        path_threshold_value.value_namespace = name_space;
        path_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-threshold")
    {
        path_threshold.yfilter = yfilter;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-threshold" || name == "path-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15Ocn()
    :
    sonet_minute15_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>())
	,sonet_minute15_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>())
{
    sonet_minute15_ocn_reports->parent = this;
    sonet_minute15_ocn_thresholds->parent = this;

    yang_name = "sonet-minute15-ocn"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::~SonetMinute15Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_data() const
{
    return (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_data())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_operation())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-reports")
    {
        if(sonet_minute15_ocn_reports == nullptr)
        {
            sonet_minute15_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>();
        }
        return sonet_minute15_ocn_reports;
    }

    if(child_yang_name == "sonet-minute15-ocn-thresholds")
    {
        if(sonet_minute15_ocn_thresholds == nullptr)
        {
            sonet_minute15_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>();
        }
        return sonet_minute15_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_ocn_reports != nullptr)
    {
        children["sonet-minute15-ocn-reports"] = sonet_minute15_ocn_reports;
    }

    if(sonet_minute15_ocn_thresholds != nullptr)
    {
        children["sonet-minute15-ocn-thresholds"] = sonet_minute15_ocn_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-reports" || name == "sonet-minute15-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReports()
{

    yang_name = "sonet-minute15-ocn-reports"; yang_parent_name = "sonet-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::~SonetMinute15OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_report.size(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_report.size(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-report")
    {
        for(auto const & c : sonet_minute15_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport>();
        c->parent = this;
        sonet_minute15_ocn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_ocn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::SonetMinute15OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"}
{

    yang_name = "sonet-minute15-ocn-report"; yang_parent_name = "sonet-minute15-ocn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::~SonetMinute15OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_data() const
{
    return ocn_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThresholds()
{

    yang_name = "sonet-minute15-ocn-thresholds"; yang_parent_name = "sonet-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::~SonetMinute15OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.size(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.size(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-threshold")
    {
        for(auto const & c : sonet_minute15_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold>();
        c->parent = this;
        sonet_minute15_ocn_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_ocn_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::SonetMinute15OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{

    yang_name = "sonet-minute15-ocn-threshold"; yang_parent_name = "sonet-minute15-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::~SonetMinute15OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_data() const
{
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp()
    :
    hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>())
{
    hour24_gfp->parent = this;

    yang_name = "hour24-gfp"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::~Hour24Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_data() const
{
    return (hour24_gfp !=  nullptr && hour24_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp == nullptr)
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>();
        }
        return hour24_gfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_gfp != nullptr)
    {
        children["hour24-gfp"] = hour24_gfp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24Gfp_()
    :
    hour24_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>())
	,hour24_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>())
{
    hour24_gfp_reports->parent = this;
    hour24_gfp_thresholds->parent = this;

    yang_name = "hour24-gfp"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::~Hour24Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_data() const
{
    return (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_data())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_operation())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-reports")
    {
        if(hour24_gfp_reports == nullptr)
        {
            hour24_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>();
        }
        return hour24_gfp_reports;
    }

    if(child_yang_name == "hour24-gfp-thresholds")
    {
        if(hour24_gfp_thresholds == nullptr)
        {
            hour24_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>();
        }
        return hour24_gfp_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_gfp_reports != nullptr)
    {
        children["hour24-gfp-reports"] = hour24_gfp_reports;
    }

    if(hour24_gfp_thresholds != nullptr)
    {
        children["hour24-gfp-thresholds"] = hour24_gfp_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-reports" || name == "hour24-gfp-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReports()
{

    yang_name = "hour24-gfp-reports"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::~Hour24GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_data() const
{
    for (std::size_t index=0; index<hour24_gfp_report.size(); index++)
    {
        if(hour24_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_report.size(); index++)
    {
        if(hour24_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-report")
    {
        for(auto const & c : hour24_gfp_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport>();
        c->parent = this;
        hour24_gfp_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_gfp_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::Hour24GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{

    yang_name = "hour24-gfp-report"; yang_parent_name = "hour24-gfp-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::~Hour24GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_data() const
{
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-report" <<"[gfp-report='" <<gfp_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.yfilter)) leaf_name_data.push_back(gfp_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
        gfp_report.value_namespace = name_space;
        gfp_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-report")
    {
        gfp_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThresholds()
{

    yang_name = "hour24-gfp-thresholds"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::~Hour24GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_gfp_threshold.size(); index++)
    {
        if(hour24_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_threshold.size(); index++)
    {
        if(hour24_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-threshold")
    {
        for(auto const & c : hour24_gfp_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold>();
        c->parent = this;
        hour24_gfp_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_gfp_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::Hour24GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::int32, "gfp-threshold-value"}
{

    yang_name = "hour24-gfp-threshold"; yang_parent_name = "hour24-gfp-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::~Hour24GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_data() const
{
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_threshold.yfilter)
	|| ydk::is_set(gfp_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-threshold" <<"[gfp-threshold='" <<gfp_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.yfilter)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.yfilter)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
        gfp_threshold.value_namespace = name_space;
        gfp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
        gfp_threshold_value.value_namespace = name_space;
        gfp_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold.yfilter = yfilter;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-threshold" || name == "gfp-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::EthernetHour24()
    :
    hour24_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>())
{
    hour24_ether->parent = this;

    yang_name = "ethernet-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::~EthernetHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_data() const
{
    return (hour24_ether !=  nullptr && hour24_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_ether !=  nullptr && hour24_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether")
    {
        if(hour24_ether == nullptr)
        {
            hour24_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>();
        }
        return hour24_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_ether != nullptr)
    {
        children["hour24-ether"] = hour24_ether;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24Ether()
    :
    hour24_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>())
	,hour24_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>())
{
    hour24_ether_thresholds->parent = this;
    hour24_ether_reports->parent = this;

    yang_name = "hour24-ether"; yang_parent_name = "ethernet-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::~Hour24Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_data() const
{
    return (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_data())
	|| (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_operation())
	|| (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-thresholds")
    {
        if(hour24_ether_thresholds == nullptr)
        {
            hour24_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>();
        }
        return hour24_ether_thresholds;
    }

    if(child_yang_name == "hour24-ether-reports")
    {
        if(hour24_ether_reports == nullptr)
        {
            hour24_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>();
        }
        return hour24_ether_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_ether_thresholds != nullptr)
    {
        children["hour24-ether-thresholds"] = hour24_ether_thresholds;
    }

    if(hour24_ether_reports != nullptr)
    {
        children["hour24-ether-reports"] = hour24_ether_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-thresholds" || name == "hour24-ether-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThresholds()
{

    yang_name = "hour24-ether-thresholds"; yang_parent_name = "hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::~Hour24EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_ether_threshold.size(); index++)
    {
        if(hour24_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_threshold.size(); index++)
    {
        if(hour24_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-threshold")
    {
        for(auto const & c : hour24_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold>();
        c->parent = this;
        hour24_ether_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_ether_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::Hour24EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{

    yang_name = "hour24-ether-threshold"; yang_parent_name = "hour24-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::~Hour24EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_data() const
{
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReports()
{

    yang_name = "hour24-ether-reports"; yang_parent_name = "hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::~Hour24EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_data() const
{
    for (std::size_t index=0; index<hour24_ether_report.size(); index++)
    {
        if(hour24_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_report.size(); index++)
    {
        if(hour24_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-report")
    {
        for(auto const & c : hour24_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport>();
        c->parent = this;
        hour24_ether_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_ether_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::Hour24EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "hour24-ether-report"; yang_parent_name = "hour24-ether-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::~Hour24EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_data() const
{
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-report" <<"[ether-report='" <<ether_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcms()
{

    yang_name = "minute15otn-tcms"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::~Minute15OtnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::has_data() const
{
    for (std::size_t index=0; index<minute15otn_tcm.size(); index++)
    {
        if(minute15otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm.size(); index++)
    {
        if(minute15otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-tcm")
    {
        for(auto const & c : minute15otn_tcm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm>();
        c->parent = this;
        minute15otn_tcm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15otn_tcm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-tcm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcm()
    :
    tcm_number{YType::int32, "tcm-number"}
    	,
    min15_otn_tcm_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes>())
	,minute15otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports>())
{
    min15_otn_tcm_threshes->parent = this;
    minute15otn_tcm_reports->parent = this;

    yang_name = "minute15otn-tcm"; yang_parent_name = "minute15otn-tcms"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::~Minute15OtnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::has_data() const
{
    return tcm_number.is_set
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_data())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcm_number.yfilter)
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_operation())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm" <<"[tcm-number='" <<tcm_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.yfilter)) leaf_name_data.push_back(tcm_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-tcm-threshes")
    {
        if(min15_otn_tcm_threshes == nullptr)
        {
            min15_otn_tcm_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes>();
        }
        return min15_otn_tcm_threshes;
    }

    if(child_yang_name == "minute15otn-tcm-reports")
    {
        if(minute15otn_tcm_reports == nullptr)
        {
            minute15otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports>();
        }
        return minute15otn_tcm_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min15_otn_tcm_threshes != nullptr)
    {
        children["min15-otn-tcm-threshes"] = min15_otn_tcm_threshes;
    }

    if(minute15otn_tcm_reports != nullptr)
    {
        children["minute15otn-tcm-reports"] = minute15otn_tcm_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
        tcm_number.value_namespace = name_space;
        tcm_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcm-number")
    {
        tcm_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-tcm-threshes" || name == "minute15otn-tcm-reports" || name == "tcm-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThreshes()
{

    yang_name = "min15-otn-tcm-threshes"; yang_parent_name = "minute15otn-tcm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::~Min15OtnTcmThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::has_data() const
{
    for (std::size_t index=0; index<min15_otn_tcm_thresh.size(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_tcm_thresh.size(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-tcm-thresh")
    {
        for(auto const & c : min15_otn_tcm_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh>();
        c->parent = this;
        min15_otn_tcm_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : min15_otn_tcm_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-tcm-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::Min15OtnTcmThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "min15-otn-tcm-thresh"; yang_parent_name = "min15-otn-tcm-threshes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::~Min15OtnTcmThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReports()
{

    yang_name = "minute15otn-tcm-reports"; yang_parent_name = "minute15otn-tcm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::~Minute15OtnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::has_data() const
{
    for (std::size_t index=0; index<minute15otn_tcm_report.size(); index++)
    {
        if(minute15otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm_report.size(); index++)
    {
        if(minute15otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-tcm-report")
    {
        for(auto const & c : minute15otn_tcm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport>();
        c->parent = this;
        minute15otn_tcm_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15otn_tcm_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-tcm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::Minute15OtnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15otn-tcm-report"; yang_parent_name = "minute15otn-tcm-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::~Minute15OtnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24()
    :
    oc_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>())
{
    oc_hour24_ocn->parent = this;

    yang_name = "oc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::~OcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_data() const
{
    return (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn")
    {
        if(oc_hour24_ocn == nullptr)
        {
            oc_hour24_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>();
        }
        return oc_hour24_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24_ocn != nullptr)
    {
        children["oc-hour24-ocn"] = oc_hour24_ocn;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24Ocn()
    :
    oc_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>())
	,oc_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>())
{
    oc_hour24_ocn_reports->parent = this;
    oc_hour24_ocn_thresholds->parent = this;

    yang_name = "oc-hour24-ocn"; yang_parent_name = "oc-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::~OcHour24Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_data() const
{
    return (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_data())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_operation())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-reports")
    {
        if(oc_hour24_ocn_reports == nullptr)
        {
            oc_hour24_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>();
        }
        return oc_hour24_ocn_reports;
    }

    if(child_yang_name == "oc-hour24-ocn-thresholds")
    {
        if(oc_hour24_ocn_thresholds == nullptr)
        {
            oc_hour24_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>();
        }
        return oc_hour24_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24_ocn_reports != nullptr)
    {
        children["oc-hour24-ocn-reports"] = oc_hour24_ocn_reports;
    }

    if(oc_hour24_ocn_thresholds != nullptr)
    {
        children["oc-hour24-ocn-thresholds"] = oc_hour24_ocn_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-reports" || name == "oc-hour24-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReports()
{

    yang_name = "oc-hour24-ocn-reports"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::~OcHour24OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_data() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.size(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.size(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-report")
    {
        for(auto const & c : oc_hour24_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport>();
        c->parent = this;
        oc_hour24_ocn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24_ocn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::OcHour24OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "oc-hour24-ocn-report"; yang_parent_name = "oc-hour24-ocn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::~OcHour24OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_data() const
{
    return ocn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThresholds()
{

    yang_name = "oc-hour24-ocn-thresholds"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::~OcHour24OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_data() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.size(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.size(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-threshold")
    {
        for(auto const & c : oc_hour24_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold>();
        c->parent = this;
        oc_hour24_ocn_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24_ocn_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::OcHour24OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{

    yang_name = "oc-hour24-ocn-threshold"; yang_parent_name = "oc-hour24-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::~OcHour24OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_data() const
{
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::EthernetMinute15()
    :
    minute15_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>())
{
    minute15_ether->parent = this;

    yang_name = "ethernet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::~EthernetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_data() const
{
    return (minute15_ether !=  nullptr && minute15_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether !=  nullptr && minute15_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether")
    {
        if(minute15_ether == nullptr)
        {
            minute15_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>();
        }
        return minute15_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_ether != nullptr)
    {
        children["minute15-ether"] = minute15_ether;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15Ether()
    :
    minute15_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>())
	,minute15_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>())
{
    minute15_ether_thresholds->parent = this;
    minute15_ether_reports->parent = this;

    yang_name = "minute15-ether"; yang_parent_name = "ethernet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::~Minute15Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_data() const
{
    return (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_data())
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_operation())
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-thresholds")
    {
        if(minute15_ether_thresholds == nullptr)
        {
            minute15_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>();
        }
        return minute15_ether_thresholds;
    }

    if(child_yang_name == "minute15-ether-reports")
    {
        if(minute15_ether_reports == nullptr)
        {
            minute15_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>();
        }
        return minute15_ether_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_ether_thresholds != nullptr)
    {
        children["minute15-ether-thresholds"] = minute15_ether_thresholds;
    }

    if(minute15_ether_reports != nullptr)
    {
        children["minute15-ether-reports"] = minute15_ether_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-thresholds" || name == "minute15-ether-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThresholds()
{

    yang_name = "minute15-ether-thresholds"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::~Minute15EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.size(); index++)
    {
        if(minute15_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.size(); index++)
    {
        if(minute15_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-threshold")
    {
        for(auto const & c : minute15_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold>();
        c->parent = this;
        minute15_ether_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_ether_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::Minute15EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{

    yang_name = "minute15-ether-threshold"; yang_parent_name = "minute15-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::~Minute15EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_data() const
{
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReports()
{

    yang_name = "minute15-ether-reports"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::~Minute15EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_report.size(); index++)
    {
        if(minute15_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_report.size(); index++)
    {
        if(minute15_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-report")
    {
        for(auto const & c : minute15_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport>();
        c->parent = this;
        minute15_ether_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_ether_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::Minute15EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "minute15-ether-report"; yang_parent_name = "minute15-ether-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::~Minute15EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_data() const
{
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-report" <<"[ether-report='" <<ether_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24()
    :
    ho_vc_hour24ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc>())
{
    ho_vc_hour24ho_vc->parent = this;

    yang_name = "ho-vc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::~HoVcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_data() const
{
    return (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc")
    {
        if(ho_vc_hour24ho_vc == nullptr)
        {
            ho_vc_hour24ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc>();
        }
        return ho_vc_hour24ho_vc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24ho_vc != nullptr)
    {
        children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVc()
    :
    ho_vc_hour24ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports>())
	,ho_vc_hour24ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds>())
{
    ho_vc_hour24ho_vc_reports->parent = this;
    ho_vc_hour24ho_vc_thresholds->parent = this;

    yang_name = "ho-vc-hour24ho-vc"; yang_parent_name = "ho-vc-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::~HoVcHour24HoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::has_data() const
{
    return (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_data())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_operation())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-reports")
    {
        if(ho_vc_hour24ho_vc_reports == nullptr)
        {
            ho_vc_hour24ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports>();
        }
        return ho_vc_hour24ho_vc_reports;
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-thresholds")
    {
        if(ho_vc_hour24ho_vc_thresholds == nullptr)
        {
            ho_vc_hour24ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds>();
        }
        return ho_vc_hour24ho_vc_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24ho_vc_reports != nullptr)
    {
        children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;
    }

    if(ho_vc_hour24ho_vc_thresholds != nullptr)
    {
        children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-reports" || name == "ho-vc-hour24ho-vc-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReports()
{

    yang_name = "ho-vc-hour24ho-vc-reports"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::~HoVcHour24HoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.size(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.size(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-report")
    {
        for(auto const & c : ho_vc_hour24ho_vc_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport>();
        c->parent = this;
        ho_vc_hour24ho_vc_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_hour24ho_vc_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-report")
        return true;
    return false;
}


}
}

