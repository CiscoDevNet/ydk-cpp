
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_policy_repository_oper_0.hpp"
#include "Cisco_IOS_XR_policy_repository_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_policy_repository_oper {

RoutingPolicy::RoutingPolicy()
    :
    limits(std::make_shared<RoutingPolicy::Limits>())
	,policies(std::make_shared<RoutingPolicy::Policies>())
	,sets(std::make_shared<RoutingPolicy::Sets>())
{
    limits->parent = this;

    policies->parent = this;

    sets->parent = this;

    yang_name = "routing-policy"; yang_parent_name = "Cisco-IOS-XR-policy-repository-oper";
}

RoutingPolicy::~RoutingPolicy()
{
}

bool RoutingPolicy::has_data() const
{
    return (limits !=  nullptr && limits->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (sets !=  nullptr && sets->has_data());
}

bool RoutingPolicy::has_operation() const
{
    return is_set(operation)
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

const EntityPath RoutingPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



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

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limits != nullptr)
    {
        children["limits"] = limits;
    }

    if(policies != nullptr)
    {
        children["policies"] = policies;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    return children;
}

void RoutingPolicy::set_value(const std::string & value_path, std::string value)
{
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

RoutingPolicy::Limits::Limits()
    :
    compiled_policies_length{YType::uint32, "compiled-policies-length"},
    current_lines_of_policy_limit{YType::uint32, "current-lines-of-policy-limit"},
    current_lines_of_policy_used{YType::uint32, "current-lines-of-policy-used"},
    current_number_of_policies_limit{YType::uint32, "current-number-of-policies-limit"},
    current_number_of_policies_used{YType::uint32, "current-number-of-policies-used"},
    maximum_lines_of_policy{YType::uint32, "maximum-lines-of-policy"},
    maximum_number_of_policies{YType::uint32, "maximum-number-of-policies"}
{
    yang_name = "limits"; yang_parent_name = "routing-policy";
}

RoutingPolicy::Limits::~Limits()
{
}

bool RoutingPolicy::Limits::has_data() const
{
    return compiled_policies_length.is_set
	|| current_lines_of_policy_limit.is_set
	|| current_lines_of_policy_used.is_set
	|| current_number_of_policies_limit.is_set
	|| current_number_of_policies_used.is_set
	|| maximum_lines_of_policy.is_set
	|| maximum_number_of_policies.is_set;
}

bool RoutingPolicy::Limits::has_operation() const
{
    return is_set(operation)
	|| is_set(compiled_policies_length.operation)
	|| is_set(current_lines_of_policy_limit.operation)
	|| is_set(current_lines_of_policy_used.operation)
	|| is_set(current_number_of_policies_limit.operation)
	|| is_set(current_number_of_policies_used.operation)
	|| is_set(maximum_lines_of_policy.operation)
	|| is_set(maximum_number_of_policies.operation);
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
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compiled_policies_length.is_set || is_set(compiled_policies_length.operation)) leaf_name_data.push_back(compiled_policies_length.get_name_leafdata());
    if (current_lines_of_policy_limit.is_set || is_set(current_lines_of_policy_limit.operation)) leaf_name_data.push_back(current_lines_of_policy_limit.get_name_leafdata());
    if (current_lines_of_policy_used.is_set || is_set(current_lines_of_policy_used.operation)) leaf_name_data.push_back(current_lines_of_policy_used.get_name_leafdata());
    if (current_number_of_policies_limit.is_set || is_set(current_number_of_policies_limit.operation)) leaf_name_data.push_back(current_number_of_policies_limit.get_name_leafdata());
    if (current_number_of_policies_used.is_set || is_set(current_number_of_policies_used.operation)) leaf_name_data.push_back(current_number_of_policies_used.get_name_leafdata());
    if (maximum_lines_of_policy.is_set || is_set(maximum_lines_of_policy.operation)) leaf_name_data.push_back(maximum_lines_of_policy.get_name_leafdata());
    if (maximum_number_of_policies.is_set || is_set(maximum_number_of_policies.operation)) leaf_name_data.push_back(maximum_number_of_policies.get_name_leafdata());


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

void RoutingPolicy::Limits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compiled-policies-length")
    {
        compiled_policies_length = value;
    }
    if(value_path == "current-lines-of-policy-limit")
    {
        current_lines_of_policy_limit = value;
    }
    if(value_path == "current-lines-of-policy-used")
    {
        current_lines_of_policy_used = value;
    }
    if(value_path == "current-number-of-policies-limit")
    {
        current_number_of_policies_limit = value;
    }
    if(value_path == "current-number-of-policies-used")
    {
        current_number_of_policies_used = value;
    }
    if(value_path == "maximum-lines-of-policy")
    {
        maximum_lines_of_policy = value;
    }
    if(value_path == "maximum-number-of-policies")
    {
        maximum_number_of_policies = value;
    }
}

RoutingPolicy::Policies::Policies()
    :
    active(std::make_shared<RoutingPolicy::Policies::Active>())
	,inactive(std::make_shared<RoutingPolicy::Policies::Inactive>())
	,route_policies(std::make_shared<RoutingPolicy::Policies::RoutePolicies>())
	,unused(std::make_shared<RoutingPolicy::Policies::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    route_policies->parent = this;

    unused->parent = this;

    yang_name = "policies"; yang_parent_name = "routing-policy";
}

RoutingPolicy::Policies::~Policies()
{
}

bool RoutingPolicy::Policies::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (route_policies !=  nullptr && route_policies->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Policies::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (route_policies !=  nullptr && route_policies->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Policies::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Policies::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(route_policies != nullptr)
    {
        children["route-policies"] = route_policies;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Policies::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicies()
{
    yang_name = "route-policies"; yang_parent_name = "policies";
}

RoutingPolicy::Policies::RoutePolicies::~RoutePolicies()
{
}

bool RoutingPolicy::Policies::RoutePolicies::has_data() const
{
    for (std::size_t index=0; index<route_policy.size(); index++)
    {
        if(route_policy[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::has_operation() const
{
    for (std::size_t index=0; index<route_policy.size(); index++)
    {
        if(route_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policies";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy>();
        c->parent = this;
        route_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Policies::RoutePolicies::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::RoutePolicy()
    :
    route_policy_name{YType::str, "route-policy-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached>())
	,policy_uses(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses>())
	,used_by(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy>())
{
    attached->parent = this;

    policy_uses->parent = this;

    used_by->parent = this;

    yang_name = "route-policy"; yang_parent_name = "route-policies";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::~RoutePolicy()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::has_data() const
{
    return route_policy_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (policy_uses !=  nullptr && policy_uses->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (policy_uses !=  nullptr && policy_uses->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy" <<"[route-policy-name='" <<route_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/route-policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached>();
        }
        return attached;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(policy_uses != nullptr)
    {
        children["policy-uses"] = policy_uses;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::PolicyUses()
    :
    all_used_policies(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies>())
	,all_used_sets(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets>())
	,directly_used_policies(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies>())
	,directly_used_sets(std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets>())
{
    all_used_policies->parent = this;

    all_used_sets->parent = this;

    directly_used_policies->parent = this;

    directly_used_sets->parent = this;

    yang_name = "policy-uses"; yang_parent_name = "route-policy";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::~PolicyUses()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::has_data() const
{
    return (all_used_policies !=  nullptr && all_used_policies->has_data())
	|| (all_used_sets !=  nullptr && all_used_sets->has_data())
	|| (directly_used_policies !=  nullptr && directly_used_policies->has_data())
	|| (directly_used_sets !=  nullptr && directly_used_sets->has_data());
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::has_operation() const
{
    return is_set(operation)
	|| (all_used_policies !=  nullptr && all_used_policies->has_operation())
	|| (all_used_sets !=  nullptr && all_used_sets->has_operation())
	|| (directly_used_policies !=  nullptr && directly_used_policies->has_operation())
	|| (directly_used_sets !=  nullptr && directly_used_sets->has_operation());
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-uses";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyUses' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-used-policies")
    {
        if(all_used_policies == nullptr)
        {
            all_used_policies = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies>();
        }
        return all_used_policies;
    }

    if(child_yang_name == "all-used-sets")
    {
        if(all_used_sets == nullptr)
        {
            all_used_sets = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets>();
        }
        return all_used_sets;
    }

    if(child_yang_name == "directly-used-policies")
    {
        if(directly_used_policies == nullptr)
        {
            directly_used_policies = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies>();
        }
        return directly_used_policies;
    }

    if(child_yang_name == "directly-used-sets")
    {
        if(directly_used_sets == nullptr)
        {
            directly_used_sets = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets>();
        }
        return directly_used_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_used_policies != nullptr)
    {
        children["all-used-policies"] = all_used_policies;
    }

    if(all_used_sets != nullptr)
    {
        children["all-used-sets"] = all_used_sets;
    }

    if(directly_used_policies != nullptr)
    {
        children["directly-used-policies"] = directly_used_policies;
    }

    if(directly_used_sets != nullptr)
    {
        children["directly-used-sets"] = directly_used_sets;
    }

    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::DirectlyUsedPolicies()
    :
    object{YType::str, "object"}
{
    yang_name = "directly-used-policies"; yang_parent_name = "policy-uses";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::~DirectlyUsedPolicies()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directly-used-policies";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DirectlyUsedPolicies' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::AllUsedSets()
{
    yang_name = "all-used-sets"; yang_parent_name = "policy-uses";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::~AllUsedSets()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::has_data() const
{
    for (std::size_t index=0; index<sets.size(); index++)
    {
        if(sets[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::has_operation() const
{
    for (std::size_t index=0; index<sets.size(); index++)
    {
        if(sets[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-used-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllUsedSets' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        for(auto const & c : sets)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets>();
        c->parent = this;
        sets.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sets)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::Sets()
    :
    set_domain{YType::str, "set-domain"},
    set_name{YType::str, "set-name"}
{
    yang_name = "sets"; yang_parent_name = "all-used-sets";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::~Sets()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(set_domain.operation)
	|| is_set(set_name.operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sets' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_domain.is_set || is_set(set_domain.operation)) leaf_name_data.push_back(set_domain.get_name_leafdata());

    auto set_name_name_datas = set_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), set_name_name_datas.begin(), set_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-domain")
    {
        set_domain = value;
    }
    if(value_path == "set-name")
    {
        set_name.append(value);
    }
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::DirectlyUsedSets()
{
    yang_name = "directly-used-sets"; yang_parent_name = "policy-uses";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::~DirectlyUsedSets()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::has_data() const
{
    for (std::size_t index=0; index<sets.size(); index++)
    {
        if(sets[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::has_operation() const
{
    for (std::size_t index=0; index<sets.size(); index++)
    {
        if(sets[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directly-used-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DirectlyUsedSets' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        for(auto const & c : sets)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets>();
        c->parent = this;
        sets.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sets)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::Sets()
    :
    set_domain{YType::str, "set-domain"},
    set_name{YType::str, "set-name"}
{
    yang_name = "sets"; yang_parent_name = "directly-used-sets";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::~Sets()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(set_domain.operation)
	|| is_set(set_name.operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sets' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_domain.is_set || is_set(set_domain.operation)) leaf_name_data.push_back(set_domain.get_name_leafdata());

    auto set_name_name_datas = set_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), set_name_name_datas.begin(), set_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-domain")
    {
        set_domain = value;
    }
    if(value_path == "set-name")
    {
        set_name.append(value);
    }
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::AllUsedPolicies()
    :
    object{YType::str, "object"}
{
    yang_name = "all-used-policies"; yang_parent_name = "policy-uses";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::~AllUsedPolicies()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-used-policies";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllUsedPolicies' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "route-policy";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "route-policy";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::~Attached()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Policies::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "policies";
}

RoutingPolicy::Policies::Unused::~Unused()
{
}

bool RoutingPolicy::Policies::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Policies::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Policies::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "policies";
}

RoutingPolicy::Policies::Inactive::~Inactive()
{
}

bool RoutingPolicy::Policies::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Policies::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Policies::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "policies";
}

RoutingPolicy::Policies::Active::~Active()
{
}

bool RoutingPolicy::Policies::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Policies::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Policies::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Policies::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Policies::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Policies::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Sets()
    :
    as_path(std::make_shared<RoutingPolicy::Sets::AsPath>())
	,community(std::make_shared<RoutingPolicy::Sets::Community>())
	,esi(std::make_shared<RoutingPolicy::Sets::Esi>())
	,etag(std::make_shared<RoutingPolicy::Sets::Etag>())
	,extended_community_bandwidth(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth>())
	,extended_community_cost(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost>())
	,extended_community_opaque(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque>())
	,extended_community_rt(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt>())
	,extended_community_seg_nh(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh>())
	,extended_community_soo(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo>())
	,mac(std::make_shared<RoutingPolicy::Sets::Mac>())
	,ospf_area(std::make_shared<RoutingPolicy::Sets::OspfArea>())
	,prefix(std::make_shared<RoutingPolicy::Sets::Prefix>())
	,rd(std::make_shared<RoutingPolicy::Sets::Rd>())
	,tag(std::make_shared<RoutingPolicy::Sets::Tag>())
{
    as_path->parent = this;

    community->parent = this;

    esi->parent = this;

    etag->parent = this;

    extended_community_bandwidth->parent = this;

    extended_community_cost->parent = this;

    extended_community_opaque->parent = this;

    extended_community_rt->parent = this;

    extended_community_seg_nh->parent = this;

    extended_community_soo->parent = this;

    mac->parent = this;

    ospf_area->parent = this;

    prefix->parent = this;

    rd->parent = this;

    tag->parent = this;

    yang_name = "sets"; yang_parent_name = "routing-policy";
}

RoutingPolicy::Sets::~Sets()
{
}

bool RoutingPolicy::Sets::has_data() const
{
    return (as_path !=  nullptr && as_path->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (esi !=  nullptr && esi->has_data())
	|| (etag !=  nullptr && etag->has_data())
	|| (extended_community_bandwidth !=  nullptr && extended_community_bandwidth->has_data())
	|| (extended_community_cost !=  nullptr && extended_community_cost->has_data())
	|| (extended_community_opaque !=  nullptr && extended_community_opaque->has_data())
	|| (extended_community_rt !=  nullptr && extended_community_rt->has_data())
	|| (extended_community_seg_nh !=  nullptr && extended_community_seg_nh->has_data())
	|| (extended_community_soo !=  nullptr && extended_community_soo->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (ospf_area !=  nullptr && ospf_area->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rd !=  nullptr && rd->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool RoutingPolicy::Sets::has_operation() const
{
    return is_set(operation)
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (esi !=  nullptr && esi->has_operation())
	|| (etag !=  nullptr && etag->has_operation())
	|| (extended_community_bandwidth !=  nullptr && extended_community_bandwidth->has_operation())
	|| (extended_community_cost !=  nullptr && extended_community_cost->has_operation())
	|| (extended_community_opaque !=  nullptr && extended_community_opaque->has_operation())
	|| (extended_community_rt !=  nullptr && extended_community_rt->has_operation())
	|| (extended_community_seg_nh !=  nullptr && extended_community_seg_nh->has_operation())
	|| (extended_community_soo !=  nullptr && extended_community_soo->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (ospf_area !=  nullptr && ospf_area->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rd !=  nullptr && rd->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
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
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/" << get_segment_path();
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
    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<RoutingPolicy::Sets::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<RoutingPolicy::Sets::Community>();
        }
        return community;
    }

    if(child_yang_name == "esi")
    {
        if(esi == nullptr)
        {
            esi = std::make_shared<RoutingPolicy::Sets::Esi>();
        }
        return esi;
    }

    if(child_yang_name == "etag")
    {
        if(etag == nullptr)
        {
            etag = std::make_shared<RoutingPolicy::Sets::Etag>();
        }
        return etag;
    }

    if(child_yang_name == "extended-community-bandwidth")
    {
        if(extended_community_bandwidth == nullptr)
        {
            extended_community_bandwidth = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth>();
        }
        return extended_community_bandwidth;
    }

    if(child_yang_name == "extended-community-cost")
    {
        if(extended_community_cost == nullptr)
        {
            extended_community_cost = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost>();
        }
        return extended_community_cost;
    }

    if(child_yang_name == "extended-community-opaque")
    {
        if(extended_community_opaque == nullptr)
        {
            extended_community_opaque = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque>();
        }
        return extended_community_opaque;
    }

    if(child_yang_name == "extended-community-rt")
    {
        if(extended_community_rt == nullptr)
        {
            extended_community_rt = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt>();
        }
        return extended_community_rt;
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

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<RoutingPolicy::Sets::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "ospf-area")
    {
        if(ospf_area == nullptr)
        {
            ospf_area = std::make_shared<RoutingPolicy::Sets::OspfArea>();
        }
        return ospf_area;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<RoutingPolicy::Sets::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rd")
    {
        if(rd == nullptr)
        {
            rd = std::make_shared<RoutingPolicy::Sets::Rd>();
        }
        return rd;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<RoutingPolicy::Sets::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(esi != nullptr)
    {
        children["esi"] = esi;
    }

    if(etag != nullptr)
    {
        children["etag"] = etag;
    }

    if(extended_community_bandwidth != nullptr)
    {
        children["extended-community-bandwidth"] = extended_community_bandwidth;
    }

    if(extended_community_cost != nullptr)
    {
        children["extended-community-cost"] = extended_community_cost;
    }

    if(extended_community_opaque != nullptr)
    {
        children["extended-community-opaque"] = extended_community_opaque;
    }

    if(extended_community_rt != nullptr)
    {
        children["extended-community-rt"] = extended_community_rt;
    }

    if(extended_community_seg_nh != nullptr)
    {
        children["extended-community-seg-nh"] = extended_community_seg_nh;
    }

    if(extended_community_soo != nullptr)
    {
        children["extended-community-soo"] = extended_community_soo;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(ospf_area != nullptr)
    {
        children["ospf-area"] = ospf_area;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rd != nullptr)
    {
        children["rd"] = rd;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void RoutingPolicy::Sets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Etag::Etag()
    :
    active(std::make_shared<RoutingPolicy::Sets::Etag::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Etag::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Etag::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Etag::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "etag"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Etag::~Etag()
{
}

bool RoutingPolicy::Sets::Etag::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Etag::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Etag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etag";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Etag::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Etag::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::Etag::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Etag::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "etag";
}

RoutingPolicy::Sets::Etag::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Etag::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Etag::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Etag::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Etag::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Etag::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::Etag::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "etag";
}

RoutingPolicy::Sets::Etag::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Etag::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Etag::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Etag::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Etag::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "etag";
}

RoutingPolicy::Sets::Etag::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Etag::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Etag::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Etag::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Etag::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "etag";
}

RoutingPolicy::Sets::Etag::Active::~Active()
{
}

bool RoutingPolicy::Sets::Etag::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Etag::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Etag::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/etag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Etag::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Etag::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Etag::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::OspfArea::OspfArea()
    :
    active(std::make_shared<RoutingPolicy::Sets::OspfArea::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::OspfArea::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::OspfArea::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "ospf-area"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::OspfArea::~OspfArea()
{
}

bool RoutingPolicy::Sets::OspfArea::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::OspfArea::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::OspfArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::OspfArea::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::OspfArea::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::OspfArea::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::OspfArea::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "ospf-area";
}

RoutingPolicy::Sets::OspfArea::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::OspfArea::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "ospf-area";
}

RoutingPolicy::Sets::OspfArea::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::OspfArea::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::OspfArea::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::OspfArea::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::OspfArea::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "ospf-area";
}

RoutingPolicy::Sets::OspfArea::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::OspfArea::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::OspfArea::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::OspfArea::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::OspfArea::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "ospf-area";
}

RoutingPolicy::Sets::OspfArea::Active::~Active()
{
}

bool RoutingPolicy::Sets::OspfArea::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::OspfArea::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::OspfArea::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/ospf-area/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::OspfArea::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::OspfArea::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::OspfArea::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::ExtendedCommunityOpaque()
    :
    active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "extended-community-opaque"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::~ExtendedCommunityOpaque()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-opaque";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "extended-community-opaque";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "extended-community-opaque";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "extended-community-opaque";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "extended-community-opaque";
}

RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-opaque/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaque::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::ExtendedCommunitySegNh()
    :
    active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "extended-community-seg-nh"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::~ExtendedCommunitySegNh()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-seg-nh";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "extended-community-seg-nh";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "extended-community-seg-nh";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "extended-community-seg-nh";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "extended-community-seg-nh";
}

RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-seg-nh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNh::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunitySoo::ExtendedCommunitySoo()
    :
    active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "extended-community-soo"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::~ExtendedCommunitySoo()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-soo";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "extended-community-soo";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "extended-community-soo";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "extended-community-soo";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "extended-community-soo";
}

RoutingPolicy::Sets::ExtendedCommunitySoo::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunitySoo::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-soo/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunitySoo::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySoo::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Tag::Tag()
    :
    active(std::make_shared<RoutingPolicy::Sets::Tag::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Tag::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Tag::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Tag::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "tag"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Tag::~Tag()
{
}

bool RoutingPolicy::Sets::Tag::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Tag::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Tag::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Tag::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::Tag::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Tag::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "tag";
}

RoutingPolicy::Sets::Tag::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Tag::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Tag::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Tag::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::Tag::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "tag";
}

RoutingPolicy::Sets::Tag::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Tag::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Tag::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Tag::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "tag";
}

RoutingPolicy::Sets::Tag::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Tag::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Tag::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Tag::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "tag";
}

RoutingPolicy::Sets::Tag::Active::~Active()
{
}

bool RoutingPolicy::Sets::Tag::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Tag::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Tag::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Prefix::Prefix()
    :
    active(std::make_shared<RoutingPolicy::Sets::Prefix::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Prefix::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Prefix::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Prefix::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "prefix"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Prefix::~Prefix()
{
}

bool RoutingPolicy::Sets::Prefix::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Prefix::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Prefix::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Prefix::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::Prefix::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Prefix::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "prefix";
}

RoutingPolicy::Sets::Prefix::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Prefix::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::Prefix::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "prefix";
}

RoutingPolicy::Sets::Prefix::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Prefix::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Prefix::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Prefix::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "prefix";
}

RoutingPolicy::Sets::Prefix::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Prefix::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Prefix::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Prefix::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "prefix";
}

RoutingPolicy::Sets::Prefix::Active::~Active()
{
}

bool RoutingPolicy::Sets::Prefix::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Prefix::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Prefix::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Community::Community()
    :
    active(std::make_shared<RoutingPolicy::Sets::Community::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Community::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Community::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Community::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "community"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Community::~Community()
{
}

bool RoutingPolicy::Sets::Community::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Community::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Community::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Community::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::Community::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Community::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "community";
}

RoutingPolicy::Sets::Community::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Community::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Community::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Community::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Community::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Community::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Community::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::Community::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Community::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::Community::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "community";
}

RoutingPolicy::Sets::Community::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Community::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Community::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Community::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Community::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "community";
}

RoutingPolicy::Sets::Community::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Community::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Community::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Community::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Community::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "community";
}

RoutingPolicy::Sets::Community::Active::~Active()
{
}

bool RoutingPolicy::Sets::Community::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Community::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Community::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/community/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Community::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Community::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Community::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::AsPath::AsPath()
    :
    active(std::make_shared<RoutingPolicy::Sets::AsPath::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::AsPath::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::AsPath::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::AsPath::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "as-path"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::AsPath::~AsPath()
{
}

bool RoutingPolicy::Sets::AsPath::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::AsPath::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::AsPath::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::AsPath::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::AsPath::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::AsPath::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "as-path";
}

RoutingPolicy::Sets::AsPath::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::AsPath::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::AsPath::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::AsPath::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "as-path";
}

RoutingPolicy::Sets::AsPath::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::AsPath::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::AsPath::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::AsPath::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::AsPath::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "as-path";
}

RoutingPolicy::Sets::AsPath::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::AsPath::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::AsPath::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::AsPath::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::AsPath::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "as-path";
}

RoutingPolicy::Sets::AsPath::Active::~Active()
{
}

bool RoutingPolicy::Sets::AsPath::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::AsPath::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::AsPath::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/as-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::AsPath::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::AsPath::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::AsPath::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Esi::Esi()
    :
    active(std::make_shared<RoutingPolicy::Sets::Esi::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Esi::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Esi::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Esi::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "esi"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Esi::~Esi()
{
}

bool RoutingPolicy::Sets::Esi::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Esi::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Esi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esi";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Esi::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Esi::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::Esi::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Esi::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "esi";
}

RoutingPolicy::Sets::Esi::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Esi::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Esi::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Esi::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Esi::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Esi::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::Esi::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "esi";
}

RoutingPolicy::Sets::Esi::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Esi::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Esi::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Esi::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Esi::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "esi";
}

RoutingPolicy::Sets::Esi::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Esi::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Esi::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Esi::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Esi::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "esi";
}

RoutingPolicy::Sets::Esi::Active::~Active()
{
}

bool RoutingPolicy::Sets::Esi::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Esi::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Esi::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/esi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Esi::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Esi::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Esi::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::ExtendedCommunityBandwidth()
    :
    inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused>())
{
    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "extended-community-bandwidth"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::~ExtendedCommunityBandwidth()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::has_data() const
{
    return (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::has_operation() const
{
    return is_set(operation)
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-bandwidth";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "extended-community-bandwidth";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-bandwidth/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-bandwidth/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "extended-community-bandwidth";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-bandwidth/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "extended-community-bandwidth";
}

RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-bandwidth/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityRt::ExtendedCommunityRt()
    :
    active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "extended-community-rt"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityRt::~ExtendedCommunityRt()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-rt";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "extended-community-rt";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityRt::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "extended-community-rt";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Unused::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "extended-community-rt";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityRt::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "extended-community-rt";
}

RoutingPolicy::Sets::ExtendedCommunityRt::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityRt::Active::has_data() const
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-rt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityRt::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRt::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Rd::Rd()
    :
    active(std::make_shared<RoutingPolicy::Sets::Rd::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Rd::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Rd::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Rd::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "rd"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Rd::~Rd()
{
}

bool RoutingPolicy::Sets::Rd::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Rd::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Rd::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Rd::Inactive>();
        }
        return inactive;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Rd::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "rd";
}

RoutingPolicy::Sets::Rd::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Rd::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Rd::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Rd::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::Rd::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "rd";
}

RoutingPolicy::Sets::Rd::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Rd::Unused::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Rd::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Rd::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Rd::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "rd";
}

RoutingPolicy::Sets::Rd::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Rd::Inactive::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Rd::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Rd::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Rd::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "rd";
}

RoutingPolicy::Sets::Rd::Active::~Active()
{
}

bool RoutingPolicy::Sets::Rd::Active::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Rd::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Rd::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Rd::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Mac::Mac()
    :
    active(std::make_shared<RoutingPolicy::Sets::Mac::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Mac::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Mac::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Mac::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "mac"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Mac::~Mac()
{
}

bool RoutingPolicy::Sets::Mac::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Mac::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Mac::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Mac::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Mac::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Mac::Unused>();
        }
        return unused;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf GroupEnum::address_family_group {0, "address-family-group"};
const Enum::YLeaf GroupEnum::session_group {1, "session-group"};
const Enum::YLeaf GroupEnum::neighbor_group {2, "neighbor-group"};
const Enum::YLeaf GroupEnum::neighbor {3, "neighbor"};
const Enum::YLeaf GroupEnum::error_group {4, "error-group"};

const Enum::YLeaf AttachPointDirectionEnum::in {0, "in"};
const Enum::YLeaf AttachPointDirectionEnum::out {1, "out"};

const Enum::YLeaf SubAddressFamilyEnum::unicast {0, "unicast"};
const Enum::YLeaf SubAddressFamilyEnum::multicast {1, "multicast"};
const Enum::YLeaf SubAddressFamilyEnum::label {2, "label"};
const Enum::YLeaf SubAddressFamilyEnum::tunnel {3, "tunnel"};
const Enum::YLeaf SubAddressFamilyEnum::vpn {4, "vpn"};
const Enum::YLeaf SubAddressFamilyEnum::mdt {5, "mdt"};
const Enum::YLeaf SubAddressFamilyEnum::vpls {6, "vpls"};
const Enum::YLeaf SubAddressFamilyEnum::rt_constraint {7, "rt-constraint"};
const Enum::YLeaf SubAddressFamilyEnum::mvpn {8, "mvpn"};
const Enum::YLeaf SubAddressFamilyEnum::flow {9, "flow"};
const Enum::YLeaf SubAddressFamilyEnum::vpn_mcast {10, "vpn-mcast"};
const Enum::YLeaf SubAddressFamilyEnum::saf_none {11, "saf-none"};
const Enum::YLeaf SubAddressFamilyEnum::saf_unknown {12, "saf-unknown"};

const Enum::YLeaf AddressFamilyEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf AddressFamilyEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf AddressFamilyEnum::l2vpn {2, "l2vpn"};
const Enum::YLeaf AddressFamilyEnum::ls {3, "ls"};
const Enum::YLeaf AddressFamilyEnum::af_none {4, "af-none"};
const Enum::YLeaf AddressFamilyEnum::af_unknown {5, "af-unknown"};

const Enum::YLeaf ObjectStatusEnum::active {0, "active"};
const Enum::YLeaf ObjectStatusEnum::inactive {1, "inactive"};
const Enum::YLeaf ObjectStatusEnum::unused {2, "unused"};


}
}

