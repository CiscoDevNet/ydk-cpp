
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
    editor{YType::str, "editor"}
    	,
    limits(std::make_shared<RoutingPolicy::Limits>())
	,route_policies(std::make_shared<RoutingPolicy::RoutePolicies>())
	,sets(std::make_shared<RoutingPolicy::Sets>())
{
    limits->parent = this;

    route_policies->parent = this;

    sets->parent = this;

    yang_name = "routing-policy"; yang_parent_name = "Cisco-IOS-XR-policy-repository-cfg";
}

RoutingPolicy::~RoutingPolicy()
{
}

bool RoutingPolicy::has_data() const
{
    return editor.is_set
	|| (limits !=  nullptr && limits->has_data())
	|| (route_policies !=  nullptr && route_policies->has_data())
	|| (sets !=  nullptr && sets->has_data());
}

bool RoutingPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(editor.yfilter)
	|| (limits !=  nullptr && limits->has_operation())
	|| (route_policies !=  nullptr && route_policies->has_operation())
	|| (sets !=  nullptr && sets->has_operation());
}

std::string RoutingPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (editor.is_set || is_set(editor.yfilter)) leaf_name_data.push_back(editor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limits")
    {
        if(limits == nullptr)
        {
            limits = std::make_shared<RoutingPolicy::Limits>();
        }
        return limits;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limits != nullptr)
    {
        children["limits"] = limits;
    }

    if(route_policies != nullptr)
    {
        children["route-policies"] = route_policies;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    return children;
}

void RoutingPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "editor")
    {
        editor = value;
        editor.value_namespace = name_space;
        editor.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(name == "limits" || name == "route-policies" || name == "sets" || name == "editor")
        return true;
    return false;
}

RoutingPolicy::RoutePolicies::RoutePolicies()
{
    yang_name = "route-policies"; yang_parent_name = "routing-policy";
}

RoutingPolicy::RoutePolicies::~RoutePolicies()
{
}

bool RoutingPolicy::RoutePolicies::has_data() const
{
    for (std::size_t index=0; index<route_policy.size(); index++)
    {
        if(route_policy[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::RoutePolicies::has_operation() const
{
    for (std::size_t index=0; index<route_policy.size(); index++)
    {
        if(route_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::RoutePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policies";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::RoutePolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::RoutePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy")
    {
        for(auto const & c : route_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::RoutePolicies::RoutePolicy>();
        c->parent = this;
        route_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::RoutePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_policy)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "route-policy"; yang_parent_name = "route-policies";
}

RoutingPolicy::RoutePolicies::RoutePolicy::~RoutePolicy()
{
}

bool RoutingPolicy::RoutePolicies::RoutePolicy::has_data() const
{
    return route_policy_name.is_set
	|| rpl_route_policy.is_set;
}

bool RoutingPolicy::RoutePolicies::RoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(rpl_route_policy.yfilter);
}

std::string RoutingPolicy::RoutePolicies::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy" <<"[route-policy-name='" <<route_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::RoutePolicies::RoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/route-policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (rpl_route_policy.is_set || is_set(rpl_route_policy.yfilter)) leaf_name_data.push_back(rpl_route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::RoutePolicies::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::RoutePolicies::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    append_esi_sets(std::make_shared<RoutingPolicy::Sets::AppendEsiSets>())
	,append_etag_sets(std::make_shared<RoutingPolicy::Sets::AppendEtagSets>())
	,append_mac_sets(std::make_shared<RoutingPolicy::Sets::AppendMacSets>())
	,as_path_sets(std::make_shared<RoutingPolicy::Sets::AsPathSets>())
	,community_sets(std::make_shared<RoutingPolicy::Sets::CommunitySets>())
	,esi_sets(std::make_shared<RoutingPolicy::Sets::EsiSets>())
	,etag_sets(std::make_shared<RoutingPolicy::Sets::EtagSets>())
	,extended_community_bandwidth_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets>())
	,extended_community_cost_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCostSets>())
	,extended_community_opaque_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets>())
	,extended_community_rt_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRtSets>())
	,extended_community_seg_nh_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNhSets>())
	,extended_community_soo_sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySooSets>())
	,mac_sets(std::make_shared<RoutingPolicy::Sets::MacSets>())
	,ospf_area_sets(std::make_shared<RoutingPolicy::Sets::OspfAreaSets>())
	,policy_global_set_table(std::make_shared<RoutingPolicy::Sets::PolicyGlobalSetTable>())
	,prefix_sets(std::make_shared<RoutingPolicy::Sets::PrefixSets>())
	,prepend_esi_sets(std::make_shared<RoutingPolicy::Sets::PrependEsiSets>())
	,prepend_etag_sets(std::make_shared<RoutingPolicy::Sets::PrependEtagSets>())
	,prepend_mac_sets(std::make_shared<RoutingPolicy::Sets::PrependMacSets>())
	,rd_sets(std::make_shared<RoutingPolicy::Sets::RdSets>())
	,remove_esi_sets(std::make_shared<RoutingPolicy::Sets::RemoveEsiSets>())
	,remove_etag_sets(std::make_shared<RoutingPolicy::Sets::RemoveEtagSets>())
	,remove_mac_sets(std::make_shared<RoutingPolicy::Sets::RemoveMacSets>())
	,tag_sets(std::make_shared<RoutingPolicy::Sets::TagSets>())
{
    append_esi_sets->parent = this;

    append_etag_sets->parent = this;

    append_mac_sets->parent = this;

    as_path_sets->parent = this;

    community_sets->parent = this;

    esi_sets->parent = this;

    etag_sets->parent = this;

    extended_community_bandwidth_sets->parent = this;

    extended_community_cost_sets->parent = this;

    extended_community_opaque_sets->parent = this;

    extended_community_rt_sets->parent = this;

    extended_community_seg_nh_sets->parent = this;

    extended_community_soo_sets->parent = this;

    mac_sets->parent = this;

    ospf_area_sets->parent = this;

    policy_global_set_table->parent = this;

    prefix_sets->parent = this;

    prepend_esi_sets->parent = this;

    prepend_etag_sets->parent = this;

    prepend_mac_sets->parent = this;

    rd_sets->parent = this;

    remove_esi_sets->parent = this;

    remove_etag_sets->parent = this;

    remove_mac_sets->parent = this;

    tag_sets->parent = this;

    yang_name = "sets"; yang_parent_name = "routing-policy";
}

RoutingPolicy::Sets::~Sets()
{
}

bool RoutingPolicy::Sets::has_data() const
{
    return (append_esi_sets !=  nullptr && append_esi_sets->has_data())
	|| (append_etag_sets !=  nullptr && append_etag_sets->has_data())
	|| (append_mac_sets !=  nullptr && append_mac_sets->has_data())
	|| (as_path_sets !=  nullptr && as_path_sets->has_data())
	|| (community_sets !=  nullptr && community_sets->has_data())
	|| (esi_sets !=  nullptr && esi_sets->has_data())
	|| (etag_sets !=  nullptr && etag_sets->has_data())
	|| (extended_community_bandwidth_sets !=  nullptr && extended_community_bandwidth_sets->has_data())
	|| (extended_community_cost_sets !=  nullptr && extended_community_cost_sets->has_data())
	|| (extended_community_opaque_sets !=  nullptr && extended_community_opaque_sets->has_data())
	|| (extended_community_rt_sets !=  nullptr && extended_community_rt_sets->has_data())
	|| (extended_community_seg_nh_sets !=  nullptr && extended_community_seg_nh_sets->has_data())
	|| (extended_community_soo_sets !=  nullptr && extended_community_soo_sets->has_data())
	|| (mac_sets !=  nullptr && mac_sets->has_data())
	|| (ospf_area_sets !=  nullptr && ospf_area_sets->has_data())
	|| (policy_global_set_table !=  nullptr && policy_global_set_table->has_data())
	|| (prefix_sets !=  nullptr && prefix_sets->has_data())
	|| (prepend_esi_sets !=  nullptr && prepend_esi_sets->has_data())
	|| (prepend_etag_sets !=  nullptr && prepend_etag_sets->has_data())
	|| (prepend_mac_sets !=  nullptr && prepend_mac_sets->has_data())
	|| (rd_sets !=  nullptr && rd_sets->has_data())
	|| (remove_esi_sets !=  nullptr && remove_esi_sets->has_data())
	|| (remove_etag_sets !=  nullptr && remove_etag_sets->has_data())
	|| (remove_mac_sets !=  nullptr && remove_mac_sets->has_data())
	|| (tag_sets !=  nullptr && tag_sets->has_data());
}

bool RoutingPolicy::Sets::has_operation() const
{
    return is_set(yfilter)
	|| (append_esi_sets !=  nullptr && append_esi_sets->has_operation())
	|| (append_etag_sets !=  nullptr && append_etag_sets->has_operation())
	|| (append_mac_sets !=  nullptr && append_mac_sets->has_operation())
	|| (as_path_sets !=  nullptr && as_path_sets->has_operation())
	|| (community_sets !=  nullptr && community_sets->has_operation())
	|| (esi_sets !=  nullptr && esi_sets->has_operation())
	|| (etag_sets !=  nullptr && etag_sets->has_operation())
	|| (extended_community_bandwidth_sets !=  nullptr && extended_community_bandwidth_sets->has_operation())
	|| (extended_community_cost_sets !=  nullptr && extended_community_cost_sets->has_operation())
	|| (extended_community_opaque_sets !=  nullptr && extended_community_opaque_sets->has_operation())
	|| (extended_community_rt_sets !=  nullptr && extended_community_rt_sets->has_operation())
	|| (extended_community_seg_nh_sets !=  nullptr && extended_community_seg_nh_sets->has_operation())
	|| (extended_community_soo_sets !=  nullptr && extended_community_soo_sets->has_operation())
	|| (mac_sets !=  nullptr && mac_sets->has_operation())
	|| (ospf_area_sets !=  nullptr && ospf_area_sets->has_operation())
	|| (policy_global_set_table !=  nullptr && policy_global_set_table->has_operation())
	|| (prefix_sets !=  nullptr && prefix_sets->has_operation())
	|| (prepend_esi_sets !=  nullptr && prepend_esi_sets->has_operation())
	|| (prepend_etag_sets !=  nullptr && prepend_etag_sets->has_operation())
	|| (prepend_mac_sets !=  nullptr && prepend_mac_sets->has_operation())
	|| (rd_sets !=  nullptr && rd_sets->has_operation())
	|| (remove_esi_sets !=  nullptr && remove_esi_sets->has_operation())
	|| (remove_etag_sets !=  nullptr && remove_etag_sets->has_operation())
	|| (remove_mac_sets !=  nullptr && remove_mac_sets->has_operation())
	|| (tag_sets !=  nullptr && tag_sets->has_operation());
}

std::string RoutingPolicy::Sets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "append-esi-sets")
    {
        if(append_esi_sets == nullptr)
        {
            append_esi_sets = std::make_shared<RoutingPolicy::Sets::AppendEsiSets>();
        }
        return append_esi_sets;
    }

    if(child_yang_name == "append-etag-sets")
    {
        if(append_etag_sets == nullptr)
        {
            append_etag_sets = std::make_shared<RoutingPolicy::Sets::AppendEtagSets>();
        }
        return append_etag_sets;
    }

    if(child_yang_name == "append-mac-sets")
    {
        if(append_mac_sets == nullptr)
        {
            append_mac_sets = std::make_shared<RoutingPolicy::Sets::AppendMacSets>();
        }
        return append_mac_sets;
    }

    if(child_yang_name == "as-path-sets")
    {
        if(as_path_sets == nullptr)
        {
            as_path_sets = std::make_shared<RoutingPolicy::Sets::AsPathSets>();
        }
        return as_path_sets;
    }

    if(child_yang_name == "community-sets")
    {
        if(community_sets == nullptr)
        {
            community_sets = std::make_shared<RoutingPolicy::Sets::CommunitySets>();
        }
        return community_sets;
    }

    if(child_yang_name == "esi-sets")
    {
        if(esi_sets == nullptr)
        {
            esi_sets = std::make_shared<RoutingPolicy::Sets::EsiSets>();
        }
        return esi_sets;
    }

    if(child_yang_name == "etag-sets")
    {
        if(etag_sets == nullptr)
        {
            etag_sets = std::make_shared<RoutingPolicy::Sets::EtagSets>();
        }
        return etag_sets;
    }

    if(child_yang_name == "extended-community-bandwidth-sets")
    {
        if(extended_community_bandwidth_sets == nullptr)
        {
            extended_community_bandwidth_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets>();
        }
        return extended_community_bandwidth_sets;
    }

    if(child_yang_name == "extended-community-cost-sets")
    {
        if(extended_community_cost_sets == nullptr)
        {
            extended_community_cost_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCostSets>();
        }
        return extended_community_cost_sets;
    }

    if(child_yang_name == "extended-community-opaque-sets")
    {
        if(extended_community_opaque_sets == nullptr)
        {
            extended_community_opaque_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets>();
        }
        return extended_community_opaque_sets;
    }

    if(child_yang_name == "extended-community-rt-sets")
    {
        if(extended_community_rt_sets == nullptr)
        {
            extended_community_rt_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRtSets>();
        }
        return extended_community_rt_sets;
    }

    if(child_yang_name == "extended-community-seg-nh-sets")
    {
        if(extended_community_seg_nh_sets == nullptr)
        {
            extended_community_seg_nh_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNhSets>();
        }
        return extended_community_seg_nh_sets;
    }

    if(child_yang_name == "extended-community-soo-sets")
    {
        if(extended_community_soo_sets == nullptr)
        {
            extended_community_soo_sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySooSets>();
        }
        return extended_community_soo_sets;
    }

    if(child_yang_name == "mac-sets")
    {
        if(mac_sets == nullptr)
        {
            mac_sets = std::make_shared<RoutingPolicy::Sets::MacSets>();
        }
        return mac_sets;
    }

    if(child_yang_name == "ospf-area-sets")
    {
        if(ospf_area_sets == nullptr)
        {
            ospf_area_sets = std::make_shared<RoutingPolicy::Sets::OspfAreaSets>();
        }
        return ospf_area_sets;
    }

    if(child_yang_name == "policy-global-set-table")
    {
        if(policy_global_set_table == nullptr)
        {
            policy_global_set_table = std::make_shared<RoutingPolicy::Sets::PolicyGlobalSetTable>();
        }
        return policy_global_set_table;
    }

    if(child_yang_name == "prefix-sets")
    {
        if(prefix_sets == nullptr)
        {
            prefix_sets = std::make_shared<RoutingPolicy::Sets::PrefixSets>();
        }
        return prefix_sets;
    }

    if(child_yang_name == "prepend-esi-sets")
    {
        if(prepend_esi_sets == nullptr)
        {
            prepend_esi_sets = std::make_shared<RoutingPolicy::Sets::PrependEsiSets>();
        }
        return prepend_esi_sets;
    }

    if(child_yang_name == "prepend-etag-sets")
    {
        if(prepend_etag_sets == nullptr)
        {
            prepend_etag_sets = std::make_shared<RoutingPolicy::Sets::PrependEtagSets>();
        }
        return prepend_etag_sets;
    }

    if(child_yang_name == "prepend-mac-sets")
    {
        if(prepend_mac_sets == nullptr)
        {
            prepend_mac_sets = std::make_shared<RoutingPolicy::Sets::PrependMacSets>();
        }
        return prepend_mac_sets;
    }

    if(child_yang_name == "rd-sets")
    {
        if(rd_sets == nullptr)
        {
            rd_sets = std::make_shared<RoutingPolicy::Sets::RdSets>();
        }
        return rd_sets;
    }

    if(child_yang_name == "remove-esi-sets")
    {
        if(remove_esi_sets == nullptr)
        {
            remove_esi_sets = std::make_shared<RoutingPolicy::Sets::RemoveEsiSets>();
        }
        return remove_esi_sets;
    }

    if(child_yang_name == "remove-etag-sets")
    {
        if(remove_etag_sets == nullptr)
        {
            remove_etag_sets = std::make_shared<RoutingPolicy::Sets::RemoveEtagSets>();
        }
        return remove_etag_sets;
    }

    if(child_yang_name == "remove-mac-sets")
    {
        if(remove_mac_sets == nullptr)
        {
            remove_mac_sets = std::make_shared<RoutingPolicy::Sets::RemoveMacSets>();
        }
        return remove_mac_sets;
    }

    if(child_yang_name == "tag-sets")
    {
        if(tag_sets == nullptr)
        {
            tag_sets = std::make_shared<RoutingPolicy::Sets::TagSets>();
        }
        return tag_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(append_esi_sets != nullptr)
    {
        children["append-esi-sets"] = append_esi_sets;
    }

    if(append_etag_sets != nullptr)
    {
        children["append-etag-sets"] = append_etag_sets;
    }

    if(append_mac_sets != nullptr)
    {
        children["append-mac-sets"] = append_mac_sets;
    }

    if(as_path_sets != nullptr)
    {
        children["as-path-sets"] = as_path_sets;
    }

    if(community_sets != nullptr)
    {
        children["community-sets"] = community_sets;
    }

    if(esi_sets != nullptr)
    {
        children["esi-sets"] = esi_sets;
    }

    if(etag_sets != nullptr)
    {
        children["etag-sets"] = etag_sets;
    }

    if(extended_community_bandwidth_sets != nullptr)
    {
        children["extended-community-bandwidth-sets"] = extended_community_bandwidth_sets;
    }

    if(extended_community_cost_sets != nullptr)
    {
        children["extended-community-cost-sets"] = extended_community_cost_sets;
    }

    if(extended_community_opaque_sets != nullptr)
    {
        children["extended-community-opaque-sets"] = extended_community_opaque_sets;
    }

    if(extended_community_rt_sets != nullptr)
    {
        children["extended-community-rt-sets"] = extended_community_rt_sets;
    }

    if(extended_community_seg_nh_sets != nullptr)
    {
        children["extended-community-seg-nh-sets"] = extended_community_seg_nh_sets;
    }

    if(extended_community_soo_sets != nullptr)
    {
        children["extended-community-soo-sets"] = extended_community_soo_sets;
    }

    if(mac_sets != nullptr)
    {
        children["mac-sets"] = mac_sets;
    }

    if(ospf_area_sets != nullptr)
    {
        children["ospf-area-sets"] = ospf_area_sets;
    }

    if(policy_global_set_table != nullptr)
    {
        children["policy-global-set-table"] = policy_global_set_table;
    }

    if(prefix_sets != nullptr)
    {
        children["prefix-sets"] = prefix_sets;
    }

    if(prepend_esi_sets != nullptr)
    {
        children["prepend-esi-sets"] = prepend_esi_sets;
    }

    if(prepend_etag_sets != nullptr)
    {
        children["prepend-etag-sets"] = prepend_etag_sets;
    }

    if(prepend_mac_sets != nullptr)
    {
        children["prepend-mac-sets"] = prepend_mac_sets;
    }

    if(rd_sets != nullptr)
    {
        children["rd-sets"] = rd_sets;
    }

    if(remove_esi_sets != nullptr)
    {
        children["remove-esi-sets"] = remove_esi_sets;
    }

    if(remove_etag_sets != nullptr)
    {
        children["remove-etag-sets"] = remove_etag_sets;
    }

    if(remove_mac_sets != nullptr)
    {
        children["remove-mac-sets"] = remove_mac_sets;
    }

    if(tag_sets != nullptr)
    {
        children["tag-sets"] = tag_sets;
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
    if(name == "append-esi-sets" || name == "append-etag-sets" || name == "append-mac-sets" || name == "as-path-sets" || name == "community-sets" || name == "esi-sets" || name == "etag-sets" || name == "extended-community-bandwidth-sets" || name == "extended-community-cost-sets" || name == "extended-community-opaque-sets" || name == "extended-community-rt-sets" || name == "extended-community-seg-nh-sets" || name == "extended-community-soo-sets" || name == "mac-sets" || name == "ospf-area-sets" || name == "policy-global-set-table" || name == "prefix-sets" || name == "prepend-esi-sets" || name == "prepend-etag-sets" || name == "prepend-mac-sets" || name == "rd-sets" || name == "remove-esi-sets" || name == "remove-etag-sets" || name == "remove-mac-sets" || name == "tag-sets")
        return true;
    return false;
}

RoutingPolicy::Sets::PrependEtagSets::PrependEtagSets()
{
    yang_name = "prepend-etag-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::PrependEtagSets::~PrependEtagSets()
{
}

bool RoutingPolicy::Sets::PrependEtagSets::has_data() const
{
    for (std::size_t index=0; index<prepend_etag_set.size(); index++)
    {
        if(prepend_etag_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::PrependEtagSets::has_operation() const
{
    for (std::size_t index=0; index<prepend_etag_set.size(); index++)
    {
        if(prepend_etag_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::PrependEtagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-etag-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PrependEtagSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrependEtagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-etag-set")
    {
        for(auto const & c : prepend_etag_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet>();
        c->parent = this;
        prepend_etag_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrependEtagSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_etag_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::PrependEtagSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::PrependEtagSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::PrependEtagSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-etag-set")
        return true;
    return false;
}

RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::PrependEtagSet()
    :
    set_name{YType::str, "set-name"},
    etag_set_as_text{YType::str, "etag-set-as-text"}
{
    yang_name = "prepend-etag-set"; yang_parent_name = "prepend-etag-sets";
}

RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::~PrependEtagSet()
{
}

bool RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::has_data() const
{
    return set_name.is_set
	|| etag_set_as_text.is_set;
}

bool RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(etag_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-etag-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/prepend-etag-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (etag_set_as_text.is_set || is_set(etag_set_as_text.yfilter)) leaf_name_data.push_back(etag_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "etag-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::PrefixSets::PrefixSets()
{
    yang_name = "prefix-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::PrefixSets::~PrefixSets()
{
}

bool RoutingPolicy::Sets::PrefixSets::has_data() const
{
    for (std::size_t index=0; index<prefix_set.size(); index++)
    {
        if(prefix_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::PrefixSets::has_operation() const
{
    for (std::size_t index=0; index<prefix_set.size(); index++)
    {
        if(prefix_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::PrefixSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PrefixSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrefixSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-set")
    {
        for(auto const & c : prefix_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::PrefixSets::PrefixSet>();
        c->parent = this;
        prefix_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrefixSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "prefix-set"; yang_parent_name = "prefix-sets";
}

RoutingPolicy::Sets::PrefixSets::PrefixSet::~PrefixSet()
{
}

bool RoutingPolicy::Sets::PrefixSets::PrefixSet::has_data() const
{
    return set_name.is_set
	|| rpl_prefix_set.is_set;
}

bool RoutingPolicy::Sets::PrefixSets::PrefixSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_prefix_set.yfilter);
}

std::string RoutingPolicy::Sets::PrefixSets::PrefixSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PrefixSets::PrefixSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/prefix-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_prefix_set.is_set || is_set(rpl_prefix_set.yfilter)) leaf_name_data.push_back(rpl_prefix_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrefixSets::PrefixSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrefixSets::PrefixSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

RoutingPolicy::Sets::AppendEtagSets::AppendEtagSets()
{
    yang_name = "append-etag-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::AppendEtagSets::~AppendEtagSets()
{
}

bool RoutingPolicy::Sets::AppendEtagSets::has_data() const
{
    for (std::size_t index=0; index<append_etag_set.size(); index++)
    {
        if(append_etag_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AppendEtagSets::has_operation() const
{
    for (std::size_t index=0; index<append_etag_set.size(); index++)
    {
        if(append_etag_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::AppendEtagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "append-etag-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AppendEtagSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AppendEtagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "append-etag-set")
    {
        for(auto const & c : append_etag_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet>();
        c->parent = this;
        append_etag_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AppendEtagSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : append_etag_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::AppendEtagSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::AppendEtagSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::AppendEtagSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "append-etag-set")
        return true;
    return false;
}

RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::AppendEtagSet()
    :
    set_name{YType::str, "set-name"},
    etag_set_as_text{YType::str, "etag-set-as-text"}
{
    yang_name = "append-etag-set"; yang_parent_name = "append-etag-sets";
}

RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::~AppendEtagSet()
{
}

bool RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::has_data() const
{
    return set_name.is_set
	|| etag_set_as_text.is_set;
}

bool RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(etag_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "append-etag-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/append-etag-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (etag_set_as_text.is_set || is_set(etag_set_as_text.yfilter)) leaf_name_data.push_back(etag_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "etag-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSets()
{
    yang_name = "remove-etag-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::RemoveEtagSets::~RemoveEtagSets()
{
}

bool RoutingPolicy::Sets::RemoveEtagSets::has_data() const
{
    for (std::size_t index=0; index<remove_etag_set.size(); index++)
    {
        if(remove_etag_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::RemoveEtagSets::has_operation() const
{
    for (std::size_t index=0; index<remove_etag_set.size(); index++)
    {
        if(remove_etag_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::RemoveEtagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-etag-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::RemoveEtagSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RemoveEtagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remove-etag-set")
    {
        for(auto const & c : remove_etag_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet>();
        c->parent = this;
        remove_etag_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RemoveEtagSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remove_etag_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::RemoveEtagSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::RemoveEtagSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::RemoveEtagSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remove-etag-set")
        return true;
    return false;
}

RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::RemoveEtagSet()
    :
    set_name{YType::str, "set-name"},
    etag_set_as_text{YType::str, "etag-set-as-text"}
{
    yang_name = "remove-etag-set"; yang_parent_name = "remove-etag-sets";
}

RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::~RemoveEtagSet()
{
}

bool RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::has_data() const
{
    return set_name.is_set
	|| etag_set_as_text.is_set;
}

bool RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(etag_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-etag-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/remove-etag-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (etag_set_as_text.is_set || is_set(etag_set_as_text.yfilter)) leaf_name_data.push_back(etag_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "etag-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::MacSets::MacSets()
{
    yang_name = "mac-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::MacSets::~MacSets()
{
}

bool RoutingPolicy::Sets::MacSets::has_data() const
{
    for (std::size_t index=0; index<mac_set.size(); index++)
    {
        if(mac_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::MacSets::has_operation() const
{
    for (std::size_t index=0; index<mac_set.size(); index++)
    {
        if(mac_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::MacSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::MacSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::MacSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-set")
    {
        for(auto const & c : mac_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::MacSets::MacSet>();
        c->parent = this;
        mac_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::MacSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "mac-set"; yang_parent_name = "mac-sets";
}

RoutingPolicy::Sets::MacSets::MacSet::~MacSet()
{
}

bool RoutingPolicy::Sets::MacSets::MacSet::has_data() const
{
    return set_name.is_set
	|| mac_set_as_text.is_set;
}

bool RoutingPolicy::Sets::MacSets::MacSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(mac_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::MacSets::MacSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::MacSets::MacSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/mac-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (mac_set_as_text.is_set || is_set(mac_set_as_text.yfilter)) leaf_name_data.push_back(mac_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::MacSets::MacSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::MacSets::MacSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "extended-community-opaque-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::~ExtendedCommunityOpaqueSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::has_data() const
{
    for (std::size_t index=0; index<extended_community_opaque_set.size(); index++)
    {
        if(extended_community_opaque_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_opaque_set.size(); index++)
    {
        if(extended_community_opaque_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-opaque-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-opaque-set")
    {
        for(auto const & c : extended_community_opaque_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet>();
        c->parent = this;
        extended_community_opaque_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_community_opaque_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "extended-community-opaque-set"; yang_parent_name = "extended-community-opaque-sets";
}

RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::~ExtendedCommunityOpaqueSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::has_data() const
{
    return set_name.is_set
	|| rpl_extended_community_opaque_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_opaque_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-opaque-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-opaque-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_opaque_set.is_set || is_set(rpl_extended_community_opaque_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_opaque_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

RoutingPolicy::Sets::PrependMacSets::PrependMacSets()
{
    yang_name = "prepend-mac-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::PrependMacSets::~PrependMacSets()
{
}

bool RoutingPolicy::Sets::PrependMacSets::has_data() const
{
    for (std::size_t index=0; index<prepend_mac_set.size(); index++)
    {
        if(prepend_mac_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::PrependMacSets::has_operation() const
{
    for (std::size_t index=0; index<prepend_mac_set.size(); index++)
    {
        if(prepend_mac_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::PrependMacSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-mac-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PrependMacSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrependMacSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-mac-set")
    {
        for(auto const & c : prepend_mac_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::PrependMacSets::PrependMacSet>();
        c->parent = this;
        prepend_mac_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrependMacSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_mac_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::PrependMacSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::PrependMacSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::PrependMacSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-mac-set")
        return true;
    return false;
}

RoutingPolicy::Sets::PrependMacSets::PrependMacSet::PrependMacSet()
    :
    set_name{YType::str, "set-name"},
    mac_set_as_text{YType::str, "mac-set-as-text"}
{
    yang_name = "prepend-mac-set"; yang_parent_name = "prepend-mac-sets";
}

RoutingPolicy::Sets::PrependMacSets::PrependMacSet::~PrependMacSet()
{
}

bool RoutingPolicy::Sets::PrependMacSets::PrependMacSet::has_data() const
{
    return set_name.is_set
	|| mac_set_as_text.is_set;
}

bool RoutingPolicy::Sets::PrependMacSets::PrependMacSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(mac_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::PrependMacSets::PrependMacSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-mac-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PrependMacSets::PrependMacSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/prepend-mac-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (mac_set_as_text.is_set || is_set(mac_set_as_text.yfilter)) leaf_name_data.push_back(mac_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrependMacSets::PrependMacSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrependMacSets::PrependMacSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::PrependMacSets::PrependMacSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::PrependMacSets::PrependMacSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::PrependMacSets::PrependMacSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "mac-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfAreaSets::OspfAreaSets()
{
    yang_name = "ospf-area-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::OspfAreaSets::~OspfAreaSets()
{
}

bool RoutingPolicy::Sets::OspfAreaSets::has_data() const
{
    for (std::size_t index=0; index<ospf_area_set.size(); index++)
    {
        if(ospf_area_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfAreaSets::has_operation() const
{
    for (std::size_t index=0; index<ospf_area_set.size(); index++)
    {
        if(ospf_area_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::OspfAreaSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfAreaSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfAreaSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-area-set")
    {
        for(auto const & c : ospf_area_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet>();
        c->parent = this;
        ospf_area_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfAreaSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf_area_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "ospf-area-set"; yang_parent_name = "ospf-area-sets";
}

RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::~OspfAreaSet()
{
}

bool RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::has_data() const
{
    return set_name.is_set
	|| rplospf_area_set.is_set;
}

bool RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rplospf_area_set.yfilter);
}

std::string RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/ospf-area-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplospf_area_set.is_set || is_set(rplospf_area_set.yfilter)) leaf_name_data.push_back(rplospf_area_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

RoutingPolicy::Sets::AppendMacSets::AppendMacSets()
{
    yang_name = "append-mac-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::AppendMacSets::~AppendMacSets()
{
}

bool RoutingPolicy::Sets::AppendMacSets::has_data() const
{
    for (std::size_t index=0; index<append_mac_set.size(); index++)
    {
        if(append_mac_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AppendMacSets::has_operation() const
{
    for (std::size_t index=0; index<append_mac_set.size(); index++)
    {
        if(append_mac_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::AppendMacSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "append-mac-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AppendMacSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AppendMacSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "append-mac-set")
    {
        for(auto const & c : append_mac_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::AppendMacSets::AppendMacSet>();
        c->parent = this;
        append_mac_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AppendMacSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : append_mac_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::AppendMacSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::AppendMacSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::AppendMacSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "append-mac-set")
        return true;
    return false;
}

RoutingPolicy::Sets::AppendMacSets::AppendMacSet::AppendMacSet()
    :
    set_name{YType::str, "set-name"},
    mac_set_as_text{YType::str, "mac-set-as-text"}
{
    yang_name = "append-mac-set"; yang_parent_name = "append-mac-sets";
}

RoutingPolicy::Sets::AppendMacSets::AppendMacSet::~AppendMacSet()
{
}

bool RoutingPolicy::Sets::AppendMacSets::AppendMacSet::has_data() const
{
    return set_name.is_set
	|| mac_set_as_text.is_set;
}

bool RoutingPolicy::Sets::AppendMacSets::AppendMacSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(mac_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::AppendMacSets::AppendMacSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "append-mac-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AppendMacSets::AppendMacSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/append-mac-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (mac_set_as_text.is_set || is_set(mac_set_as_text.yfilter)) leaf_name_data.push_back(mac_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AppendMacSets::AppendMacSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AppendMacSets::AppendMacSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::AppendMacSets::AppendMacSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::AppendMacSets::AppendMacSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::AppendMacSets::AppendMacSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "mac-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSets()
{
    yang_name = "extended-community-cost-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityCostSets::~ExtendedCommunityCostSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::has_data() const
{
    for (std::size_t index=0; index<extended_community_cost_set.size(); index++)
    {
        if(extended_community_cost_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_cost_set.size(); index++)
    {
        if(extended_community_cost_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCostSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-cost-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCostSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCostSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-cost-set")
    {
        for(auto const & c : extended_community_cost_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet>();
        c->parent = this;
        extended_community_cost_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCostSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_community_cost_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "extended-community-cost-set"; yang_parent_name = "extended-community-cost-sets";
}

RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::~ExtendedCommunityCostSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::has_data() const
{
    return set_name.is_set
	|| rpl_extended_community_cost_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_cost_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-cost-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-cost-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_cost_set.is_set || is_set(rpl_extended_community_cost_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_cost_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

RoutingPolicy::Sets::RemoveMacSets::RemoveMacSets()
{
    yang_name = "remove-mac-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::RemoveMacSets::~RemoveMacSets()
{
}

bool RoutingPolicy::Sets::RemoveMacSets::has_data() const
{
    for (std::size_t index=0; index<remove_mac_set.size(); index++)
    {
        if(remove_mac_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::RemoveMacSets::has_operation() const
{
    for (std::size_t index=0; index<remove_mac_set.size(); index++)
    {
        if(remove_mac_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::RemoveMacSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-mac-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::RemoveMacSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RemoveMacSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remove-mac-set")
    {
        for(auto const & c : remove_mac_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet>();
        c->parent = this;
        remove_mac_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RemoveMacSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remove_mac_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::RemoveMacSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::RemoveMacSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::RemoveMacSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remove-mac-set")
        return true;
    return false;
}

RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::RemoveMacSet()
    :
    set_name{YType::str, "set-name"},
    mac_set_as_text{YType::str, "mac-set-as-text"}
{
    yang_name = "remove-mac-set"; yang_parent_name = "remove-mac-sets";
}

RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::~RemoveMacSet()
{
}

bool RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::has_data() const
{
    return set_name.is_set
	|| mac_set_as_text.is_set;
}

bool RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(mac_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-mac-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/remove-mac-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (mac_set_as_text.is_set || is_set(mac_set_as_text.yfilter)) leaf_name_data.push_back(mac_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "mac-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSets()
{
    yang_name = "extended-community-soo-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunitySooSets::~ExtendedCommunitySooSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::has_data() const
{
    for (std::size_t index=0; index<extended_community_soo_set.size(); index++)
    {
        if(extended_community_soo_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_soo_set.size(); index++)
    {
        if(extended_community_soo_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySooSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-soo-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySooSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySooSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-soo-set")
    {
        for(auto const & c : extended_community_soo_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet>();
        c->parent = this;
        extended_community_soo_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySooSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_community_soo_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "extended-community-soo-set"; yang_parent_name = "extended-community-soo-sets";
}

RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::~ExtendedCommunitySooSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::has_data() const
{
    return set_name.is_set
	|| rpl_extended_community_soo_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_soo_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-soo-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-soo-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_soo_set.is_set || is_set(rpl_extended_community_soo_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_soo_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "esi-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::EsiSets::~EsiSets()
{
}

bool RoutingPolicy::Sets::EsiSets::has_data() const
{
    for (std::size_t index=0; index<esi_set.size(); index++)
    {
        if(esi_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::EsiSets::has_operation() const
{
    for (std::size_t index=0; index<esi_set.size(); index++)
    {
        if(esi_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::EsiSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esi-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::EsiSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::EsiSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esi-set")
    {
        for(auto const & c : esi_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::EsiSets::EsiSet>();
        c->parent = this;
        esi_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::EsiSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : esi_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "esi-set"; yang_parent_name = "esi-sets";
}

RoutingPolicy::Sets::EsiSets::EsiSet::~EsiSet()
{
}

bool RoutingPolicy::Sets::EsiSets::EsiSet::has_data() const
{
    return set_name.is_set
	|| esi_set_as_text.is_set;
}

bool RoutingPolicy::Sets::EsiSets::EsiSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(esi_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::EsiSets::EsiSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esi-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::EsiSets::EsiSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/esi-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (esi_set_as_text.is_set || is_set(esi_set_as_text.yfilter)) leaf_name_data.push_back(esi_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::EsiSets::EsiSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::EsiSets::EsiSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

RoutingPolicy::Sets::PrependEsiSets::PrependEsiSets()
{
    yang_name = "prepend-esi-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::PrependEsiSets::~PrependEsiSets()
{
}

bool RoutingPolicy::Sets::PrependEsiSets::has_data() const
{
    for (std::size_t index=0; index<prepend_esi_set.size(); index++)
    {
        if(prepend_esi_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::PrependEsiSets::has_operation() const
{
    for (std::size_t index=0; index<prepend_esi_set.size(); index++)
    {
        if(prepend_esi_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::PrependEsiSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-esi-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PrependEsiSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrependEsiSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-esi-set")
    {
        for(auto const & c : prepend_esi_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet>();
        c->parent = this;
        prepend_esi_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrependEsiSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_esi_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::PrependEsiSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::PrependEsiSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::PrependEsiSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-esi-set")
        return true;
    return false;
}

RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::PrependEsiSet()
    :
    set_name{YType::str, "set-name"},
    esi_set_as_text{YType::str, "esi-set-as-text"}
{
    yang_name = "prepend-esi-set"; yang_parent_name = "prepend-esi-sets";
}

RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::~PrependEsiSet()
{
}

bool RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::has_data() const
{
    return set_name.is_set
	|| esi_set_as_text.is_set;
}

bool RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(esi_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-esi-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/prepend-esi-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (esi_set_as_text.is_set || is_set(esi_set_as_text.yfilter)) leaf_name_data.push_back(esi_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "esi-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::AppendEsiSets::AppendEsiSets()
{
    yang_name = "append-esi-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::AppendEsiSets::~AppendEsiSets()
{
}

bool RoutingPolicy::Sets::AppendEsiSets::has_data() const
{
    for (std::size_t index=0; index<append_esi_set.size(); index++)
    {
        if(append_esi_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AppendEsiSets::has_operation() const
{
    for (std::size_t index=0; index<append_esi_set.size(); index++)
    {
        if(append_esi_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::AppendEsiSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "append-esi-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AppendEsiSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AppendEsiSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "append-esi-set")
    {
        for(auto const & c : append_esi_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet>();
        c->parent = this;
        append_esi_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AppendEsiSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : append_esi_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::AppendEsiSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::AppendEsiSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::AppendEsiSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "append-esi-set")
        return true;
    return false;
}

RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::AppendEsiSet()
    :
    set_name{YType::str, "set-name"},
    esi_set_as_text{YType::str, "esi-set-as-text"}
{
    yang_name = "append-esi-set"; yang_parent_name = "append-esi-sets";
}

RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::~AppendEsiSet()
{
}

bool RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::has_data() const
{
    return set_name.is_set
	|| esi_set_as_text.is_set;
}

bool RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(esi_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "append-esi-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/append-esi-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (esi_set_as_text.is_set || is_set(esi_set_as_text.yfilter)) leaf_name_data.push_back(esi_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "esi-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSets()
{
    yang_name = "remove-esi-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::RemoveEsiSets::~RemoveEsiSets()
{
}

bool RoutingPolicy::Sets::RemoveEsiSets::has_data() const
{
    for (std::size_t index=0; index<remove_esi_set.size(); index++)
    {
        if(remove_esi_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::RemoveEsiSets::has_operation() const
{
    for (std::size_t index=0; index<remove_esi_set.size(); index++)
    {
        if(remove_esi_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::RemoveEsiSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-esi-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::RemoveEsiSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RemoveEsiSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remove-esi-set")
    {
        for(auto const & c : remove_esi_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet>();
        c->parent = this;
        remove_esi_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RemoveEsiSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remove_esi_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::RemoveEsiSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::RemoveEsiSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::RemoveEsiSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remove-esi-set")
        return true;
    return false;
}

RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::RemoveEsiSet()
    :
    set_name{YType::str, "set-name"},
    esi_set_as_text{YType::str, "esi-set-as-text"}
{
    yang_name = "remove-esi-set"; yang_parent_name = "remove-esi-sets";
}

RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::~RemoveEsiSet()
{
}

bool RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::has_data() const
{
    return set_name.is_set
	|| esi_set_as_text.is_set;
}

bool RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(esi_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-esi-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/remove-esi-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (esi_set_as_text.is_set || is_set(esi_set_as_text.yfilter)) leaf_name_data.push_back(esi_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name" || name == "esi-set-as-text")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSets()
{
    yang_name = "extended-community-seg-nh-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunitySegNhSets::~ExtendedCommunitySegNhSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::has_data() const
{
    for (std::size_t index=0; index<extended_community_seg_nh_set.size(); index++)
    {
        if(extended_community_seg_nh_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_seg_nh_set.size(); index++)
    {
        if(extended_community_seg_nh_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-seg-nh-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-seg-nh-set")
    {
        for(auto const & c : extended_community_seg_nh_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet>();
        c->parent = this;
        extended_community_seg_nh_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_community_seg_nh_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "extended-community-seg-nh-set"; yang_parent_name = "extended-community-seg-nh-sets";
}

RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::~ExtendedCommunitySegNhSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::has_data() const
{
    return set_name.is_set
	|| rpl_extended_community_seg_nh_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_seg_nh_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-seg-nh-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-seg-nh-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_seg_nh_set.is_set || is_set(rpl_extended_community_seg_nh_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_seg_nh_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "rd-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::RdSets::~RdSets()
{
}

bool RoutingPolicy::Sets::RdSets::has_data() const
{
    for (std::size_t index=0; index<rd_set.size(); index++)
    {
        if(rd_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::RdSets::has_operation() const
{
    for (std::size_t index=0; index<rd_set.size(); index++)
    {
        if(rd_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::RdSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::RdSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RdSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-set")
    {
        for(auto const & c : rd_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::RdSets::RdSet>();
        c->parent = this;
        rd_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RdSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rd_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "rd-set"; yang_parent_name = "rd-sets";
}

RoutingPolicy::Sets::RdSets::RdSet::~RdSet()
{
}

bool RoutingPolicy::Sets::RdSets::RdSet::has_data() const
{
    return set_name.is_set
	|| rplrd_set.is_set;
}

bool RoutingPolicy::Sets::RdSets::RdSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rplrd_set.yfilter);
}

std::string RoutingPolicy::Sets::RdSets::RdSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::RdSets::RdSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/rd-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplrd_set.is_set || is_set(rplrd_set.yfilter)) leaf_name_data.push_back(rplrd_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::RdSets::RdSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::RdSets::RdSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "policy-global-set-table"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::PolicyGlobalSetTable::~PolicyGlobalSetTable()
{
}

bool RoutingPolicy::Sets::PolicyGlobalSetTable::has_data() const
{
    return policy_global_set.is_set;
}

bool RoutingPolicy::Sets::PolicyGlobalSetTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_global_set.yfilter);
}

std::string RoutingPolicy::Sets::PolicyGlobalSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-global-set-table";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::PolicyGlobalSetTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_global_set.is_set || is_set(policy_global_set.yfilter)) leaf_name_data.push_back(policy_global_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::PolicyGlobalSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::PolicyGlobalSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "extended-community-bandwidth-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::~ExtendedCommunityBandwidthSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::has_data() const
{
    for (std::size_t index=0; index<extended_community_bandwidth_set.size(); index++)
    {
        if(extended_community_bandwidth_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_bandwidth_set.size(); index++)
    {
        if(extended_community_bandwidth_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-bandwidth-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-bandwidth-set")
    {
        for(auto const & c : extended_community_bandwidth_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet>();
        c->parent = this;
        extended_community_bandwidth_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_community_bandwidth_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "extended-community-bandwidth-set"; yang_parent_name = "extended-community-bandwidth-sets";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::~ExtendedCommunityBandwidthSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::has_data() const
{
    return set_name.is_set
	|| rpl_extended_community_bandwidth_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_bandwidth_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-bandwidth-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-bandwidth-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_bandwidth_set.is_set || is_set(rpl_extended_community_bandwidth_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_bandwidth_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "community-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::CommunitySets::~CommunitySets()
{
}

bool RoutingPolicy::Sets::CommunitySets::has_data() const
{
    for (std::size_t index=0; index<community_set.size(); index++)
    {
        if(community_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::CommunitySets::has_operation() const
{
    for (std::size_t index=0; index<community_set.size(); index++)
    {
        if(community_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::CommunitySets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::CommunitySets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::CommunitySets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-set")
    {
        for(auto const & c : community_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::CommunitySets::CommunitySet>();
        c->parent = this;
        community_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::CommunitySets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "community-set"; yang_parent_name = "community-sets";
}

RoutingPolicy::Sets::CommunitySets::CommunitySet::~CommunitySet()
{
}

bool RoutingPolicy::Sets::CommunitySets::CommunitySet::has_data() const
{
    return set_name.is_set
	|| rpl_community_set.is_set;
}

bool RoutingPolicy::Sets::CommunitySets::CommunitySet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_community_set.yfilter);
}

std::string RoutingPolicy::Sets::CommunitySets::CommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::CommunitySets::CommunitySet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/community-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_community_set.is_set || is_set(rpl_community_set.yfilter)) leaf_name_data.push_back(rpl_community_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::CommunitySets::CommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::CommunitySets::CommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "as-path-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::AsPathSets::~AsPathSets()
{
}

bool RoutingPolicy::Sets::AsPathSets::has_data() const
{
    for (std::size_t index=0; index<as_path_set.size(); index++)
    {
        if(as_path_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPathSets::has_operation() const
{
    for (std::size_t index=0; index<as_path_set.size(); index++)
    {
        if(as_path_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::AsPathSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPathSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPathSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-path-set")
    {
        for(auto const & c : as_path_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::AsPathSets::AsPathSet>();
        c->parent = this;
        as_path_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPathSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_path_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "as-path-set"; yang_parent_name = "as-path-sets";
}

RoutingPolicy::Sets::AsPathSets::AsPathSet::~AsPathSet()
{
}

bool RoutingPolicy::Sets::AsPathSets::AsPathSet::has_data() const
{
    return set_name.is_set
	|| rplas_path_set.is_set;
}

bool RoutingPolicy::Sets::AsPathSets::AsPathSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rplas_path_set.yfilter);
}

std::string RoutingPolicy::Sets::AsPathSets::AsPathSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPathSets::AsPathSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/as-path-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplas_path_set.is_set || is_set(rplas_path_set.yfilter)) leaf_name_data.push_back(rplas_path_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPathSets::AsPathSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPathSets::AsPathSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "tag-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::TagSets::~TagSets()
{
}

bool RoutingPolicy::Sets::TagSets::has_data() const
{
    for (std::size_t index=0; index<tag_set.size(); index++)
    {
        if(tag_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::TagSets::has_operation() const
{
    for (std::size_t index=0; index<tag_set.size(); index++)
    {
        if(tag_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::TagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::TagSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::TagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag-set")
    {
        for(auto const & c : tag_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::TagSets::TagSet>();
        c->parent = this;
        tag_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::TagSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tag_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "tag-set"; yang_parent_name = "tag-sets";
}

RoutingPolicy::Sets::TagSets::TagSet::~TagSet()
{
}

bool RoutingPolicy::Sets::TagSets::TagSet::has_data() const
{
    return set_name.is_set
	|| rpl_tag_set.is_set;
}

bool RoutingPolicy::Sets::TagSets::TagSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_tag_set.yfilter);
}

std::string RoutingPolicy::Sets::TagSets::TagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::TagSets::TagSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/tag-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_tag_set.is_set || is_set(rpl_tag_set.yfilter)) leaf_name_data.push_back(rpl_tag_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::TagSets::TagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::TagSets::TagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "etag-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::EtagSets::~EtagSets()
{
}

bool RoutingPolicy::Sets::EtagSets::has_data() const
{
    for (std::size_t index=0; index<etag_set.size(); index++)
    {
        if(etag_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::EtagSets::has_operation() const
{
    for (std::size_t index=0; index<etag_set.size(); index++)
    {
        if(etag_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::EtagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etag-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::EtagSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::EtagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etag-set")
    {
        for(auto const & c : etag_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::EtagSets::EtagSet>();
        c->parent = this;
        etag_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::EtagSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etag_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "etag-set"; yang_parent_name = "etag-sets";
}

RoutingPolicy::Sets::EtagSets::EtagSet::~EtagSet()
{
}

bool RoutingPolicy::Sets::EtagSets::EtagSet::has_data() const
{
    return set_name.is_set
	|| etag_set_as_text.is_set;
}

bool RoutingPolicy::Sets::EtagSets::EtagSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(etag_set_as_text.yfilter);
}

std::string RoutingPolicy::Sets::EtagSets::EtagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etag-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::EtagSets::EtagSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/etag-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (etag_set_as_text.is_set || is_set(etag_set_as_text.yfilter)) leaf_name_data.push_back(etag_set_as_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::EtagSets::EtagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::EtagSets::EtagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "extended-community-rt-sets"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityRtSets::~ExtendedCommunityRtSets()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::has_data() const
{
    for (std::size_t index=0; index<extended_community_rt_set.size(); index++)
    {
        if(extended_community_rt_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::has_operation() const
{
    for (std::size_t index=0; index<extended_community_rt_set.size(); index++)
    {
        if(extended_community_rt_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRtSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-rt-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRtSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRtSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community-rt-set")
    {
        for(auto const & c : extended_community_rt_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet>();
        c->parent = this;
        extended_community_rt_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRtSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_community_rt_set)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "extended-community-rt-set"; yang_parent_name = "extended-community-rt-sets";
}

RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::~ExtendedCommunityRtSet()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::has_data() const
{
    return set_name.is_set
	|| rpl_extended_community_rt_set.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| ydk::is_set(rpl_extended_community_rt_set.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-rt-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-rt-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_rt_set.is_set || is_set(rpl_extended_community_rt_set.yfilter)) leaf_name_data.push_back(rpl_extended_community_rt_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    maximum_lines_of_policy{YType::int32, "maximum-lines-of-policy"},
    maximum_number_of_policies{YType::int32, "maximum-number-of-policies"}
{
    yang_name = "limits"; yang_parent_name = "routing-policy";
}

RoutingPolicy::Limits::~Limits()
{
}

bool RoutingPolicy::Limits::has_data() const
{
    return maximum_lines_of_policy.is_set
	|| maximum_number_of_policies.is_set;
}

bool RoutingPolicy::Limits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_lines_of_policy.yfilter)
	|| ydk::is_set(maximum_number_of_policies.yfilter);
}

std::string RoutingPolicy::Limits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limits";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Limits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_lines_of_policy.is_set || is_set(maximum_lines_of_policy.yfilter)) leaf_name_data.push_back(maximum_lines_of_policy.get_name_leafdata());
    if (maximum_number_of_policies.is_set || is_set(maximum_number_of_policies.yfilter)) leaf_name_data.push_back(maximum_number_of_policies.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Limits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

