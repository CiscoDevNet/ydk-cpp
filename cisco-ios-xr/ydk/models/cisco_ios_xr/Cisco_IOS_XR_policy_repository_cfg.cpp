
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_policy_repository_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_policy_repository_cfg {

RoutingPolicy::RoutingPolicy()
    :
    set_exit_as_abort{YType::empty, "set-exit-as-abort"},
    editor{YType::str, "editor"}
        ,
    route_policies(std::make_shared<RoutingPolicy::RoutePolicies>())
    , sets(std::make_shared<RoutingPolicy::Sets>())
    , limits(std::make_shared<RoutingPolicy::Limits>())
{
    route_policies->parent = this;
    sets->parent = this;
    limits->parent = this;

    yang_name = "routing-policy"; yang_parent_name = "Cisco-IOS-XR-policy-repository-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingPolicy::~RoutingPolicy()
{
}

bool RoutingPolicy::has_data() const
{
    if (is_presence_container) return true;
    return set_exit_as_abort.is_set
	|| editor.is_set
	|| (route_policies !=  nullptr && route_policies->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (limits !=  nullptr && limits->has_data());
}

bool RoutingPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_exit_as_abort.yfilter)
	|| ydk::is_set(editor.yfilter)
	|| (route_policies !=  nullptr && route_policies->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (limits !=  nullptr && limits->has_operation());
}

std::string RoutingPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_exit_as_abort.is_set || is_set(set_exit_as_abort.yfilter)) leaf_name_data.push_back(set_exit_as_abort.get_name_leafdata());
    if (editor.is_set || is_set(editor.yfilter)) leaf_name_data.push_back(editor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policies")
    {
        if(route_policies == nullptr)
        {
            route_policies = std::make_shared<RoutingPolicy::RoutePolicies>();
        }
        return route_policies;
    }

    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets>();
        }
        return sets;
    }

    if(child_yang_name == "limits")
    {
        if(limits == nullptr)
        {
            limits = std::make_shared<RoutingPolicy::Limits>();
        }
        return limits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_policies != nullptr)
    {
        children["route-policies"] = route_policies;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(limits != nullptr)
    {
        children["limits"] = limits;
    }

    return children;
}

void RoutingPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-exit-as-abort")
    {
        set_exit_as_abort = value;
        set_exit_as_abort.value_namespace = name_space;
        set_exit_as_abort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editor")
    {
        editor = value;
        editor.value_namespace = name_space;
        editor.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-exit-as-abort")
    {
        set_exit_as_abort.yfilter = yfilter;
    }
    if(value_path == "editor")
    {
        editor.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> RoutingPolicy::clone_ptr() const
{
    return std::make_shared<RoutingPolicy>();
}

std::string RoutingPolicy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingPolicy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingPolicy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingPolicy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policies" || name == "sets" || name == "limits" || name == "set-exit-as-abort" || name == "editor")
        return true;
    return false;
}

RoutingPolicy::RoutePolicies::RoutePolicies()
    :
    route_policy(this, {"route_policy_name"})
{

    yang_name = "route-policies"; yang_parent_name = "routing-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::RoutePolicies::~RoutePolicies()
{
}

bool RoutingPolicy::RoutePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_policy.len(); index++)
    {
        if(route_policy[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::RoutePolicies::has_operation() const
{
    for (std::size_t index=0; index<route_policy.len(); index++)
    {
        if(route_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::RoutePolicies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::RoutePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::RoutePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::RoutePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy")
    {
        auto c = std::make_shared<RoutingPolicy::RoutePolicies::RoutePolicy>();
        c->parent = this;
        route_policy.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::RoutePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_policy.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::RoutePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::RoutePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::RoutePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy")
        return true;
    return false;
}

RoutingPolicy::RoutePolicies::RoutePolicy::RoutePolicy()
    :
    route_policy_name{YType::str, "route-policy-name"},
    rpl_route_policy{YType::str, "rpl-route-policy"}
{

    yang_name = "route-policy"; yang_parent_name = "route-policies"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::RoutePolicies::RoutePolicy::~RoutePolicy()
{
}

bool RoutingPolicy::RoutePolicies::RoutePolicy::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| rpl_route_policy.is_set;
}

bool RoutingPolicy::RoutePolicies::RoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(rpl_route_policy.yfilter);
}

std::string RoutingPolicy::RoutePolicies::RoutePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/route-policies/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::RoutePolicies::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";
    ADD_KEY_TOKEN(route_policy_name, "route-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::RoutePolicies::RoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (rpl_route_policy.is_set || is_set(rpl_route_policy.yfilter)) leaf_name_data.push_back(rpl_route_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::RoutePolicies::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::RoutePolicies::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::RoutePolicies::RoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-route-policy")
    {
        rpl_route_policy = value;
        rpl_route_policy.value_namespace = name_space;
        rpl_route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::RoutePolicies::RoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "rpl-route-policy")
    {
        rpl_route_policy.yfilter = yfilter;
    }
}

bool RoutingPolicy::RoutePolicies::RoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "rpl-route-policy")
        return true;
    return false;
}

RoutingPolicy::Sets::Sets()
    :
    prefix_sets(std::make_shared<RoutingPolicy::Sets::PrefixSets>())
    , large_community_sets(std::make_shared<RoutingPolicy::Sets::LargeCommunitySets>())
    , mac_sets(std::make_shared<RoutingPolicy::Sets::MacSets>())
    , extended_community_opaque_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets>())
    , ospf_area_sets(std::make_shared<RoutingPolicy::Sets::OspfAreaSets>())
    , extended_community_cost_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCostSets>())
    , extended_community_soo_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySooSets>())
    , esi_sets(std::make_shared<RoutingPolicy::Sets::EsiSets>())
    , extended_community_seg_nh_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNhSets>())
    , rd_sets(std::make_shared<RoutingPolicy::Sets::RdSets>())
    , policy_global_set_table(std::make_shared<RoutingPolicy::Sets::PolicyGlobalSetTable>())
    , extended_community_bandwidth_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets>())
    , community_sets(std::make_shared<RoutingPolicy::Sets::CommunitySets>())
    , as_path_sets(std::make_shared<RoutingPolicy::Sets::AsPathSets>())
    , tag_sets(std::make_shared<RoutingPolicy::Sets::TagSets>())
    , etag_sets(std::make_shared<RoutingPolicy::Sets::EtagSets>())
    , extended_community_rt_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRtSets>())
{
    prefix_sets->parent = this;
    large_community_sets->parent = this;
    mac_sets->parent = this;
    extended_community_opaque_sets->parent = this;
    ospf_area_sets->parent = this;
    extended_community_cost_sets->parent = this;
    extended_community_soo_sets->parent = this;
    esi_sets->parent = this;
    extended_community_seg_nh_sets->parent = this;
    rd_sets->parent = this;
    policy_global_set_table->parent = this;
    extended_community_bandwidth_sets->parent = this;
    community_sets->parent = this;
    as_path_sets->parent = this;
    tag_sets->parent = this;
    etag_sets->parent = this;
    extended_community_rt_sets->parent = this;

    yang_name = "sets"; yang_parent_name = "routing-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::~Sets()
{
}

bool RoutingPolicy::Sets::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_sets !=  nullptr && prefix_sets->has_data())
	|| (large_community_sets !=  nullptr && large_community_sets->has_data())
	|| (mac_sets !=  nullptr && mac_sets->has_data())
	|| (extended_community_opaque_sets !=  nullptr && extended_community_opaque_sets->has_data())
	|| (ospf_area_sets !=  nullptr && ospf_area_sets->has_data())
	|| (extended_community_cost_sets !=  nullptr && extended_community_cost_sets->has_data())
	|| (extended_community_soo_sets !=  nullptr && extended_community_soo_sets->has_data())
	|| (esi_sets !=  nullptr && esi_sets->has_data())
	|| (extended_community_seg_nh_sets !=  nullptr && extended_community_seg_nh_sets->has_data())
	|| (rd_sets !=  nullptr && rd_sets->has_data())
	|| (policy_global_set_table !=  nullptr && policy_global_set_table->has_data())
	|| (extended_community_bandwidth_sets !=  nullptr && extended_community_bandwidth_sets->has_data())
	|| (community_sets !=  nullptr && community_sets->has_data())
	|| (as_path_sets !=  nullptr && as_path_sets->has_data())
	|| (tag_sets !=  nullptr && tag_sets->has_data())
	|| (etag_sets !=  nullptr && etag_sets->has_data())
	|| (extended_community_rt_sets !=  nullptr && extended_community_rt_sets->has_data());
}

bool RoutingPolicy::Sets::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_sets !=  nullptr && prefix_sets->has_operation())
	|| (large_community_sets !=  nullptr && large_community_sets->has_operation())
	|| (mac_sets !=  nullptr && mac_sets->has_operation())
	|| (extended_community_opaque_sets !=  nullptr && extended_community_opaque_sets->has_operation())
	|| (ospf_area_sets !=  nullptr && ospf_area_sets->has_operation())
	|| (extended_community_cost_sets !=  nullptr && extended_community_cost_sets->has_operation())
	|| (extended_community_soo_sets !=  nullptr && extended_community_soo_sets->has_operation())
	|| (esi_sets !=  nullptr && esi_sets->has_operation())
	|| (extended_community_seg_nh_sets !=  nullptr && extended_community_seg_nh_sets->has_operation())
	|| (rd_sets !=  nullptr && rd_sets->has_operation())
	|| (policy_global_set_table !=  nullptr && policy_global_set_table->has_operation())
	|| (extended_community_bandwidth_sets !=  nullptr && extended_community_bandwidth_sets->has_operation())
	|| (community_sets !=  nullptr && community_sets->has_operation())
	|| (as_path_sets !=  nullptr && as_path_sets->has_operation())
	|| (tag_sets !=  nullptr && tag_sets->has_operation())
	|| (etag_sets !=  nullptr && etag_sets->has_operation())
	|| (extended_community_rt_sets !=  nullptr && extended_community_rt_sets->has_operation());
}

std::string RoutingPolicy::Sets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sets")
    {
        if(prefix_sets == nullptr)
        {
            prefix_sets = std::make_shared<RoutingPolicy::Sets::PrefixSets>();
        }
        return prefix_sets;
    }

    if(child_yang_name == "large-community-sets")
    {
        if(large_community_sets == nullptr)
        {
            large_community_sets = std::make_shared<RoutingPolicy::Sets::LargeCommunitySets>();
        }
        return large_community_sets;
    }

    if(child_yang_name == "mac-sets")
    {
        if(mac_sets == nullptr)
        {
            mac_sets = std::make_shared<RoutingPolicy::Sets::MacSets>();
        }
        return mac_sets;
    }

    if(child_yang_name == "extended-community-opaque-sets")
    {
        if(extended_community_opaque_sets == nullptr)
        {
            extended_community_opaque_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets>();
        }
        return extended_community_opaque_sets;
    }

    if(child_yang_name == "ospf-area-sets")
    {
        if(ospf_area_sets == nullptr)
        {
            ospf_area_sets = std::make_shared<RoutingPolicy::Sets::OspfAreaSets>();
        }
        return ospf_area_sets;
    }

    if(child_yang_name == "extended-community-cost-sets")
    {
        if(extended_community_cost_sets == nullptr)
        {
            extended_community_cost_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCostSets>();
        }
        return extended_community_cost_sets;
    }

    if(child_yang_name == "extended-community-soo-sets")
    {
        if(extended_community_soo_sets == nullptr)
        {
            extended_community_soo_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySooSets>();
        }
        return extended_community_soo_sets;
    }

    if(child_yang_name == "esi-sets")
    {
        if(esi_sets == nullptr)
        {
            esi_sets = std::make_shared<RoutingPolicy::Sets::EsiSets>();
        }
        return esi_sets;
    }

    if(child_yang_name == "extended-community-seg-nh-sets")
    {
        if(extended_community_seg_nh_sets == nullptr)
        {
            extended_community_seg_nh_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNhSets>();
        }
        return extended_community_seg_nh_sets;
    }

    if(child_yang_name == "rd-sets")
    {
        if(rd_sets == nullptr)
        {
            rd_sets = std::make_shared<RoutingPolicy::Sets::RdSets>();
        }
        return rd_sets;
    }

    if(child_yang_name == "policy-global-set-table")
    {
        if(policy_global_set_table == nullptr)
        {
            policy_global_set_table = std::make_shared<RoutingPolicy::Sets::PolicyGlobalSetTable>();
        }
        return policy_global_set_table;
    }

    if(child_yang_name == "extended-community-bandwidth-sets")
    {
        if(extended_community_bandwidth_sets == nullptr)
        {
            extended_community_bandwidth_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets>();
        }
        return extended_community_bandwidth_sets;
    }

    if(child_yang_name == "community-sets")
    {
        if(community_sets == nullptr)
        {
            community_sets = std::make_shared<RoutingPolicy::Sets::CommunitySets>();
        }
        return community_sets;
    }

    if(child_yang_name == "as-path-sets")
    {
        if(as_path_sets == nullptr)
        {
            as_path_sets = std::make_shared<RoutingPolicy::Sets::AsPathSets>();
        }
        return as_path_sets;
    }

    if(child_yang_name == "tag-sets")
    {
        if(tag_sets == nullptr)
        {
            tag_sets = std::make_shared<RoutingPolicy::Sets::TagSets>();
        }
        return tag_sets;
    }

    if(child_yang_name == "etag-sets")
    {
        if(etag_sets == nullptr)
        {
            etag_sets = std::make_shared<RoutingPolicy::Sets::EtagSets>();
        }
        return etag_sets;
    }

    if(child_yang_name == "extended-community-rt-sets")
    {
        if(extended_community_rt_sets == nullptr)
        {
            extended_community_rt_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRtSets>();
        }
        return extended_community_rt_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_sets != nullptr)
    {
        children["prefix-sets"] = prefix_sets;
    }

    if(large_community_sets != nullptr)
    {
        children["large-community-sets"] = large_community_sets;
    }

    if(mac_sets != nullptr)
    {
        children["mac-sets"] = mac_sets;
    }

    if(extended_community_opaque_sets != nullptr)
    {
        children["extended-community-opaque-sets"] = extended_community_opaque_sets;
    }

    if(ospf_area_sets != nullptr)
    {
        children["ospf-area-sets"] = ospf_area_sets;
    }

    if(extended_community_cost_sets != nullptr)
    {
        children["extended-community-cost-sets"] = extended_community_cost_sets;
    }

    if(extended_community_soo_sets != nullptr)
    {
        children["extended-community-soo-sets"] = extended_community_soo_sets;
    }

    if(esi_sets != nullptr)
    {
        children["esi-sets"] = esi_sets;
    }

    if(extended_community_seg_nh_sets != nullptr)
    {
        children["extended-community-seg-nh-sets"] = extended_community_seg_nh_sets;
    }

    if(rd_sets != nullptr)
    {
        children["rd-sets"] = rd_sets;
    }

    if(policy_global_set_table != nullptr)
    {
        children["policy-global-set-table"] = policy_global_set_table;
    }

    if(extended_community_bandwidth_sets != nullptr)
    {
        children["extended-community-bandwidth-sets"] = extended_community_bandwidth_sets;
    }

    if(community_sets != nullptr)
    {
        children["community-sets"] = community_sets;
    }

    if(as_path_sets != nullptr)
    {
        children["as-path-sets"] = as_path_sets;
    }

    if(tag_sets != nullptr)
    {
        children["tag-sets"] = tag_sets;
    }

    if(etag_sets != nullptr)
    {
        children["etag-sets"] = etag_sets;
    }

    if(extended_community_rt_sets != nullptr)
    {
        children["extended-community-rt-sets"] = extended_community_rt_sets;
    }

    return children;
}

void RoutingPolicy::Sets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sets" || name == "large-community-sets" || name == "mac-sets" || name == "extended-community-opaque-sets" || name == "ospf-area-sets" || name == "extended-community-cost-sets" || name == "extended-community-soo-sets" || name == "esi-sets" || name == "extended-community-seg-nh-sets" || name == "rd-sets" || name == "policy-global-set-table" || name == "extended-community-bandwidth-sets" || name == "community-sets" || name == "as-path-sets" || name == "tag-sets" || name == "etag-sets" || name == "extended-community-rt-sets")
        return true;
    return false;
}

RoutingPolicy::Sets::PrefixSets::PrefixSets()
    :
    prefix_set(this, {"set_name"})
{

    yang_name = "prefix-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::PrefixSets::~PrefixSets()
{
}

bool RoutingPolicy::Sets::PrefixSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_set.len(); index++)
    {
        if(prefix_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::PrefixSets::has_operation() const
{
    for (std::size_t index=0; index<prefix_set.len(); index++)
    {
        if(prefix_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::PrefixSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::PrefixSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::PrefixSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrefixSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::PrefixSets::PrefixSet>();
        c->parent = this;
        prefix_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrefixSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefix_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::PrefixSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::PrefixSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::PrefixSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-set")
        return true;
    return false;
}

RoutingPolicy::Sets::PrefixSets::PrefixSet::PrefixSet()
    :
    set_name{YType::str, "set-name"},
    rpl_prefix_set{YType::str, "rpl-prefix-set"}
{

    yang_name = "prefix-set"; yang_parent_name = "prefix-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::PrefixSets::PrefixSet::~PrefixSet()
{
}

bool RoutingPolicy::Sets::PrefixSets::PrefixSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_prefix_set.is_set;
}

bool RoutingPolicy::Sets::PrefixSets::PrefixSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_prefix_set.yfilter);
}

std::string RoutingPolicy::Sets::PrefixSets::PrefixSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/prefix-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::PrefixSets::PrefixSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::PrefixSets::PrefixSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_prefix_set.is_set || is_set(rpl_prefix_set.yfilter)) leaf_name_data.push_back(rpl_prefix_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrefixSets::PrefixSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrefixSets::PrefixSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::PrefixSets::PrefixSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-prefix-set")
    {
        rpl_prefix_set = value;
        rpl_prefix_set.value_namespace = name_space;
        rpl_prefix_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::PrefixSets::PrefixSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-prefix-set")
    {
        rpl_prefix_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::PrefixSets::PrefixSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-prefix-set")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySets()
    :
    large_community_set(this, {"set_name"})
{

    yang_name = "large-community-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::LargeCommunitySets::~LargeCommunitySets()
{
}

bool RoutingPolicy::Sets::LargeCommunitySets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<large_community_set.len(); index++)
    {
        if(large_community_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::LargeCommunitySets::has_operation() const
{
    for (std::size_t index=0; index<large_community_set.len(); index++)
    {
        if(large_community_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunitySets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::LargeCommunitySets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunitySets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::LargeCommunitySets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "large-community-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet>();
        c->parent = this;
        large_community_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::LargeCommunitySets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : large_community_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::LargeCommunitySets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::LargeCommunitySets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::LargeCommunitySets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "large-community-set")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::LargeCommunitySet()
    :
    set_name{YType::str, "set-name"},
    large_community_set_as_text{YType::str, "large-community-set-as-text"}
{

    yang_name = "large-community-set"; yang_parent_name = "large-community-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::~LargeCommunitySet()
{
}

bool RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| large_community_set_as_text.is_set;
}

bool RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(large_community_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/large-community-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (large_community_set_as_text.is_set || is_set(large_community_set_as_text.yfilter)) leaf_name_data.push_back(large_community_set_as_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "large-community-set-as-text")
    {
        large_community_set_as_text = value;
        large_community_set_as_text.value_namespace = name_space;
        large_community_set_as_text.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "large-community-set-as-text")
    {
        large_community_set_as_text.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::LargeCommunitySets::LargeCommunitySet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "large-community-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::MacSets::MacSets()
    :
    mac_set(this, {"set_name"})
{

    yang_name = "mac-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::MacSets::~MacSets()
{
}

bool RoutingPolicy::Sets::MacSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_set.len(); index++)
    {
        if(mac_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::MacSets::has_operation() const
{
    for (std::size_t index=0; index<mac_set.len(); index++)
    {
        if(mac_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::MacSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::MacSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::MacSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::MacSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::MacSets::MacSet>();
        c->parent = this;
        mac_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::MacSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::MacSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::MacSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::MacSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-set")
        return true;
    return false;
}

RoutingPolicy::Sets::MacSets::MacSet::MacSet()
    :
    set_name{YType::str, "set-name"},
    mac_set_as_text{YType::str, "mac-set-as-text"}
{

    yang_name = "mac-set"; yang_parent_name = "mac-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::MacSets::MacSet::~MacSet()
{
}

bool RoutingPolicy::Sets::MacSets::MacSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| mac_set_as_text.is_set;
}

bool RoutingPolicy::Sets::MacSets::MacSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(mac_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::MacSets::MacSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/mac-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::MacSets::MacSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::MacSets::MacSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (mac_set_as_text.is_set || is_set(mac_set_as_text.yfilter)) leaf_name_data.push_back(mac_set_as_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::MacSets::MacSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::MacSets::MacSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::MacSets::MacSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-set-as-text")
    {
        mac_set_as_text = value;
        mac_set_as_text.value_namespace = name_space;
        mac_set_as_text.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::MacSets::MacSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "mac-set-as-text")
    {
        mac_set_as_text.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::MacSets::MacSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "mac-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSets()
    :
    extended_community_opaque_set(this, {"set_name"})
{

    yang_name = "extended-community-opaque-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::~ExtendedCommunityOpaqueSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_community_opaque_set.len(); index++)
    {
        if(extended_community_opaque_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_opaque_set.len(); index++)
    {
        if(extended_community_opaque_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-opaque-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-opaque-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet>();
        c->parent = this;
        extended_community_opaque_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extended_community_opaque_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-opaque-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::ExtendedCommunityOpaqueSet()
    :
    set_name{YType::str, "set-name"},
    rpl_extended_community_opaque_set{YType::str, "rpl-extended-community-opaque-set"}
{

    yang_name = "extended-community-opaque-set"; yang_parent_name = "extended-community-opaque-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::~ExtendedCommunityOpaqueSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_extended_community_opaque_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_opaque_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-opaque-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-opaque-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_opaque_set.is_set || is_set(rpl_extended_community_opaque_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_opaque_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-extended-community-opaque-set")
    {
        rpl_extended_community_opaque_set = value;
        rpl_extended_community_opaque_set.value_namespace = name_space;
        rpl_extended_community_opaque_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-extended-community-opaque-set")
    {
        rpl_extended_community_opaque_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-extended-community-opaque-set")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfAreaSets::OspfAreaSets()
    :
    ospf_area_set(this, {"set_name"})
{

    yang_name = "ospf-area-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::OspfAreaSets::~OspfAreaSets()
{
}

bool RoutingPolicy::Sets::OspfAreaSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf_area_set.len(); index++)
    {
        if(ospf_area_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfAreaSets::has_operation() const
{
    for (std::size_t index=0; index<ospf_area_set.len(); index++)
    {
        if(ospf_area_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::OspfAreaSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::OspfAreaSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfAreaSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfAreaSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-area-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet>();
        c->parent = this;
        ospf_area_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfAreaSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospf_area_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::OspfAreaSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::OspfAreaSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::OspfAreaSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-area-set")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::OspfAreaSet()
    :
    set_name{YType::str, "set-name"},
    rplospf_area_set{YType::str, "rplospf-area-set"}
{

    yang_name = "ospf-area-set"; yang_parent_name = "ospf-area-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::~OspfAreaSet()
{
}

bool RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rplospf_area_set.is_set;
}

bool RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rplospf_area_set.yfilter);
}

std::string RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/ospf-area-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplospf_area_set.is_set || is_set(rplospf_area_set.yfilter)) leaf_name_data.push_back(rplospf_area_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rplospf-area-set")
    {
        rplospf_area_set = value;
        rplospf_area_set.value_namespace = name_space;
        rplospf_area_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rplospf-area-set")
    {
        rplospf_area_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rplospf-area-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSets()
    :
    extended_community_cost_set(this, {"set_name"})
{

    yang_name = "extended-community-cost-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityCostSets::~ExtendedCommunityCostSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_community_cost_set.len(); index++)
    {
        if(extended_community_cost_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_cost_set.len(); index++)
    {
        if(extended_community_cost_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCostSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityCostSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-cost-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCostSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCostSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-cost-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet>();
        c->parent = this;
        extended_community_cost_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCostSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extended_community_cost_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCostSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityCostSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-cost-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::ExtendedCommunityCostSet()
    :
    set_name{YType::str, "set-name"},
    rpl_extended_community_cost_set{YType::str, "rpl-extended-community-cost-set"}
{

    yang_name = "extended-community-cost-set"; yang_parent_name = "extended-community-cost-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::~ExtendedCommunityCostSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_extended_community_cost_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_cost_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-cost-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-cost-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_cost_set.is_set || is_set(rpl_extended_community_cost_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_cost_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-extended-community-cost-set")
    {
        rpl_extended_community_cost_set = value;
        rpl_extended_community_cost_set.value_namespace = name_space;
        rpl_extended_community_cost_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-extended-community-cost-set")
    {
        rpl_extended_community_cost_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-extended-community-cost-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSets()
    :
    extended_community_soo_set(this, {"set_name"})
{

    yang_name = "extended-community-soo-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySooSets::~ExtendedCommunitySooSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_community_soo_set.len(); index++)
    {
        if(extended_community_soo_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_soo_set.len(); index++)
    {
        if(extended_community_soo_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySooSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySooSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-soo-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySooSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySooSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-soo-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet>();
        c->parent = this;
        extended_community_soo_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySooSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extended_community_soo_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySooSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySooSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-soo-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::ExtendedCommunitySooSet()
    :
    set_name{YType::str, "set-name"},
    rpl_extended_community_soo_set{YType::str, "rpl-extended-community-soo-set"}
{

    yang_name = "extended-community-soo-set"; yang_parent_name = "extended-community-soo-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::~ExtendedCommunitySooSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_extended_community_soo_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_soo_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-soo-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-soo-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_soo_set.is_set || is_set(rpl_extended_community_soo_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_soo_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-extended-community-soo-set")
    {
        rpl_extended_community_soo_set = value;
        rpl_extended_community_soo_set.value_namespace = name_space;
        rpl_extended_community_soo_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-extended-community-soo-set")
    {
        rpl_extended_community_soo_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-extended-community-soo-set")
        return true;
    return false;
}

RoutingPolicy::Sets::EsiSets::EsiSets()
    :
    esi_set(this, {"set_name"})
{

    yang_name = "esi-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::EsiSets::~EsiSets()
{
}

bool RoutingPolicy::Sets::EsiSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<esi_set.len(); index++)
    {
        if(esi_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::EsiSets::has_operation() const
{
    for (std::size_t index=0; index<esi_set.len(); index++)
    {
        if(esi_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::EsiSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::EsiSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esi-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::EsiSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::EsiSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esi-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::EsiSets::EsiSet>();
        c->parent = this;
        esi_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::EsiSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : esi_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::EsiSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::EsiSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::EsiSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esi-set")
        return true;
    return false;
}

RoutingPolicy::Sets::EsiSets::EsiSet::EsiSet()
    :
    set_name{YType::str, "set-name"},
    esi_set_as_text{YType::str, "esi-set-as-text"}
{

    yang_name = "esi-set"; yang_parent_name = "esi-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::EsiSets::EsiSet::~EsiSet()
{
}

bool RoutingPolicy::Sets::EsiSets::EsiSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| esi_set_as_text.is_set;
}

bool RoutingPolicy::Sets::EsiSets::EsiSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(esi_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::EsiSets::EsiSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/esi-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::EsiSets::EsiSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esi-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::EsiSets::EsiSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (esi_set_as_text.is_set || is_set(esi_set_as_text.yfilter)) leaf_name_data.push_back(esi_set_as_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::EsiSets::EsiSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::EsiSets::EsiSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::EsiSets::EsiSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-set-as-text")
    {
        esi_set_as_text = value;
        esi_set_as_text.value_namespace = name_space;
        esi_set_as_text.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::EsiSets::EsiSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "esi-set-as-text")
    {
        esi_set_as_text.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::EsiSets::EsiSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "esi-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSets()
    :
    extended_community_seg_nh_set(this, {"set_name"})
{

    yang_name = "extended-community-seg-nh-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNhSets::~ExtendedCommunitySegNhSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_community_seg_nh_set.len(); index++)
    {
        if(extended_community_seg_nh_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_seg_nh_set.len(); index++)
    {
        if(extended_community_seg_nh_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-seg-nh-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-seg-nh-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet>();
        c->parent = this;
        extended_community_seg_nh_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extended_community_seg_nh_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNhSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySegNhSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-seg-nh-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::ExtendedCommunitySegNhSet()
    :
    set_name{YType::str, "set-name"},
    rpl_extended_community_seg_nh_set{YType::str, "rpl-extended-community-seg-nh-set"}
{

    yang_name = "extended-community-seg-nh-set"; yang_parent_name = "extended-community-seg-nh-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::~ExtendedCommunitySegNhSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_extended_community_seg_nh_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_seg_nh_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-seg-nh-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-seg-nh-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_seg_nh_set.is_set || is_set(rpl_extended_community_seg_nh_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_seg_nh_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-extended-community-seg-nh-set")
    {
        rpl_extended_community_seg_nh_set = value;
        rpl_extended_community_seg_nh_set.value_namespace = name_space;
        rpl_extended_community_seg_nh_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-extended-community-seg-nh-set")
    {
        rpl_extended_community_seg_nh_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-extended-community-seg-nh-set")
        return true;
    return false;
}

RoutingPolicy::Sets::RdSets::RdSets()
    :
    rd_set(this, {"set_name"})
{

    yang_name = "rd-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::RdSets::~RdSets()
{
}

bool RoutingPolicy::Sets::RdSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rd_set.len(); index++)
    {
        if(rd_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::RdSets::has_operation() const
{
    for (std::size_t index=0; index<rd_set.len(); index++)
    {
        if(rd_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::RdSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::RdSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::RdSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RdSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::RdSets::RdSet>();
        c->parent = this;
        rd_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RdSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rd_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::RdSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::RdSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::RdSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-set")
        return true;
    return false;
}

RoutingPolicy::Sets::RdSets::RdSet::RdSet()
    :
    set_name{YType::str, "set-name"},
    rplrd_set{YType::str, "rplrd-set"}
{

    yang_name = "rd-set"; yang_parent_name = "rd-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::RdSets::RdSet::~RdSet()
{
}

bool RoutingPolicy::Sets::RdSets::RdSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rplrd_set.is_set;
}

bool RoutingPolicy::Sets::RdSets::RdSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rplrd_set.yfilter);
}

std::string RoutingPolicy::Sets::RdSets::RdSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/rd-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::RdSets::RdSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::RdSets::RdSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplrd_set.is_set || is_set(rplrd_set.yfilter)) leaf_name_data.push_back(rplrd_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RdSets::RdSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RdSets::RdSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::RdSets::RdSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rplrd-set")
    {
        rplrd_set = value;
        rplrd_set.value_namespace = name_space;
        rplrd_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::RdSets::RdSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rplrd-set")
    {
        rplrd_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::RdSets::RdSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rplrd-set")
        return true;
    return false;
}

RoutingPolicy::Sets::PolicyGlobalSetTable::PolicyGlobalSetTable()
    :
    policy_global_set{YType::str, "policy-global-set"}
{

    yang_name = "policy-global-set-table"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::PolicyGlobalSetTable::~PolicyGlobalSetTable()
{
}

bool RoutingPolicy::Sets::PolicyGlobalSetTable::has_data() const
{
    if (is_presence_container) return true;
    return policy_global_set.is_set;
}

bool RoutingPolicy::Sets::PolicyGlobalSetTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_global_set.yfilter);
}

std::string RoutingPolicy::Sets::PolicyGlobalSetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::PolicyGlobalSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-global-set-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::PolicyGlobalSetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_global_set.is_set || is_set(policy_global_set.yfilter)) leaf_name_data.push_back(policy_global_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PolicyGlobalSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PolicyGlobalSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::PolicyGlobalSetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-global-set")
    {
        policy_global_set = value;
        policy_global_set.value_namespace = name_space;
        policy_global_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::PolicyGlobalSetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-global-set")
    {
        policy_global_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::PolicyGlobalSetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-global-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSets()
    :
    extended_community_bandwidth_set(this, {"set_name"})
{

    yang_name = "extended-community-bandwidth-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::~ExtendedCommunityBandwidthSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_community_bandwidth_set.len(); index++)
    {
        if(extended_community_bandwidth_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_bandwidth_set.len(); index++)
    {
        if(extended_community_bandwidth_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-bandwidth-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-bandwidth-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet>();
        c->parent = this;
        extended_community_bandwidth_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extended_community_bandwidth_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-bandwidth-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::ExtendedCommunityBandwidthSet()
    :
    set_name{YType::str, "set-name"},
    rpl_extended_community_bandwidth_set{YType::str, "rpl-extended-community-bandwidth-set"}
{

    yang_name = "extended-community-bandwidth-set"; yang_parent_name = "extended-community-bandwidth-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::~ExtendedCommunityBandwidthSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_extended_community_bandwidth_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_bandwidth_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-bandwidth-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-bandwidth-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_bandwidth_set.is_set || is_set(rpl_extended_community_bandwidth_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_bandwidth_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-extended-community-bandwidth-set")
    {
        rpl_extended_community_bandwidth_set = value;
        rpl_extended_community_bandwidth_set.value_namespace = name_space;
        rpl_extended_community_bandwidth_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-extended-community-bandwidth-set")
    {
        rpl_extended_community_bandwidth_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-extended-community-bandwidth-set")
        return true;
    return false;
}

RoutingPolicy::Sets::CommunitySets::CommunitySets()
    :
    community_set(this, {"set_name"})
{

    yang_name = "community-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::CommunitySets::~CommunitySets()
{
}

bool RoutingPolicy::Sets::CommunitySets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community_set.len(); index++)
    {
        if(community_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::CommunitySets::has_operation() const
{
    for (std::size_t index=0; index<community_set.len(); index++)
    {
        if(community_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::CommunitySets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::CommunitySets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::CommunitySets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::CommunitySets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::CommunitySets::CommunitySet>();
        c->parent = this;
        community_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::CommunitySets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : community_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::CommunitySets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::CommunitySets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::CommunitySets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-set")
        return true;
    return false;
}

RoutingPolicy::Sets::CommunitySets::CommunitySet::CommunitySet()
    :
    set_name{YType::str, "set-name"},
    rpl_community_set{YType::str, "rpl-community-set"}
{

    yang_name = "community-set"; yang_parent_name = "community-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::CommunitySets::CommunitySet::~CommunitySet()
{
}

bool RoutingPolicy::Sets::CommunitySets::CommunitySet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_community_set.is_set;
}

bool RoutingPolicy::Sets::CommunitySets::CommunitySet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_community_set.yfilter);
}

std::string RoutingPolicy::Sets::CommunitySets::CommunitySet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/community-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::CommunitySets::CommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::CommunitySets::CommunitySet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_community_set.is_set || is_set(rpl_community_set.yfilter)) leaf_name_data.push_back(rpl_community_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::CommunitySets::CommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::CommunitySets::CommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::CommunitySets::CommunitySet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-community-set")
    {
        rpl_community_set = value;
        rpl_community_set.value_namespace = name_space;
        rpl_community_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::CommunitySets::CommunitySet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-community-set")
    {
        rpl_community_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::CommunitySets::CommunitySet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-community-set")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPathSets::AsPathSets()
    :
    as_path_set(this, {"set_name"})
{

    yang_name = "as-path-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::AsPathSets::~AsPathSets()
{
}

bool RoutingPolicy::Sets::AsPathSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as_path_set.len(); index++)
    {
        if(as_path_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPathSets::has_operation() const
{
    for (std::size_t index=0; index<as_path_set.len(); index++)
    {
        if(as_path_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::AsPathSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::AsPathSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPathSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPathSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-path-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::AsPathSets::AsPathSet>();
        c->parent = this;
        as_path_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPathSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : as_path_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::AsPathSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::AsPathSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::AsPathSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-path-set")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPathSets::AsPathSet::AsPathSet()
    :
    set_name{YType::str, "set-name"},
    rplas_path_set{YType::str, "rplas-path-set"}
{

    yang_name = "as-path-set"; yang_parent_name = "as-path-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::AsPathSets::AsPathSet::~AsPathSet()
{
}

bool RoutingPolicy::Sets::AsPathSets::AsPathSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rplas_path_set.is_set;
}

bool RoutingPolicy::Sets::AsPathSets::AsPathSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rplas_path_set.yfilter);
}

std::string RoutingPolicy::Sets::AsPathSets::AsPathSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/as-path-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::AsPathSets::AsPathSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPathSets::AsPathSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplas_path_set.is_set || is_set(rplas_path_set.yfilter)) leaf_name_data.push_back(rplas_path_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPathSets::AsPathSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPathSets::AsPathSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::AsPathSets::AsPathSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rplas-path-set")
    {
        rplas_path_set = value;
        rplas_path_set.value_namespace = name_space;
        rplas_path_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::AsPathSets::AsPathSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rplas-path-set")
    {
        rplas_path_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::AsPathSets::AsPathSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rplas-path-set")
        return true;
    return false;
}

RoutingPolicy::Sets::TagSets::TagSets()
    :
    tag_set(this, {"set_name"})
{

    yang_name = "tag-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::TagSets::~TagSets()
{
}

bool RoutingPolicy::Sets::TagSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tag_set.len(); index++)
    {
        if(tag_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::TagSets::has_operation() const
{
    for (std::size_t index=0; index<tag_set.len(); index++)
    {
        if(tag_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::TagSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::TagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::TagSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::TagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::TagSets::TagSet>();
        c->parent = this;
        tag_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::TagSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tag_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::TagSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::TagSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::TagSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-set")
        return true;
    return false;
}

RoutingPolicy::Sets::TagSets::TagSet::TagSet()
    :
    set_name{YType::str, "set-name"},
    rpl_tag_set{YType::str, "rpl-tag-set"}
{

    yang_name = "tag-set"; yang_parent_name = "tag-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::TagSets::TagSet::~TagSet()
{
}

bool RoutingPolicy::Sets::TagSets::TagSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_tag_set.is_set;
}

bool RoutingPolicy::Sets::TagSets::TagSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_tag_set.yfilter);
}

std::string RoutingPolicy::Sets::TagSets::TagSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/tag-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::TagSets::TagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::TagSets::TagSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_tag_set.is_set || is_set(rpl_tag_set.yfilter)) leaf_name_data.push_back(rpl_tag_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::TagSets::TagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::TagSets::TagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::TagSets::TagSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-tag-set")
    {
        rpl_tag_set = value;
        rpl_tag_set.value_namespace = name_space;
        rpl_tag_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::TagSets::TagSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-tag-set")
    {
        rpl_tag_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::TagSets::TagSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-tag-set")
        return true;
    return false;
}

RoutingPolicy::Sets::EtagSets::EtagSets()
    :
    etag_set(this, {"set_name"})
{

    yang_name = "etag-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::EtagSets::~EtagSets()
{
}

bool RoutingPolicy::Sets::EtagSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<etag_set.len(); index++)
    {
        if(etag_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::EtagSets::has_operation() const
{
    for (std::size_t index=0; index<etag_set.len(); index++)
    {
        if(etag_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::EtagSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::EtagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etag-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::EtagSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::EtagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etag-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::EtagSets::EtagSet>();
        c->parent = this;
        etag_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::EtagSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : etag_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::EtagSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::EtagSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::EtagSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etag-set")
        return true;
    return false;
}

RoutingPolicy::Sets::EtagSets::EtagSet::EtagSet()
    :
    set_name{YType::str, "set-name"},
    etag_set_as_text{YType::str, "etag-set-as-text"}
{

    yang_name = "etag-set"; yang_parent_name = "etag-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::EtagSets::EtagSet::~EtagSet()
{
}

bool RoutingPolicy::Sets::EtagSets::EtagSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| etag_set_as_text.is_set;
}

bool RoutingPolicy::Sets::EtagSets::EtagSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(etag_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::EtagSets::EtagSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/etag-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::EtagSets::EtagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etag-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::EtagSets::EtagSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (etag_set_as_text.is_set || is_set(etag_set_as_text.yfilter)) leaf_name_data.push_back(etag_set_as_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::EtagSets::EtagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::EtagSets::EtagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::EtagSets::EtagSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etag-set-as-text")
    {
        etag_set_as_text = value;
        etag_set_as_text.value_namespace = name_space;
        etag_set_as_text.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::EtagSets::EtagSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "etag-set-as-text")
    {
        etag_set_as_text.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::EtagSets::EtagSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "etag-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSets()
    :
    extended_community_rt_set(this, {"set_name"})
{

    yang_name = "extended-community-rt-sets"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityRtSets::~ExtendedCommunityRtSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_community_rt_set.len(); index++)
    {
        if(extended_community_rt_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_rt_set.len(); index++)
    {
        if(extended_community_rt_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRtSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityRtSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-rt-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRtSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRtSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-rt-set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet>();
        c->parent = this;
        extended_community_rt_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRtSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extended_community_rt_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRtSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityRtSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-rt-set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::ExtendedCommunityRtSet()
    :
    set_name{YType::str, "set-name"},
    rpl_extended_community_rt_set{YType::str, "rpl-extended-community-rt-set"}
{

    yang_name = "extended-community-rt-set"; yang_parent_name = "extended-community-rt-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::~ExtendedCommunityRtSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| rpl_extended_community_rt_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_rt_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-rt-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-rt-set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_rt_set.is_set || is_set(rpl_extended_community_rt_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_rt_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl-extended-community-rt-set")
    {
        rpl_extended_community_rt_set = value;
        rpl_extended_community_rt_set.value_namespace = name_space;
        rpl_extended_community_rt_set.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
    if(value_path == "rpl-extended-community-rt-set")
    {
        rpl_extended_community_rt_set.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "rpl-extended-community-rt-set")
        return true;
    return false;
}

RoutingPolicy::Limits::Limits()
    :
    maximum_lines_of_policy{YType::uint32, "maximum-lines-of-policy"},
    maximum_number_of_policies{YType::uint32, "maximum-number-of-policies"}
{

    yang_name = "limits"; yang_parent_name = "routing-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Limits::~Limits()
{
}

bool RoutingPolicy::Limits::has_data() const
{
    if (is_presence_container) return true;
    return maximum_lines_of_policy.is_set
	|| maximum_number_of_policies.is_set;
}

bool RoutingPolicy::Limits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_lines_of_policy.yfilter)
	|| ydk::is_set(maximum_number_of_policies.yfilter);
}

std::string RoutingPolicy::Limits::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Limits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Limits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_lines_of_policy.is_set || is_set(maximum_lines_of_policy.yfilter)) leaf_name_data.push_back(maximum_lines_of_policy.get_name_leafdata());
    if (maximum_number_of_policies.is_set || is_set(maximum_number_of_policies.yfilter)) leaf_name_data.push_back(maximum_number_of_policies.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Limits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Limits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-lines-of-policy")
    {
        maximum_lines_of_policy = value;
        maximum_lines_of_policy.value_namespace = name_space;
        maximum_lines_of_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-of-policies")
    {
        maximum_number_of_policies = value;
        maximum_number_of_policies.value_namespace = name_space;
        maximum_number_of_policies.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Limits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-lines-of-policy")
    {
        maximum_lines_of_policy.yfilter = yfilter;
    }
    if(value_path == "maximum-number-of-policies")
    {
        maximum_number_of_policies.yfilter = yfilter;
    }
}

bool RoutingPolicy::Limits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lines-of-policy" || name == "maximum-number-of-policies")
        return true;
    return false;
}


}
}

