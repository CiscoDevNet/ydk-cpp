
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_trustsec_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_trustsec_oper {

TrustsecState::TrustsecState()
    :
    cts_rolebased_policies(std::make_shared<TrustsecState::CtsRolebasedPolicies>())
	,cts_rolebased_sgtmaps(std::make_shared<TrustsecState::CtsRolebasedSgtmaps>())
	,cts_sxp_connections(std::make_shared<TrustsecState::CtsSxpConnections>())
{
    cts_rolebased_policies->parent = this;
    cts_rolebased_sgtmaps->parent = this;
    cts_sxp_connections->parent = this;

    yang_name = "trustsec-state"; yang_parent_name = "Cisco-IOS-XE-trustsec-oper"; is_top_level_class = true; has_list_ancestor = false;
}

TrustsecState::~TrustsecState()
{
}

bool TrustsecState::has_data() const
{
    return (cts_rolebased_policies !=  nullptr && cts_rolebased_policies->has_data())
	|| (cts_rolebased_sgtmaps !=  nullptr && cts_rolebased_sgtmaps->has_data())
	|| (cts_sxp_connections !=  nullptr && cts_sxp_connections->has_data());
}

bool TrustsecState::has_operation() const
{
    return is_set(yfilter)
	|| (cts_rolebased_policies !=  nullptr && cts_rolebased_policies->has_operation())
	|| (cts_rolebased_sgtmaps !=  nullptr && cts_rolebased_sgtmaps->has_operation())
	|| (cts_sxp_connections !=  nullptr && cts_sxp_connections->has_operation());
}

std::string TrustsecState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrustsecState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TrustsecState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts-rolebased-policies")
    {
        if(cts_rolebased_policies == nullptr)
        {
            cts_rolebased_policies = std::make_shared<TrustsecState::CtsRolebasedPolicies>();
        }
        return cts_rolebased_policies;
    }

    if(child_yang_name == "cts-rolebased-sgtmaps")
    {
        if(cts_rolebased_sgtmaps == nullptr)
        {
            cts_rolebased_sgtmaps = std::make_shared<TrustsecState::CtsRolebasedSgtmaps>();
        }
        return cts_rolebased_sgtmaps;
    }

    if(child_yang_name == "cts-sxp-connections")
    {
        if(cts_sxp_connections == nullptr)
        {
            cts_sxp_connections = std::make_shared<TrustsecState::CtsSxpConnections>();
        }
        return cts_sxp_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cts_rolebased_policies != nullptr)
    {
        children["cts-rolebased-policies"] = cts_rolebased_policies;
    }

    if(cts_rolebased_sgtmaps != nullptr)
    {
        children["cts-rolebased-sgtmaps"] = cts_rolebased_sgtmaps;
    }

    if(cts_sxp_connections != nullptr)
    {
        children["cts-sxp-connections"] = cts_sxp_connections;
    }

    return children;
}

void TrustsecState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrustsecState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TrustsecState::clone_ptr() const
{
    return std::make_shared<TrustsecState>();
}

std::string TrustsecState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TrustsecState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TrustsecState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TrustsecState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool TrustsecState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts-rolebased-policies" || name == "cts-rolebased-sgtmaps" || name == "cts-sxp-connections")
        return true;
    return false;
}

TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicies()
{

    yang_name = "cts-rolebased-policies"; yang_parent_name = "trustsec-state"; is_top_level_class = false; has_list_ancestor = false;
}

TrustsecState::CtsRolebasedPolicies::~CtsRolebasedPolicies()
{
}

bool TrustsecState::CtsRolebasedPolicies::has_data() const
{
    for (std::size_t index=0; index<cts_rolebased_policy.size(); index++)
    {
        if(cts_rolebased_policy[index]->has_data())
            return true;
    }
    return false;
}

bool TrustsecState::CtsRolebasedPolicies::has_operation() const
{
    for (std::size_t index=0; index<cts_rolebased_policy.size(); index++)
    {
        if(cts_rolebased_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrustsecState::CtsRolebasedPolicies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/" << get_segment_path();
    return path_buffer.str();
}

std::string TrustsecState::CtsRolebasedPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-rolebased-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrustsecState::CtsRolebasedPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TrustsecState::CtsRolebasedPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts-rolebased-policy")
    {
        for(auto const & c : cts_rolebased_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy>();
        c->parent = this;
        cts_rolebased_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsRolebasedPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cts_rolebased_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TrustsecState::CtsRolebasedPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrustsecState::CtsRolebasedPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrustsecState::CtsRolebasedPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts-rolebased-policy")
        return true;
    return false;
}

TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::CtsRolebasedPolicy()
    :
    src_sgt{YType::int32, "src-sgt"},
    dst_sgt{YType::int32, "dst-sgt"},
    hardware_deny_count{YType::uint64, "hardware-deny-count"},
    hardware_monitor_count{YType::uint64, "hardware-monitor-count"},
    hardware_permit_count{YType::uint64, "hardware-permit-count"},
    last_updated_time{YType::str, "last-updated-time"},
    monitor_mode{YType::boolean, "monitor-mode"},
    num_of_sgacl{YType::uint32, "num-of-sgacl"},
    policy_life_time{YType::uint64, "policy-life-time"},
    sgacl_name{YType::str, "sgacl-name"},
    software_deny_count{YType::uint64, "software-deny-count"},
    software_monitor_count{YType::uint64, "software-monitor-count"},
    software_permit_count{YType::uint64, "software-permit-count"},
    total_deny_count{YType::uint64, "total-deny-count"},
    total_permit_count{YType::uint64, "total-permit-count"}
{

    yang_name = "cts-rolebased-policy"; yang_parent_name = "cts-rolebased-policies"; is_top_level_class = false; has_list_ancestor = false;
}

TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::~CtsRolebasedPolicy()
{
}

bool TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::has_data() const
{
    return src_sgt.is_set
	|| dst_sgt.is_set
	|| hardware_deny_count.is_set
	|| hardware_monitor_count.is_set
	|| hardware_permit_count.is_set
	|| last_updated_time.is_set
	|| monitor_mode.is_set
	|| num_of_sgacl.is_set
	|| policy_life_time.is_set
	|| sgacl_name.is_set
	|| software_deny_count.is_set
	|| software_monitor_count.is_set
	|| software_permit_count.is_set
	|| total_deny_count.is_set
	|| total_permit_count.is_set;
}

bool TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_sgt.yfilter)
	|| ydk::is_set(dst_sgt.yfilter)
	|| ydk::is_set(hardware_deny_count.yfilter)
	|| ydk::is_set(hardware_monitor_count.yfilter)
	|| ydk::is_set(hardware_permit_count.yfilter)
	|| ydk::is_set(last_updated_time.yfilter)
	|| ydk::is_set(monitor_mode.yfilter)
	|| ydk::is_set(num_of_sgacl.yfilter)
	|| ydk::is_set(policy_life_time.yfilter)
	|| ydk::is_set(sgacl_name.yfilter)
	|| ydk::is_set(software_deny_count.yfilter)
	|| ydk::is_set(software_monitor_count.yfilter)
	|| ydk::is_set(software_permit_count.yfilter)
	|| ydk::is_set(total_deny_count.yfilter)
	|| ydk::is_set(total_permit_count.yfilter);
}

std::string TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/cts-rolebased-policies/" << get_segment_path();
    return path_buffer.str();
}

std::string TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-rolebased-policy" <<"[src-sgt='" <<src_sgt <<"']" <<"[dst-sgt='" <<dst_sgt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_sgt.is_set || is_set(src_sgt.yfilter)) leaf_name_data.push_back(src_sgt.get_name_leafdata());
    if (dst_sgt.is_set || is_set(dst_sgt.yfilter)) leaf_name_data.push_back(dst_sgt.get_name_leafdata());
    if (hardware_deny_count.is_set || is_set(hardware_deny_count.yfilter)) leaf_name_data.push_back(hardware_deny_count.get_name_leafdata());
    if (hardware_monitor_count.is_set || is_set(hardware_monitor_count.yfilter)) leaf_name_data.push_back(hardware_monitor_count.get_name_leafdata());
    if (hardware_permit_count.is_set || is_set(hardware_permit_count.yfilter)) leaf_name_data.push_back(hardware_permit_count.get_name_leafdata());
    if (last_updated_time.is_set || is_set(last_updated_time.yfilter)) leaf_name_data.push_back(last_updated_time.get_name_leafdata());
    if (monitor_mode.is_set || is_set(monitor_mode.yfilter)) leaf_name_data.push_back(monitor_mode.get_name_leafdata());
    if (num_of_sgacl.is_set || is_set(num_of_sgacl.yfilter)) leaf_name_data.push_back(num_of_sgacl.get_name_leafdata());
    if (policy_life_time.is_set || is_set(policy_life_time.yfilter)) leaf_name_data.push_back(policy_life_time.get_name_leafdata());
    if (sgacl_name.is_set || is_set(sgacl_name.yfilter)) leaf_name_data.push_back(sgacl_name.get_name_leafdata());
    if (software_deny_count.is_set || is_set(software_deny_count.yfilter)) leaf_name_data.push_back(software_deny_count.get_name_leafdata());
    if (software_monitor_count.is_set || is_set(software_monitor_count.yfilter)) leaf_name_data.push_back(software_monitor_count.get_name_leafdata());
    if (software_permit_count.is_set || is_set(software_permit_count.yfilter)) leaf_name_data.push_back(software_permit_count.get_name_leafdata());
    if (total_deny_count.is_set || is_set(total_deny_count.yfilter)) leaf_name_data.push_back(total_deny_count.get_name_leafdata());
    if (total_permit_count.is_set || is_set(total_permit_count.yfilter)) leaf_name_data.push_back(total_permit_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-sgt")
    {
        src_sgt = value;
        src_sgt.value_namespace = name_space;
        src_sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-sgt")
    {
        dst_sgt = value;
        dst_sgt.value_namespace = name_space;
        dst_sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-deny-count")
    {
        hardware_deny_count = value;
        hardware_deny_count.value_namespace = name_space;
        hardware_deny_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-monitor-count")
    {
        hardware_monitor_count = value;
        hardware_monitor_count.value_namespace = name_space;
        hardware_monitor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-permit-count")
    {
        hardware_permit_count = value;
        hardware_permit_count.value_namespace = name_space;
        hardware_permit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-updated-time")
    {
        last_updated_time = value;
        last_updated_time.value_namespace = name_space;
        last_updated_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-mode")
    {
        monitor_mode = value;
        monitor_mode.value_namespace = name_space;
        monitor_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-sgacl")
    {
        num_of_sgacl = value;
        num_of_sgacl.value_namespace = name_space;
        num_of_sgacl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-life-time")
    {
        policy_life_time = value;
        policy_life_time.value_namespace = name_space;
        policy_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgacl-name")
    {
        sgacl_name = value;
        sgacl_name.value_namespace = name_space;
        sgacl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-deny-count")
    {
        software_deny_count = value;
        software_deny_count.value_namespace = name_space;
        software_deny_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-monitor-count")
    {
        software_monitor_count = value;
        software_monitor_count.value_namespace = name_space;
        software_monitor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-permit-count")
    {
        software_permit_count = value;
        software_permit_count.value_namespace = name_space;
        software_permit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deny-count")
    {
        total_deny_count = value;
        total_deny_count.value_namespace = name_space;
        total_deny_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-permit-count")
    {
        total_permit_count = value;
        total_permit_count.value_namespace = name_space;
        total_permit_count.value_namespace_prefix = name_space_prefix;
    }
}

void TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-sgt")
    {
        src_sgt.yfilter = yfilter;
    }
    if(value_path == "dst-sgt")
    {
        dst_sgt.yfilter = yfilter;
    }
    if(value_path == "hardware-deny-count")
    {
        hardware_deny_count.yfilter = yfilter;
    }
    if(value_path == "hardware-monitor-count")
    {
        hardware_monitor_count.yfilter = yfilter;
    }
    if(value_path == "hardware-permit-count")
    {
        hardware_permit_count.yfilter = yfilter;
    }
    if(value_path == "last-updated-time")
    {
        last_updated_time.yfilter = yfilter;
    }
    if(value_path == "monitor-mode")
    {
        monitor_mode.yfilter = yfilter;
    }
    if(value_path == "num-of-sgacl")
    {
        num_of_sgacl.yfilter = yfilter;
    }
    if(value_path == "policy-life-time")
    {
        policy_life_time.yfilter = yfilter;
    }
    if(value_path == "sgacl-name")
    {
        sgacl_name.yfilter = yfilter;
    }
    if(value_path == "software-deny-count")
    {
        software_deny_count.yfilter = yfilter;
    }
    if(value_path == "software-monitor-count")
    {
        software_monitor_count.yfilter = yfilter;
    }
    if(value_path == "software-permit-count")
    {
        software_permit_count.yfilter = yfilter;
    }
    if(value_path == "total-deny-count")
    {
        total_deny_count.yfilter = yfilter;
    }
    if(value_path == "total-permit-count")
    {
        total_permit_count.yfilter = yfilter;
    }
}

bool TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-sgt" || name == "dst-sgt" || name == "hardware-deny-count" || name == "hardware-monitor-count" || name == "hardware-permit-count" || name == "last-updated-time" || name == "monitor-mode" || name == "num-of-sgacl" || name == "policy-life-time" || name == "sgacl-name" || name == "software-deny-count" || name == "software-monitor-count" || name == "software-permit-count" || name == "total-deny-count" || name == "total-permit-count")
        return true;
    return false;
}

TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmaps()
{

    yang_name = "cts-rolebased-sgtmaps"; yang_parent_name = "trustsec-state"; is_top_level_class = false; has_list_ancestor = false;
}

TrustsecState::CtsRolebasedSgtmaps::~CtsRolebasedSgtmaps()
{
}

bool TrustsecState::CtsRolebasedSgtmaps::has_data() const
{
    for (std::size_t index=0; index<cts_rolebased_sgtmap.size(); index++)
    {
        if(cts_rolebased_sgtmap[index]->has_data())
            return true;
    }
    return false;
}

bool TrustsecState::CtsRolebasedSgtmaps::has_operation() const
{
    for (std::size_t index=0; index<cts_rolebased_sgtmap.size(); index++)
    {
        if(cts_rolebased_sgtmap[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrustsecState::CtsRolebasedSgtmaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/" << get_segment_path();
    return path_buffer.str();
}

std::string TrustsecState::CtsRolebasedSgtmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-rolebased-sgtmaps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrustsecState::CtsRolebasedSgtmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TrustsecState::CtsRolebasedSgtmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts-rolebased-sgtmap")
    {
        for(auto const & c : cts_rolebased_sgtmap)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap>();
        c->parent = this;
        cts_rolebased_sgtmap.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsRolebasedSgtmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cts_rolebased_sgtmap)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TrustsecState::CtsRolebasedSgtmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrustsecState::CtsRolebasedSgtmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrustsecState::CtsRolebasedSgtmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts-rolebased-sgtmap")
        return true;
    return false;
}

TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::CtsRolebasedSgtmap()
    :
    ip{YType::str, "ip"},
    vrf_name{YType::str, "vrf-name"},
    sgt{YType::int32, "sgt"},
    source{YType::enumeration, "source"}
{

    yang_name = "cts-rolebased-sgtmap"; yang_parent_name = "cts-rolebased-sgtmaps"; is_top_level_class = false; has_list_ancestor = false;
}

TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::~CtsRolebasedSgtmap()
{
}

bool TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::has_data() const
{
    return ip.is_set
	|| vrf_name.is_set
	|| sgt.is_set
	|| source.is_set;
}

bool TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/cts-rolebased-sgtmaps/" << get_segment_path();
    return path_buffer.str();
}

std::string TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-rolebased-sgtmap" <<"[ip='" <<ip <<"']" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "vrf-name" || name == "sgt" || name == "source")
        return true;
    return false;
}

TrustsecState::CtsSxpConnections::CtsSxpConnections()
{

    yang_name = "cts-sxp-connections"; yang_parent_name = "trustsec-state"; is_top_level_class = false; has_list_ancestor = false;
}

TrustsecState::CtsSxpConnections::~CtsSxpConnections()
{
}

bool TrustsecState::CtsSxpConnections::has_data() const
{
    for (std::size_t index=0; index<cts_sxp_connection.size(); index++)
    {
        if(cts_sxp_connection[index]->has_data())
            return true;
    }
    return false;
}

bool TrustsecState::CtsSxpConnections::has_operation() const
{
    for (std::size_t index=0; index<cts_sxp_connection.size(); index++)
    {
        if(cts_sxp_connection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrustsecState::CtsSxpConnections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/" << get_segment_path();
    return path_buffer.str();
}

std::string TrustsecState::CtsSxpConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-sxp-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrustsecState::CtsSxpConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TrustsecState::CtsSxpConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts-sxp-connection")
    {
        for(auto const & c : cts_sxp_connection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TrustsecState::CtsSxpConnections::CtsSxpConnection>();
        c->parent = this;
        cts_sxp_connection.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsSxpConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cts_sxp_connection)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TrustsecState::CtsSxpConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrustsecState::CtsSxpConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrustsecState::CtsSxpConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts-sxp-connection")
        return true;
    return false;
}

TrustsecState::CtsSxpConnections::CtsSxpConnection::CtsSxpConnection()
    :
    peer_ip{YType::str, "peer-ip"},
    vrf_name{YType::str, "vrf-name"},
    listener_duration{YType::uint64, "listener-duration"},
    listener_state{YType::enumeration, "listener-state"},
    local_mode{YType::enumeration, "local-mode"},
    source_ip{YType::str, "source-ip"},
    speaker_duration{YType::uint64, "speaker-duration"},
    speaker_state{YType::enumeration, "speaker-state"}
{

    yang_name = "cts-sxp-connection"; yang_parent_name = "cts-sxp-connections"; is_top_level_class = false; has_list_ancestor = false;
}

TrustsecState::CtsSxpConnections::CtsSxpConnection::~CtsSxpConnection()
{
}

bool TrustsecState::CtsSxpConnections::CtsSxpConnection::has_data() const
{
    return peer_ip.is_set
	|| vrf_name.is_set
	|| listener_duration.is_set
	|| listener_state.is_set
	|| local_mode.is_set
	|| source_ip.is_set
	|| speaker_duration.is_set
	|| speaker_state.is_set;
}

bool TrustsecState::CtsSxpConnections::CtsSxpConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_ip.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(listener_duration.yfilter)
	|| ydk::is_set(listener_state.yfilter)
	|| ydk::is_set(local_mode.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(speaker_duration.yfilter)
	|| ydk::is_set(speaker_state.yfilter);
}

std::string TrustsecState::CtsSxpConnections::CtsSxpConnection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/cts-sxp-connections/" << get_segment_path();
    return path_buffer.str();
}

std::string TrustsecState::CtsSxpConnections::CtsSxpConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-sxp-connection" <<"[peer-ip='" <<peer_ip <<"']" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrustsecState::CtsSxpConnections::CtsSxpConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_ip.is_set || is_set(peer_ip.yfilter)) leaf_name_data.push_back(peer_ip.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (listener_duration.is_set || is_set(listener_duration.yfilter)) leaf_name_data.push_back(listener_duration.get_name_leafdata());
    if (listener_state.is_set || is_set(listener_state.yfilter)) leaf_name_data.push_back(listener_state.get_name_leafdata());
    if (local_mode.is_set || is_set(local_mode.yfilter)) leaf_name_data.push_back(local_mode.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (speaker_duration.is_set || is_set(speaker_duration.yfilter)) leaf_name_data.push_back(speaker_duration.get_name_leafdata());
    if (speaker_state.is_set || is_set(speaker_state.yfilter)) leaf_name_data.push_back(speaker_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TrustsecState::CtsSxpConnections::CtsSxpConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsSxpConnections::CtsSxpConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TrustsecState::CtsSxpConnections::CtsSxpConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-ip")
    {
        peer_ip = value;
        peer_ip.value_namespace = name_space;
        peer_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listener-duration")
    {
        listener_duration = value;
        listener_duration.value_namespace = name_space;
        listener_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listener-state")
    {
        listener_state = value;
        listener_state.value_namespace = name_space;
        listener_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mode")
    {
        local_mode = value;
        local_mode.value_namespace = name_space;
        local_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-duration")
    {
        speaker_duration = value;
        speaker_duration.value_namespace = name_space;
        speaker_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-state")
    {
        speaker_state = value;
        speaker_state.value_namespace = name_space;
        speaker_state.value_namespace_prefix = name_space_prefix;
    }
}

void TrustsecState::CtsSxpConnections::CtsSxpConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-ip")
    {
        peer_ip.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "listener-duration")
    {
        listener_duration.yfilter = yfilter;
    }
    if(value_path == "listener-state")
    {
        listener_state.yfilter = yfilter;
    }
    if(value_path == "local-mode")
    {
        local_mode.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "speaker-duration")
    {
        speaker_duration.yfilter = yfilter;
    }
    if(value_path == "speaker-state")
    {
        speaker_state.yfilter = yfilter;
    }
}

bool TrustsecState::CtsSxpConnections::CtsSxpConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-ip" || name == "vrf-name" || name == "listener-duration" || name == "listener-state" || name == "local-mode" || name == "source-ip" || name == "speaker-duration" || name == "speaker-state")
        return true;
    return false;
}

const Enum::YLeaf CtsOdmBindingSource::default_ {0, "default"};
const Enum::YLeaf CtsOdmBindingSource::from_vlan {1, "from-vlan"};
const Enum::YLeaf CtsOdmBindingSource::from_cli {2, "from-cli"};
const Enum::YLeaf CtsOdmBindingSource::from_l3if {3, "from-l3if"};
const Enum::YLeaf CtsOdmBindingSource::from_cfp {4, "from-cfp"};
const Enum::YLeaf CtsOdmBindingSource::from_ip_arp {5, "from-ip-arp"};
const Enum::YLeaf CtsOdmBindingSource::from_local {6, "from-local"};
const Enum::YLeaf CtsOdmBindingSource::from_sgt_caching {7, "from-sgt-caching"};
const Enum::YLeaf CtsOdmBindingSource::from_cli_hi {8, "from-cli-hi"};

const Enum::YLeaf SxpConMode::con_mode_invalid {0, "con-mode-invalid"};
const Enum::YLeaf SxpConMode::con_mode_speaker {1, "con-mode-speaker"};
const Enum::YLeaf SxpConMode::con_mode_listener {2, "con-mode-listener"};
const Enum::YLeaf SxpConMode::con_mode_both {3, "con-mode-both"};

const Enum::YLeaf SxpConState::state_off {0, "state-off"};
const Enum::YLeaf SxpConState::state_pending_on {1, "state-pending-on"};
const Enum::YLeaf SxpConState::state_on {2, "state-on"};
const Enum::YLeaf SxpConState::state_delete_hold_down {3, "state-delete-hold-down"};
const Enum::YLeaf SxpConState::state_not_applicable {4, "state-not-applicable"};


}
}

