
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_policy_repository_oper_0.hpp"
#include "Cisco_IOS_XR_policy_repository_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_policy_repository_oper {

RoutingPolicy::RoutingPolicy()
    :
    limits(std::make_shared<RoutingPolicy::Limits>())
    , policies(std::make_shared<RoutingPolicy::Policies>())
    , sets(std::make_shared<RoutingPolicy::Sets>())
{
    limits->parent = this;
    policies->parent = this;
    sets->parent = this;

    yang_name = "routing-policy"; yang_parent_name = "Cisco-IOS-XR-policy-repository-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingPolicy::~RoutingPolicy()
{
}

bool RoutingPolicy::has_data() const
{
    if (is_presence_container) return true;
    return (limits !=  nullptr && limits->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (sets !=  nullptr && sets->has_data());
}

bool RoutingPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (limits !=  nullptr && limits->has_operation())
	|| (policies !=  nullptr && policies->has_operation())
	|| (sets !=  nullptr && sets->has_operation());
}

std::string RoutingPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limits")
    {
        if(limits == nullptr)
        {
            limits = std::make_shared<RoutingPolicy::Limits>();
        }
        return limits;
    }

    if(child_yang_name == "policies")
    {
        if(policies == nullptr)
        {
            policies = std::make_shared<RoutingPolicy::Policies>();
        }
        return policies;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limits != nullptr)
    {
        _children["limits"] = limits;
    }

    if(policies != nullptr)
    {
        _children["policies"] = policies;
    }

    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    return _children;
}

void RoutingPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> RoutingPolicy::clone_ptr() const
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
    if(name == "limits" || name == "policies" || name == "sets")
        return true;
    return false;
}

RoutingPolicy::Limits::Limits()
    :
    maximum_lines_of_policy{YType::uint32, "maximum-lines-of-policy"},
    current_lines_of_policy_limit{YType::uint32, "current-lines-of-policy-limit"},
    current_lines_of_policy_used{YType::uint32, "current-lines-of-policy-used"},
    maximum_number_of_policies{YType::uint32, "maximum-number-of-policies"},
    current_number_of_policies_limit{YType::uint32, "current-number-of-policies-limit"},
    current_number_of_policies_used{YType::uint32, "current-number-of-policies-used"},
    compiled_policies_length{YType::uint32, "compiled-policies-length"}
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
	|| current_lines_of_policy_limit.is_set
	|| current_lines_of_policy_used.is_set
	|| maximum_number_of_policies.is_set
	|| current_number_of_policies_limit.is_set
	|| current_number_of_policies_used.is_set
	|| compiled_policies_length.is_set;
}

bool RoutingPolicy::Limits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_lines_of_policy.yfilter)
	|| ydk::is_set(current_lines_of_policy_limit.yfilter)
	|| ydk::is_set(current_lines_of_policy_used.yfilter)
	|| ydk::is_set(maximum_number_of_policies.yfilter)
	|| ydk::is_set(current_number_of_policies_limit.yfilter)
	|| ydk::is_set(current_number_of_policies_used.yfilter)
	|| ydk::is_set(compiled_policies_length.yfilter);
}

std::string RoutingPolicy::Limits::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/" << get_segment_path();
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
    if (current_lines_of_policy_limit.is_set || is_set(current_lines_of_policy_limit.yfilter)) leaf_name_data.push_back(current_lines_of_policy_limit.get_name_leafdata());
    if (current_lines_of_policy_used.is_set || is_set(current_lines_of_policy_used.yfilter)) leaf_name_data.push_back(current_lines_of_policy_used.get_name_leafdata());
    if (maximum_number_of_policies.is_set || is_set(maximum_number_of_policies.yfilter)) leaf_name_data.push_back(maximum_number_of_policies.get_name_leafdata());
    if (current_number_of_policies_limit.is_set || is_set(current_number_of_policies_limit.yfilter)) leaf_name_data.push_back(current_number_of_policies_limit.get_name_leafdata());
    if (current_number_of_policies_used.is_set || is_set(current_number_of_policies_used.yfilter)) leaf_name_data.push_back(current_number_of_policies_used.get_name_leafdata());
    if (compiled_policies_length.is_set || is_set(compiled_policies_length.yfilter)) leaf_name_data.push_back(compiled_policies_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Limits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Limits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-lines-of-policy")
    {
        maximum_lines_of_policy = value;
        maximum_lines_of_policy.value_namespace = name_space;
        maximum_lines_of_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-lines-of-policy-limit")
    {
        current_lines_of_policy_limit = value;
        current_lines_of_policy_limit.value_namespace = name_space;
        current_lines_of_policy_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-lines-of-policy-used")
    {
        current_lines_of_policy_used = value;
        current_lines_of_policy_used.value_namespace = name_space;
        current_lines_of_policy_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-of-policies")
    {
        maximum_number_of_policies = value;
        maximum_number_of_policies.value_namespace = name_space;
        maximum_number_of_policies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-number-of-policies-limit")
    {
        current_number_of_policies_limit = value;
        current_number_of_policies_limit.value_namespace = name_space;
        current_number_of_policies_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-number-of-policies-used")
    {
        current_number_of_policies_used = value;
        current_number_of_policies_used.value_namespace = name_space;
        current_number_of_policies_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compiled-policies-length")
    {
        compiled_policies_length = value;
        compiled_policies_length.value_namespace = name_space;
        compiled_policies_length.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Limits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-lines-of-policy")
    {
        maximum_lines_of_policy.yfilter = yfilter;
    }
    if(value_path == "current-lines-of-policy-limit")
    {
        current_lines_of_policy_limit.yfilter = yfilter;
    }
    if(value_path == "current-lines-of-policy-used")
    {
        current_lines_of_policy_used.yfilter = yfilter;
    }
    if(value_path == "maximum-number-of-policies")
    {
        maximum_number_of_policies.yfilter = yfilter;
    }
    if(value_path == "current-number-of-policies-limit")
    {
        current_number_of_policies_limit.yfilter = yfilter;
    }
    if(value_path == "current-number-of-policies-used")
    {
        current_number_of_policies_used.yfilter = yfilter;
    }
    if(value_path == "compiled-policies-length")
    {
        compiled_policies_length.yfilter = yfilter;
    }
}

bool RoutingPolicy::Limits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lines-of-policy" || name == "current-lines-of-policy-limit" || name == "current-lines-of-policy-used" || name == "maximum-number-of-policies" || name == "current-number-of-policies-limit" || name == "current-number-of-policies-used" || name == "compiled-policies-length")
        return true;
    return false;
}

RoutingPolicy::Policies::Policies()
    :
    route_policies(std::make_shared<RoutingPolicy::Policies::RoutePolicies>())
    , unused(std::make_shared<RoutingPolicy::Policies::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Policies::Inactive>())
    , active(std::make_shared<RoutingPolicy::Policies::Active>())
{
    route_policies->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "policies"; yang_parent_name = "routing-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Policies::~Policies()
{
}

bool RoutingPolicy::Policies::has_data() const
{
    if (is_presence_container) return true;
    return (route_policies !=  nullptr && route_policies->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Policies::has_operation() const
{
    return is_set(yfilter)
	|| (route_policies !=  nullptr && route_policies->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Policies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policies")
    {
        if(route_policies == nullptr)
        {
            route_policies = std::make_shared<RoutingPolicy::Policies::RoutePolicies>();
        }
        return route_policies;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Policies::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Policies::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Policies::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_policies != nullptr)
    {
        _children["route-policies"] = route_policies;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Policies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Policies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Policies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policies" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicies()
    :
    route_policy(this, {"route_policy_name"})
{

    yang_name = "route-policies"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Policies::RoutePolicies::~RoutePolicies()
{
}

bool RoutingPolicy::Policies::RoutePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_policy.len(); index++)
    {
        if(route_policy[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::has_operation() const
{
    for (std::size_t index=0; index<route_policy.len(); index++)
    {
        if(route_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Policies::RoutePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy>();
        ent_->parent = this;
        route_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Policies::RoutePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Policies::RoutePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::RoutePolicy()
    :
    route_policy_name{YType::str, "route-policy-name"}
        ,
    policy_uses(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses>())
    , used_by(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached>())
{
    policy_uses->parent = this;
    used_by->parent = this;
    attached->parent = this;

    yang_name = "route-policy"; yang_parent_name = "route-policies"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::~RoutePolicy()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| (policy_uses !=  nullptr && policy_uses->has_data())
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| (policy_uses !=  nullptr && policy_uses->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/route-policies/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";
    ADD_KEY_TOKEN(route_policy_name, "route-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-uses")
    {
        if(policy_uses == nullptr)
        {
            policy_uses = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses>();
        }
        return policy_uses;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_uses != nullptr)
    {
        _children["policy-uses"] = policy_uses;
    }

    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-uses" || name == "used-by" || name == "attached" || name == "route-policy-name")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::PolicyUses()
    :
    directly_used_policies(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies>())
    , all_used_sets(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets>())
    , directly_used_sets(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets>())
    , all_used_policies(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies>())
{
    directly_used_policies->parent = this;
    all_used_sets->parent = this;
    directly_used_sets->parent = this;
    all_used_policies->parent = this;

    yang_name = "policy-uses"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::~PolicyUses()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::has_data() const
{
    if (is_presence_container) return true;
    return (directly_used_policies !=  nullptr && directly_used_policies->has_data())
	|| (all_used_sets !=  nullptr && all_used_sets->has_data())
	|| (directly_used_sets !=  nullptr && directly_used_sets->has_data())
	|| (all_used_policies !=  nullptr && all_used_policies->has_data());
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::has_operation() const
{
    return is_set(yfilter)
	|| (directly_used_policies !=  nullptr && directly_used_policies->has_operation())
	|| (all_used_sets !=  nullptr && all_used_sets->has_operation())
	|| (directly_used_sets !=  nullptr && directly_used_sets->has_operation())
	|| (all_used_policies !=  nullptr && all_used_policies->has_operation());
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-uses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "directly-used-policies")
    {
        if(directly_used_policies == nullptr)
        {
            directly_used_policies = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies>();
        }
        return directly_used_policies;
    }

    if(child_yang_name == "all-used-sets")
    {
        if(all_used_sets == nullptr)
        {
            all_used_sets = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets>();
        }
        return all_used_sets;
    }

    if(child_yang_name == "directly-used-sets")
    {
        if(directly_used_sets == nullptr)
        {
            directly_used_sets = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets>();
        }
        return directly_used_sets;
    }

    if(child_yang_name == "all-used-policies")
    {
        if(all_used_policies == nullptr)
        {
            all_used_policies = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies>();
        }
        return all_used_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(directly_used_policies != nullptr)
    {
        _children["directly-used-policies"] = directly_used_policies;
    }

    if(all_used_sets != nullptr)
    {
        _children["all-used-sets"] = all_used_sets;
    }

    if(directly_used_sets != nullptr)
    {
        _children["directly-used-sets"] = directly_used_sets;
    }

    if(all_used_policies != nullptr)
    {
        _children["all-used-policies"] = all_used_policies;
    }

    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directly-used-policies" || name == "all-used-sets" || name == "directly-used-sets" || name == "all-used-policies")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::DirectlyUsedPolicies()
    :
    object{YType::str, "object"}
{

    yang_name = "directly-used-policies"; yang_parent_name = "policy-uses"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::~DirectlyUsedPolicies()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directly-used-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::AllUsedSets()
    :
    sets(this, {})
{

    yang_name = "all-used-sets"; yang_parent_name = "policy-uses"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::~AllUsedSets()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sets.len(); index++)
    {
        if(sets[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::has_operation() const
{
    for (std::size_t index=0; index<sets.len(); index++)
    {
        if(sets[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-used-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets>();
        ent_->parent = this;
        sets.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sets.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::Sets()
    :
    set_domain{YType::str, "set-domain"},
    set_name{YType::str, "set-name"}
{

    yang_name = "sets"; yang_parent_name = "all-used-sets"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::~Sets()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : set_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return set_domain.is_set;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::has_operation() const
{
    for (auto const & leaf : set_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(set_domain.yfilter)
	|| ydk::is_set(set_name.yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_domain.is_set || is_set(set_domain.yfilter)) leaf_name_data.push_back(set_domain.get_name_leafdata());

    auto set_name_name_datas = set_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), set_name_name_datas.begin(), set_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-domain")
    {
        set_domain = value;
        set_domain.value_namespace = name_space;
        set_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-name")
    {
        set_name.append(value);
    }
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-domain")
    {
        set_domain.yfilter = yfilter;
    }
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-domain" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::DirectlyUsedSets()
    :
    sets(this, {})
{

    yang_name = "directly-used-sets"; yang_parent_name = "policy-uses"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::~DirectlyUsedSets()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sets.len(); index++)
    {
        if(sets[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::has_operation() const
{
    for (std::size_t index=0; index<sets.len(); index++)
    {
        if(sets[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directly-used-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets>();
        ent_->parent = this;
        sets.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sets.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::Sets()
    :
    set_domain{YType::str, "set-domain"},
    set_name{YType::str, "set-name"}
{

    yang_name = "sets"; yang_parent_name = "directly-used-sets"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::~Sets()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : set_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return set_domain.is_set;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::has_operation() const
{
    for (auto const & leaf : set_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(set_domain.yfilter)
	|| ydk::is_set(set_name.yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_domain.is_set || is_set(set_domain.yfilter)) leaf_name_data.push_back(set_domain.get_name_leafdata());

    auto set_name_name_datas = set_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), set_name_name_datas.begin(), set_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-domain")
    {
        set_domain = value;
        set_domain.value_namespace = name_space;
        set_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-name")
    {
        set_name.append(value);
    }
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-domain")
    {
        set_domain.yfilter = yfilter;
    }
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-domain" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::AllUsedPolicies()
    :
    object{YType::str, "object"}
{

    yang_name = "all-used-policies"; yang_parent_name = "policy-uses"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::~AllUsedPolicies()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-used-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::~Attached()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Policies::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Policies::Unused::~Unused()
{
}

bool RoutingPolicy::Policies::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Policies::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Policies::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Policies::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Policies::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Policies::Inactive::~Inactive()
{
}

bool RoutingPolicy::Policies::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Policies::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Policies::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Policies::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Policies::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Policies::Active::~Active()
{
}

bool RoutingPolicy::Policies::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Policies::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Policies::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Policies::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Policies::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Policies::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Policies::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Policies::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Policies::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Sets()
    :
    etag(std::make_shared<RoutingPolicy::Sets::Etag>())
    , ospf_area(std::make_shared<RoutingPolicy::Sets::OspfArea>())
    , extended_community_opaque(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque>())
    , extended_community_seg_nh(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh>())
    , extended_community_soo(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo>())
    , tag(std::make_shared<RoutingPolicy::Sets::Tag>())
    , prefix(std::make_shared<RoutingPolicy::Sets::Prefix>())
    , community(std::make_shared<RoutingPolicy::Sets::Community>())
    , as_path(std::make_shared<RoutingPolicy::Sets::AsPath>())
    , large_community(std::make_shared<RoutingPolicy::Sets::LargeCommunity>())
    , esi(std::make_shared<RoutingPolicy::Sets::Esi>())
    , extended_community_bandwidth(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth>())
    , extended_community_rt(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt>())
    , rd(std::make_shared<RoutingPolicy::Sets::Rd>())
    , mac(std::make_shared<RoutingPolicy::Sets::Mac>())
    , extended_community_cost(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost>())
{
    etag->parent = this;
    ospf_area->parent = this;
    extended_community_opaque->parent = this;
    extended_community_seg_nh->parent = this;
    extended_community_soo->parent = this;
    tag->parent = this;
    prefix->parent = this;
    community->parent = this;
    as_path->parent = this;
    large_community->parent = this;
    esi->parent = this;
    extended_community_bandwidth->parent = this;
    extended_community_rt->parent = this;
    rd->parent = this;
    mac->parent = this;
    extended_community_cost->parent = this;

    yang_name = "sets"; yang_parent_name = "routing-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::~Sets()
{
}

bool RoutingPolicy::Sets::has_data() const
{
    if (is_presence_container) return true;
    return (etag !=  nullptr && etag->has_data())
	|| (ospf_area !=  nullptr && ospf_area->has_data())
	|| (extended_community_opaque !=  nullptr && extended_community_opaque->has_data())
	|| (extended_community_seg_nh !=  nullptr && extended_community_seg_nh->has_data())
	|| (extended_community_soo !=  nullptr && extended_community_soo->has_data())
	|| (tag !=  nullptr && tag->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (large_community !=  nullptr && large_community->has_data())
	|| (esi !=  nullptr && esi->has_data())
	|| (extended_community_bandwidth !=  nullptr && extended_community_bandwidth->has_data())
	|| (extended_community_rt !=  nullptr && extended_community_rt->has_data())
	|| (rd !=  nullptr && rd->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (extended_community_cost !=  nullptr && extended_community_cost->has_data());
}

bool RoutingPolicy::Sets::has_operation() const
{
    return is_set(yfilter)
	|| (etag !=  nullptr && etag->has_operation())
	|| (ospf_area !=  nullptr && ospf_area->has_operation())
	|| (extended_community_opaque !=  nullptr && extended_community_opaque->has_operation())
	|| (extended_community_seg_nh !=  nullptr && extended_community_seg_nh->has_operation())
	|| (extended_community_soo !=  nullptr && extended_community_soo->has_operation())
	|| (tag !=  nullptr && tag->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (large_community !=  nullptr && large_community->has_operation())
	|| (esi !=  nullptr && esi->has_operation())
	|| (extended_community_bandwidth !=  nullptr && extended_community_bandwidth->has_operation())
	|| (extended_community_rt !=  nullptr && extended_community_rt->has_operation())
	|| (rd !=  nullptr && rd->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (extended_community_cost !=  nullptr && extended_community_cost->has_operation());
}

std::string RoutingPolicy::Sets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/" << get_segment_path();
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

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etag")
    {
        if(etag == nullptr)
        {
            etag = std::make_shared<RoutingPolicy::Sets::Etag>();
        }
        return etag;
    }

    if(child_yang_name == "ospf-area")
    {
        if(ospf_area == nullptr)
        {
            ospf_area = std::make_shared<RoutingPolicy::Sets::OspfArea>();
        }
        return ospf_area;
    }

    if(child_yang_name == "extended-community-opaque")
    {
        if(extended_community_opaque == nullptr)
        {
            extended_community_opaque = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque>();
        }
        return extended_community_opaque;
    }

    if(child_yang_name == "extended-community-seg-nh")
    {
        if(extended_community_seg_nh == nullptr)
        {
            extended_community_seg_nh = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh>();
        }
        return extended_community_seg_nh;
    }

    if(child_yang_name == "extended-community-soo")
    {
        if(extended_community_soo == nullptr)
        {
            extended_community_soo = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo>();
        }
        return extended_community_soo;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<RoutingPolicy::Sets::Tag>();
        }
        return tag;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<RoutingPolicy::Sets::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<RoutingPolicy::Sets::Community>();
        }
        return community;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<RoutingPolicy::Sets::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "large-community")
    {
        if(large_community == nullptr)
        {
            large_community = std::make_shared<RoutingPolicy::Sets::LargeCommunity>();
        }
        return large_community;
    }

    if(child_yang_name == "esi")
    {
        if(esi == nullptr)
        {
            esi = std::make_shared<RoutingPolicy::Sets::Esi>();
        }
        return esi;
    }

    if(child_yang_name == "extended-community-bandwidth")
    {
        if(extended_community_bandwidth == nullptr)
        {
            extended_community_bandwidth = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth>();
        }
        return extended_community_bandwidth;
    }

    if(child_yang_name == "extended-community-rt")
    {
        if(extended_community_rt == nullptr)
        {
            extended_community_rt = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt>();
        }
        return extended_community_rt;
    }

    if(child_yang_name == "rd")
    {
        if(rd == nullptr)
        {
            rd = std::make_shared<RoutingPolicy::Sets::Rd>();
        }
        return rd;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<RoutingPolicy::Sets::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "extended-community-cost")
    {
        if(extended_community_cost == nullptr)
        {
            extended_community_cost = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost>();
        }
        return extended_community_cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(etag != nullptr)
    {
        _children["etag"] = etag;
    }

    if(ospf_area != nullptr)
    {
        _children["ospf-area"] = ospf_area;
    }

    if(extended_community_opaque != nullptr)
    {
        _children["extended-community-opaque"] = extended_community_opaque;
    }

    if(extended_community_seg_nh != nullptr)
    {
        _children["extended-community-seg-nh"] = extended_community_seg_nh;
    }

    if(extended_community_soo != nullptr)
    {
        _children["extended-community-soo"] = extended_community_soo;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(as_path != nullptr)
    {
        _children["as-path"] = as_path;
    }

    if(large_community != nullptr)
    {
        _children["large-community"] = large_community;
    }

    if(esi != nullptr)
    {
        _children["esi"] = esi;
    }

    if(extended_community_bandwidth != nullptr)
    {
        _children["extended-community-bandwidth"] = extended_community_bandwidth;
    }

    if(extended_community_rt != nullptr)
    {
        _children["extended-community-rt"] = extended_community_rt;
    }

    if(rd != nullptr)
    {
        _children["rd"] = rd;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(extended_community_cost != nullptr)
    {
        _children["extended-community-cost"] = extended_community_cost;
    }

    return _children;
}

void RoutingPolicy::Sets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etag" || name == "ospf-area" || name == "extended-community-opaque" || name == "extended-community-seg-nh" || name == "extended-community-soo" || name == "tag" || name == "prefix" || name == "community" || name == "as-path" || name == "large-community" || name == "esi" || name == "extended-community-bandwidth" || name == "extended-community-rt" || name == "rd" || name == "mac" || name == "extended-community-cost")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Etag()
    :
    sets(std::make_shared<RoutingPolicy::Sets::Etag::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::Etag::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::Etag::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::Etag::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "etag"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Etag::~Etag()
{
}

bool RoutingPolicy::Sets::Etag::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::Etag::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::Etag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Etag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Etag::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Etag::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Etag::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Etag::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::Etag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Etag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Etag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "etag"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Etag::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Etag::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Etag::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Etag::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Etag::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Etag::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Etag::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Etag::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Etag::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Etag::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "etag"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Etag::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Etag::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Etag::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Etag::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Etag::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Etag::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Etag::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "etag"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Etag::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Etag::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Etag::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Etag::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Etag::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Etag::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Etag::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Etag::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "etag"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Etag::Active::~Active()
{
}

bool RoutingPolicy::Sets::Etag::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Etag::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Etag::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Etag::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Etag::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Etag::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Etag::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Etag::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Etag::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::OspfArea()
    :
    sets(std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::OspfArea::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::OspfArea::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::OspfArea::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "ospf-area"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::OspfArea::~OspfArea()
{
}

bool RoutingPolicy::Sets::OspfArea::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::OspfArea::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::OspfArea::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::OspfArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::OspfArea::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::OspfArea::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::OspfArea::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::OspfArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::OspfArea::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::OspfArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "ospf-area"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::OspfArea::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::OspfArea::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "ospf-area"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::OspfArea::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::OspfArea::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::OspfArea::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::OspfArea::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::OspfArea::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::OspfArea::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::OspfArea::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "ospf-area"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::OspfArea::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::OspfArea::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::OspfArea::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::OspfArea::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::OspfArea::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::OspfArea::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::OspfArea::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::OspfArea::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "ospf-area"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::OspfArea::Active::~Active()
{
}

bool RoutingPolicy::Sets::OspfArea::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::OspfArea::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::OspfArea::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::OspfArea::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::OspfArea::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::OspfArea::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::OspfArea::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::OspfArea::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::OspfArea::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::ExtendedCommunityOpaque()
    :
    sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "extended-community-opaque"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::~ExtendedCommunityOpaque()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-opaque";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "extended-community-opaque"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "extended-community-opaque"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "extended-community-opaque"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "extended-community-opaque"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::ExtendedCommunitySegNh()
    :
    sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "extended-community-seg-nh"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::~ExtendedCommunitySegNh()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-seg-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "extended-community-seg-nh"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "extended-community-seg-nh"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "extended-community-seg-nh"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "extended-community-seg-nh"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::ExtendedCommunitySoo()
    :
    sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "extended-community-soo"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::~ExtendedCommunitySoo()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-soo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "extended-community-soo"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "extended-community-soo"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "extended-community-soo"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "extended-community-soo"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Tag()
    :
    sets(std::make_shared<RoutingPolicy::Sets::Tag::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::Tag::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::Tag::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::Tag::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "tag"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Tag::~Tag()
{
}

bool RoutingPolicy::Sets::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::Tag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Tag::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Tag::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Tag::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Tag::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Tag::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Tag::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Tag::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Tag::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Tag::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Tag::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Tag::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Tag::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Tag::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Tag::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Tag::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Tag::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Tag::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Tag::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Tag::Active::~Active()
{
}

bool RoutingPolicy::Sets::Tag::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Tag::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Tag::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Tag::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Tag::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Prefix()
    :
    sets(std::make_shared<RoutingPolicy::Sets::Prefix::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::Prefix::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::Prefix::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::Prefix::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "prefix"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Prefix::~Prefix()
{
}

bool RoutingPolicy::Sets::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Prefix::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Prefix::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Prefix::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Prefix::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Prefix::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Prefix::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Prefix::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Prefix::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Prefix::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Prefix::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Prefix::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Prefix::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Prefix::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Prefix::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Prefix::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Prefix::Active::~Active()
{
}

bool RoutingPolicy::Sets::Prefix::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Prefix::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Prefix::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Prefix::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Prefix::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Community()
    :
    sets(std::make_shared<RoutingPolicy::Sets::Community::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::Community::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::Community::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::Community::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "community"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Community::~Community()
{
}

bool RoutingPolicy::Sets::Community::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::Community::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::Community::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Community::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Community::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Community::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Community::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Community::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Community::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Community::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Community::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Community::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Community::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Community::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Community::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::Community::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Community::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Community::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Community::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Community::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Community::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Community::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Community::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Community::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Community::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Community::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Community::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Community::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Community::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Community::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Community::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Community::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Community::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Community::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Community::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Community::Active::~Active()
{
}

bool RoutingPolicy::Sets::Community::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Community::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Community::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Community::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Community::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Community::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Community::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Community::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Community::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::AsPath()
    :
    sets(std::make_shared<RoutingPolicy::Sets::AsPath::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::AsPath::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::AsPath::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::AsPath::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "as-path"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::AsPath::~AsPath()
{
}

bool RoutingPolicy::Sets::AsPath::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::AsPath::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::AsPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::AsPath::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::AsPath::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::AsPath::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::AsPath::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::AsPath::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::AsPath::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::AsPath::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::AsPath::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::AsPath::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::AsPath::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::AsPath::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::AsPath::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::AsPath::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::AsPath::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::AsPath::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::AsPath::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::AsPath::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::AsPath::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::AsPath::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::AsPath::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::AsPath::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::AsPath::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::AsPath::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::AsPath::Active::~Active()
{
}

bool RoutingPolicy::Sets::AsPath::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::AsPath::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::AsPath::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::AsPath::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::AsPath::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::AsPath::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::AsPath::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::AsPath::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::AsPath::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::LargeCommunity()
    :
    sets(std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::LargeCommunity::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::LargeCommunity::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::LargeCommunity::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "large-community"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::LargeCommunity::~LargeCommunity()
{
}

bool RoutingPolicy::Sets::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::LargeCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "large-community"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::LargeCommunity::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunity::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/large-community/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::LargeCommunity::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::LargeCommunity::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/large-community/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::LargeCommunity::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::LargeCommunity::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "large-community"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::LargeCommunity::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::LargeCommunity::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunity::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/large-community/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::LargeCommunity::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::LargeCommunity::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::LargeCommunity::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "large-community"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::LargeCommunity::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::LargeCommunity::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunity::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/large-community/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::LargeCommunity::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::LargeCommunity::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::LargeCommunity::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::LargeCommunity::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "large-community"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::LargeCommunity::Active::~Active()
{
}

bool RoutingPolicy::Sets::LargeCommunity::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::LargeCommunity::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::LargeCommunity::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/large-community/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::LargeCommunity::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::LargeCommunity::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::LargeCommunity::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::LargeCommunity::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::LargeCommunity::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::LargeCommunity::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::LargeCommunity::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Esi()
    :
    sets(std::make_shared<RoutingPolicy::Sets::Esi::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::Esi::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::Esi::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::Esi::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "esi"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Esi::~Esi()
{
}

bool RoutingPolicy::Sets::Esi::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::Esi::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::Esi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Esi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Esi::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Esi::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Esi::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Esi::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::Esi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Esi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Esi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "esi"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Esi::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Esi::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Esi::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Esi::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Esi::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Esi::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Esi::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Esi::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Esi::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Esi::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "esi"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Esi::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Esi::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Esi::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Esi::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Esi::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Esi::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Esi::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "esi"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Esi::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Esi::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Esi::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Esi::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Esi::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Esi::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Esi::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Esi::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "esi"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Esi::Active::~Active()
{
}

bool RoutingPolicy::Sets::Esi::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Esi::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Esi::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Esi::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Esi::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Esi::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::Esi::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Esi::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Esi::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::ExtendedCommunityBandwidth()
    :
    sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;

    yang_name = "extended-community-bandwidth"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::~ExtendedCommunityBandwidth()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive>();
        }
        return inactive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "extended-community-bandwidth"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-bandwidth/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-bandwidth/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "extended-community-bandwidth"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-bandwidth/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "extended-community-bandwidth"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-bandwidth/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::ExtendedCommunityRt()
    :
    sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "extended-community-rt"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::~ExtendedCommunityRt()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityRt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Sets_()
    :
    set(this, {"set_name"})
{

    yang_name = "sets"; yang_parent_name = "extended-community-rt"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.len(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set>();
        ent_->parent = this;
        set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
        ,
    used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy>())
    , attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::has_data() const
{
    if (is_presence_container) return true;
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    ADD_KEY_TOKEN(set_name, "set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(used_by != nullptr)
    {
        _children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        _children["attached"] = attached;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::UsedBy()
    :
    reference(this, {})
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.len(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference>();
        ent_->parent = this;
        reference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::has_data() const
{
    if (is_presence_container) return true;
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Attached()
    :
    binding(this, {})
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "extended-community-rt"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Unused::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "extended-community-rt"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityRt::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "extended-community-rt"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::ExtendedCommunityRt::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Active::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Rd()
    :
    sets(std::make_shared<RoutingPolicy::Sets::Rd::Sets_>())
    , unused(std::make_shared<RoutingPolicy::Sets::Rd::Unused>())
    , inactive(std::make_shared<RoutingPolicy::Sets::Rd::Inactive>())
    , active(std::make_shared<RoutingPolicy::Sets::Rd::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "rd"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingPolicy::Sets::Rd::~Rd()
{
}

bool RoutingPolicy::Sets::Rd::has_data() const
{
    if (is_presence_container) return true;
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::Rd::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::Rd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RoutingPolicy::Sets::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Rd::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Rd::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Rd::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Rd::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RoutingPolicy::Sets::Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sets != nullptr)
    {
        _children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void RoutingPolicy::Sets::Rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Rd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

const Enum::YLeaf Group::address_family_group {0, "address-family-group"};
const Enum::YLeaf Group::session_group {1, "session-group"};
const Enum::YLeaf Group::neighbor_group {2, "neighbor-group"};
const Enum::YLeaf Group::neighbor {3, "neighbor"};
const Enum::YLeaf Group::error_group {4, "error-group"};

const Enum::YLeaf AttachPointDirection::in {0, "in"};
const Enum::YLeaf AttachPointDirection::out {1, "out"};

const Enum::YLeaf SubAddressFamily::unicast {0, "unicast"};
const Enum::YLeaf SubAddressFamily::multicast {1, "multicast"};
const Enum::YLeaf SubAddressFamily::label {2, "label"};
const Enum::YLeaf SubAddressFamily::tunnel {3, "tunnel"};
const Enum::YLeaf SubAddressFamily::vpn {4, "vpn"};
const Enum::YLeaf SubAddressFamily::mdt {5, "mdt"};
const Enum::YLeaf SubAddressFamily::vpls {6, "vpls"};
const Enum::YLeaf SubAddressFamily::rt_constraint {7, "rt-constraint"};
const Enum::YLeaf SubAddressFamily::mvpn {8, "mvpn"};
const Enum::YLeaf SubAddressFamily::flow {9, "flow"};
const Enum::YLeaf SubAddressFamily::vpn_mcast {10, "vpn-mcast"};
const Enum::YLeaf SubAddressFamily::evpn {11, "evpn"};
const Enum::YLeaf SubAddressFamily::saf_none {12, "saf-none"};
const Enum::YLeaf SubAddressFamily::saf_unknown {13, "saf-unknown"};

const Enum::YLeaf AddressFamily::ipv4 {0, "ipv4"};
const Enum::YLeaf AddressFamily::ipv6 {1, "ipv6"};
const Enum::YLeaf AddressFamily::l2vpn {2, "l2vpn"};
const Enum::YLeaf AddressFamily::ls {3, "ls"};
const Enum::YLeaf AddressFamily::af_none {4, "af-none"};
const Enum::YLeaf AddressFamily::af_unknown {5, "af-unknown"};

const Enum::YLeaf ObjectStatus::active {0, "active"};
const Enum::YLeaf ObjectStatus::inactive {1, "inactive"};
const Enum::YLeaf ObjectStatus::unused {2, "unused"};


}
}

