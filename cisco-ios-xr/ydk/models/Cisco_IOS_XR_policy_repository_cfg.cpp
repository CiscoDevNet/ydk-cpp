
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_policy_repository_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_policy_repository_cfg {

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
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(rpl_route_policy.operation);
}

std::string RoutingPolicy::RoutePolicies::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy" <<"[route-policy-name='" <<route_policy_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::RoutePolicies::RoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/route-policies/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (rpl_route_policy.is_set || is_set(rpl_route_policy.operation)) leaf_name_data.push_back(rpl_route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::RoutePolicies::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::RoutePolicies::RoutePolicy::get_children()
{
    return children;
}

void RoutingPolicy::RoutePolicies::RoutePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "rpl-route-policy")
    {
        rpl_route_policy = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::RoutePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policies";

    return path_buffer.str();

}

EntityPath RoutingPolicy::RoutePolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::RoutePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-policy")
    {
        for(auto const & c : route_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::RoutePolicies::RoutePolicy>();
        c->parent = this;
        route_policy.push_back(std::move(c));
        children[segment_path] = route_policy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::RoutePolicies::get_children()
{
    for (auto const & c : route_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::RoutePolicies::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_prefix_set.operation);
}

std::string RoutingPolicy::Sets::PrefixSets::PrefixSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::PrefixSets::PrefixSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/prefix-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_prefix_set.is_set || is_set(rpl_prefix_set.operation)) leaf_name_data.push_back(rpl_prefix_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::PrefixSets::PrefixSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::PrefixSets::PrefixSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::PrefixSets::PrefixSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-prefix-set")
    {
        rpl_prefix_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::PrefixSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::PrefixSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::PrefixSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-set")
    {
        for(auto const & c : prefix_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::PrefixSets::PrefixSet>();
        c->parent = this;
        prefix_set.push_back(std::move(c));
        children[segment_path] = prefix_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::PrefixSets::get_children()
{
    for (auto const & c : prefix_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::PrefixSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_extended_community_opaque_set.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-opaque-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-opaque-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_opaque_set.is_set || is_set(rpl_extended_community_opaque_set.operation)) leaf_name_data.push_back(rpl_extended_community_opaque_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-extended-community-opaque-set")
    {
        rpl_extended_community_opaque_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-opaque-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-opaque-set")
    {
        for(auto const & c : extended_community_opaque_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet>();
        c->parent = this;
        extended_community_opaque_set.push_back(std::move(c));
        children[segment_path] = extended_community_opaque_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::get_children()
{
    for (auto const & c : extended_community_opaque_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rplospf_area_set.operation);
}

std::string RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/ospf-area-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplospf_area_set.is_set || is_set(rplospf_area_set.operation)) leaf_name_data.push_back(rplospf_area_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rplospf-area-set")
    {
        rplospf_area_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::OspfAreaSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::OspfAreaSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::OspfAreaSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospf-area-set")
    {
        for(auto const & c : ospf_area_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet>();
        c->parent = this;
        ospf_area_set.push_back(std::move(c));
        children[segment_path] = ospf_area_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::OspfAreaSets::get_children()
{
    for (auto const & c : ospf_area_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::OspfAreaSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_extended_community_cost_set.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-cost-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-cost-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_cost_set.is_set || is_set(rpl_extended_community_cost_set.operation)) leaf_name_data.push_back(rpl_extended_community_cost_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-extended-community-cost-set")
    {
        rpl_extended_community_cost_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCostSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-cost-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunityCostSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunityCostSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-cost-set")
    {
        for(auto const & c : extended_community_cost_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet>();
        c->parent = this;
        extended_community_cost_set.push_back(std::move(c));
        children[segment_path] = extended_community_cost_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunityCostSets::get_children()
{
    for (auto const & c : extended_community_cost_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCostSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_extended_community_soo_set.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-soo-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-soo-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_soo_set.is_set || is_set(rpl_extended_community_soo_set.operation)) leaf_name_data.push_back(rpl_extended_community_soo_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-extended-community-soo-set")
    {
        rpl_extended_community_soo_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySooSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-soo-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunitySooSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunitySooSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-soo-set")
    {
        for(auto const & c : extended_community_soo_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet>();
        c->parent = this;
        extended_community_soo_set.push_back(std::move(c));
        children[segment_path] = extended_community_soo_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunitySooSets::get_children()
{
    for (auto const & c : extended_community_soo_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySooSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_extended_community_seg_nh_set.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-seg-nh-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-seg-nh-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_seg_nh_set.is_set || is_set(rpl_extended_community_seg_nh_set.operation)) leaf_name_data.push_back(rpl_extended_community_seg_nh_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-extended-community-seg-nh-set")
    {
        rpl_extended_community_seg_nh_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-seg-nh-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-seg-nh-set")
    {
        for(auto const & c : extended_community_seg_nh_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet>();
        c->parent = this;
        extended_community_seg_nh_set.push_back(std::move(c));
        children[segment_path] = extended_community_seg_nh_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunitySegNhSets::get_children()
{
    for (auto const & c : extended_community_seg_nh_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunitySegNhSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rplrd_set.operation);
}

std::string RoutingPolicy::Sets::RdSets::RdSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::RdSets::RdSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/rd-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplrd_set.is_set || is_set(rplrd_set.operation)) leaf_name_data.push_back(rplrd_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::RdSets::RdSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::RdSets::RdSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::RdSets::RdSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rplrd-set")
    {
        rplrd_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::RdSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::RdSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::RdSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rd-set")
    {
        for(auto const & c : rd_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::RdSets::RdSet>();
        c->parent = this;
        rd_set.push_back(std::move(c));
        children[segment_path] = rd_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::RdSets::get_children()
{
    for (auto const & c : rd_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::RdSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(policy_global_set.operation);
}

std::string RoutingPolicy::Sets::PolicyGlobalSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-global-set-table";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::PolicyGlobalSetTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_global_set.is_set || is_set(policy_global_set.operation)) leaf_name_data.push_back(policy_global_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::PolicyGlobalSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::PolicyGlobalSetTable::get_children()
{
    return children;
}

void RoutingPolicy::Sets::PolicyGlobalSetTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-global-set")
    {
        policy_global_set = value;
    }
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_extended_community_bandwidth_set.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-bandwidth-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-bandwidth-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_bandwidth_set.is_set || is_set(rpl_extended_community_bandwidth_set.operation)) leaf_name_data.push_back(rpl_extended_community_bandwidth_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-extended-community-bandwidth-set")
    {
        rpl_extended_community_bandwidth_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-bandwidth-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-bandwidth-set")
    {
        for(auto const & c : extended_community_bandwidth_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet>();
        c->parent = this;
        extended_community_bandwidth_set.push_back(std::move(c));
        children[segment_path] = extended_community_bandwidth_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::get_children()
{
    for (auto const & c : extended_community_bandwidth_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_community_set.operation);
}

std::string RoutingPolicy::Sets::CommunitySets::CommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::CommunitySets::CommunitySet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/community-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_community_set.is_set || is_set(rpl_community_set.operation)) leaf_name_data.push_back(rpl_community_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::CommunitySets::CommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::CommunitySets::CommunitySet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::CommunitySets::CommunitySet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-community-set")
    {
        rpl_community_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::CommunitySets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::CommunitySets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::CommunitySets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "community-set")
    {
        for(auto const & c : community_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::CommunitySets::CommunitySet>();
        c->parent = this;
        community_set.push_back(std::move(c));
        children[segment_path] = community_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::CommunitySets::get_children()
{
    for (auto const & c : community_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::CommunitySets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rplas_path_set.operation);
}

std::string RoutingPolicy::Sets::AsPathSets::AsPathSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::AsPathSets::AsPathSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/as-path-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rplas_path_set.is_set || is_set(rplas_path_set.operation)) leaf_name_data.push_back(rplas_path_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::AsPathSets::AsPathSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::AsPathSets::AsPathSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::AsPathSets::AsPathSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rplas-path-set")
    {
        rplas_path_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::AsPathSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::AsPathSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::AsPathSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-path-set")
    {
        for(auto const & c : as_path_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::AsPathSets::AsPathSet>();
        c->parent = this;
        as_path_set.push_back(std::move(c));
        children[segment_path] = as_path_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::AsPathSets::get_children()
{
    for (auto const & c : as_path_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::AsPathSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_tag_set.operation);
}

std::string RoutingPolicy::Sets::TagSets::TagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::TagSets::TagSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/tag-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_tag_set.is_set || is_set(rpl_tag_set.operation)) leaf_name_data.push_back(rpl_tag_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::TagSets::TagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::TagSets::TagSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::TagSets::TagSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-tag-set")
    {
        rpl_tag_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::TagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::TagSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::TagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tag-set")
    {
        for(auto const & c : tag_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::TagSets::TagSet>();
        c->parent = this;
        tag_set.push_back(std::move(c));
        children[segment_path] = tag_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::TagSets::get_children()
{
    for (auto const & c : tag_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::TagSets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(set_name.operation)
	|| is_set(rpl_extended_community_rt_set.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-rt-set" <<"[set-name='" <<set_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/extended-community-rt-sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());
    if (rpl_extended_community_rt_set.is_set || is_set(rpl_extended_community_rt_set.operation)) leaf_name_data.push_back(rpl_extended_community_rt_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::get_children()
{
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
    if(value_path == "rpl-extended-community-rt-set")
    {
        rpl_extended_community_rt_set = value;
    }
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
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityRtSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-rt-sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::ExtendedCommunityRtSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::ExtendedCommunityRtSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-rt-set")
    {
        for(auto const & c : extended_community_rt_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet>();
        c->parent = this;
        extended_community_rt_set.push_back(std::move(c));
        children[segment_path] = extended_community_rt_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::ExtendedCommunityRtSets::get_children()
{
    for (auto const & c : extended_community_rt_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityRtSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Sets()
    :
    as_path_sets(std::make_unique<RoutingPolicy::Sets::AsPathSets>())
	,community_sets(std::make_unique<RoutingPolicy::Sets::CommunitySets>())
	,extended_community_bandwidth_sets(std::make_unique<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets>())
	,extended_community_cost_sets(std::make_unique<RoutingPolicy::Sets::ExtendedCommunityCostSets>())
	,extended_community_opaque_sets(std::make_unique<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets>())
	,extended_community_rt_sets(std::make_unique<RoutingPolicy::Sets::ExtendedCommunityRtSets>())
	,extended_community_seg_nh_sets(std::make_unique<RoutingPolicy::Sets::ExtendedCommunitySegNhSets>())
	,extended_community_soo_sets(std::make_unique<RoutingPolicy::Sets::ExtendedCommunitySooSets>())
	,ospf_area_sets(std::make_unique<RoutingPolicy::Sets::OspfAreaSets>())
	,policy_global_set_table(std::make_unique<RoutingPolicy::Sets::PolicyGlobalSetTable>())
	,prefix_sets(std::make_unique<RoutingPolicy::Sets::PrefixSets>())
	,rd_sets(std::make_unique<RoutingPolicy::Sets::RdSets>())
	,tag_sets(std::make_unique<RoutingPolicy::Sets::TagSets>())
{
    as_path_sets->parent = this;
    children["as-path-sets"] = as_path_sets.get();

    community_sets->parent = this;
    children["community-sets"] = community_sets.get();

    extended_community_bandwidth_sets->parent = this;
    children["extended-community-bandwidth-sets"] = extended_community_bandwidth_sets.get();

    extended_community_cost_sets->parent = this;
    children["extended-community-cost-sets"] = extended_community_cost_sets.get();

    extended_community_opaque_sets->parent = this;
    children["extended-community-opaque-sets"] = extended_community_opaque_sets.get();

    extended_community_rt_sets->parent = this;
    children["extended-community-rt-sets"] = extended_community_rt_sets.get();

    extended_community_seg_nh_sets->parent = this;
    children["extended-community-seg-nh-sets"] = extended_community_seg_nh_sets.get();

    extended_community_soo_sets->parent = this;
    children["extended-community-soo-sets"] = extended_community_soo_sets.get();

    ospf_area_sets->parent = this;
    children["ospf-area-sets"] = ospf_area_sets.get();

    policy_global_set_table->parent = this;
    children["policy-global-set-table"] = policy_global_set_table.get();

    prefix_sets->parent = this;
    children["prefix-sets"] = prefix_sets.get();

    rd_sets->parent = this;
    children["rd-sets"] = rd_sets.get();

    tag_sets->parent = this;
    children["tag-sets"] = tag_sets.get();

    yang_name = "sets"; yang_parent_name = "routing-policy";
}

RoutingPolicy::Sets::~Sets()
{
}

bool RoutingPolicy::Sets::has_data() const
{
    return (as_path_sets !=  nullptr && as_path_sets->has_data())
	|| (community_sets !=  nullptr && community_sets->has_data())
	|| (extended_community_bandwidth_sets !=  nullptr && extended_community_bandwidth_sets->has_data())
	|| (extended_community_cost_sets !=  nullptr && extended_community_cost_sets->has_data())
	|| (extended_community_opaque_sets !=  nullptr && extended_community_opaque_sets->has_data())
	|| (extended_community_rt_sets !=  nullptr && extended_community_rt_sets->has_data())
	|| (extended_community_seg_nh_sets !=  nullptr && extended_community_seg_nh_sets->has_data())
	|| (extended_community_soo_sets !=  nullptr && extended_community_soo_sets->has_data())
	|| (ospf_area_sets !=  nullptr && ospf_area_sets->has_data())
	|| (policy_global_set_table !=  nullptr && policy_global_set_table->has_data())
	|| (prefix_sets !=  nullptr && prefix_sets->has_data())
	|| (rd_sets !=  nullptr && rd_sets->has_data())
	|| (tag_sets !=  nullptr && tag_sets->has_data());
}

bool RoutingPolicy::Sets::has_operation() const
{
    return is_set(operation)
	|| (as_path_sets !=  nullptr && is_set(as_path_sets->operation))
	|| (community_sets !=  nullptr && is_set(community_sets->operation))
	|| (extended_community_bandwidth_sets !=  nullptr && is_set(extended_community_bandwidth_sets->operation))
	|| (extended_community_cost_sets !=  nullptr && is_set(extended_community_cost_sets->operation))
	|| (extended_community_opaque_sets !=  nullptr && is_set(extended_community_opaque_sets->operation))
	|| (extended_community_rt_sets !=  nullptr && is_set(extended_community_rt_sets->operation))
	|| (extended_community_seg_nh_sets !=  nullptr && is_set(extended_community_seg_nh_sets->operation))
	|| (extended_community_soo_sets !=  nullptr && is_set(extended_community_soo_sets->operation))
	|| (ospf_area_sets !=  nullptr && is_set(ospf_area_sets->operation))
	|| (policy_global_set_table !=  nullptr && is_set(policy_global_set_table->operation))
	|| (prefix_sets !=  nullptr && is_set(prefix_sets->operation))
	|| (rd_sets !=  nullptr && is_set(rd_sets->operation))
	|| (tag_sets !=  nullptr && is_set(tag_sets->operation));
}

std::string RoutingPolicy::Sets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Sets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Sets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-path-sets")
    {
        if(as_path_sets != nullptr)
        {
            children["as-path-sets"] = as_path_sets.get();
        }
        else
        {
            as_path_sets = std::make_unique<RoutingPolicy::Sets::AsPathSets>();
            as_path_sets->parent = this;
            children["as-path-sets"] = as_path_sets.get();
        }
        return children.at("as-path-sets");
    }

    if(child_yang_name == "community-sets")
    {
        if(community_sets != nullptr)
        {
            children["community-sets"] = community_sets.get();
        }
        else
        {
            community_sets = std::make_unique<RoutingPolicy::Sets::CommunitySets>();
            community_sets->parent = this;
            children["community-sets"] = community_sets.get();
        }
        return children.at("community-sets");
    }

    if(child_yang_name == "extended-community-bandwidth-sets")
    {
        if(extended_community_bandwidth_sets != nullptr)
        {
            children["extended-community-bandwidth-sets"] = extended_community_bandwidth_sets.get();
        }
        else
        {
            extended_community_bandwidth_sets = std::make_unique<RoutingPolicy::Sets::ExtendedCommunityBandwidthSets>();
            extended_community_bandwidth_sets->parent = this;
            children["extended-community-bandwidth-sets"] = extended_community_bandwidth_sets.get();
        }
        return children.at("extended-community-bandwidth-sets");
    }

    if(child_yang_name == "extended-community-cost-sets")
    {
        if(extended_community_cost_sets != nullptr)
        {
            children["extended-community-cost-sets"] = extended_community_cost_sets.get();
        }
        else
        {
            extended_community_cost_sets = std::make_unique<RoutingPolicy::Sets::ExtendedCommunityCostSets>();
            extended_community_cost_sets->parent = this;
            children["extended-community-cost-sets"] = extended_community_cost_sets.get();
        }
        return children.at("extended-community-cost-sets");
    }

    if(child_yang_name == "extended-community-opaque-sets")
    {
        if(extended_community_opaque_sets != nullptr)
        {
            children["extended-community-opaque-sets"] = extended_community_opaque_sets.get();
        }
        else
        {
            extended_community_opaque_sets = std::make_unique<RoutingPolicy::Sets::ExtendedCommunityOpaqueSets>();
            extended_community_opaque_sets->parent = this;
            children["extended-community-opaque-sets"] = extended_community_opaque_sets.get();
        }
        return children.at("extended-community-opaque-sets");
    }

    if(child_yang_name == "extended-community-rt-sets")
    {
        if(extended_community_rt_sets != nullptr)
        {
            children["extended-community-rt-sets"] = extended_community_rt_sets.get();
        }
        else
        {
            extended_community_rt_sets = std::make_unique<RoutingPolicy::Sets::ExtendedCommunityRtSets>();
            extended_community_rt_sets->parent = this;
            children["extended-community-rt-sets"] = extended_community_rt_sets.get();
        }
        return children.at("extended-community-rt-sets");
    }

    if(child_yang_name == "extended-community-seg-nh-sets")
    {
        if(extended_community_seg_nh_sets != nullptr)
        {
            children["extended-community-seg-nh-sets"] = extended_community_seg_nh_sets.get();
        }
        else
        {
            extended_community_seg_nh_sets = std::make_unique<RoutingPolicy::Sets::ExtendedCommunitySegNhSets>();
            extended_community_seg_nh_sets->parent = this;
            children["extended-community-seg-nh-sets"] = extended_community_seg_nh_sets.get();
        }
        return children.at("extended-community-seg-nh-sets");
    }

    if(child_yang_name == "extended-community-soo-sets")
    {
        if(extended_community_soo_sets != nullptr)
        {
            children["extended-community-soo-sets"] = extended_community_soo_sets.get();
        }
        else
        {
            extended_community_soo_sets = std::make_unique<RoutingPolicy::Sets::ExtendedCommunitySooSets>();
            extended_community_soo_sets->parent = this;
            children["extended-community-soo-sets"] = extended_community_soo_sets.get();
        }
        return children.at("extended-community-soo-sets");
    }

    if(child_yang_name == "ospf-area-sets")
    {
        if(ospf_area_sets != nullptr)
        {
            children["ospf-area-sets"] = ospf_area_sets.get();
        }
        else
        {
            ospf_area_sets = std::make_unique<RoutingPolicy::Sets::OspfAreaSets>();
            ospf_area_sets->parent = this;
            children["ospf-area-sets"] = ospf_area_sets.get();
        }
        return children.at("ospf-area-sets");
    }

    if(child_yang_name == "policy-global-set-table")
    {
        if(policy_global_set_table != nullptr)
        {
            children["policy-global-set-table"] = policy_global_set_table.get();
        }
        else
        {
            policy_global_set_table = std::make_unique<RoutingPolicy::Sets::PolicyGlobalSetTable>();
            policy_global_set_table->parent = this;
            children["policy-global-set-table"] = policy_global_set_table.get();
        }
        return children.at("policy-global-set-table");
    }

    if(child_yang_name == "prefix-sets")
    {
        if(prefix_sets != nullptr)
        {
            children["prefix-sets"] = prefix_sets.get();
        }
        else
        {
            prefix_sets = std::make_unique<RoutingPolicy::Sets::PrefixSets>();
            prefix_sets->parent = this;
            children["prefix-sets"] = prefix_sets.get();
        }
        return children.at("prefix-sets");
    }

    if(child_yang_name == "rd-sets")
    {
        if(rd_sets != nullptr)
        {
            children["rd-sets"] = rd_sets.get();
        }
        else
        {
            rd_sets = std::make_unique<RoutingPolicy::Sets::RdSets>();
            rd_sets->parent = this;
            children["rd-sets"] = rd_sets.get();
        }
        return children.at("rd-sets");
    }

    if(child_yang_name == "tag-sets")
    {
        if(tag_sets != nullptr)
        {
            children["tag-sets"] = tag_sets.get();
        }
        else
        {
            tag_sets = std::make_unique<RoutingPolicy::Sets::TagSets>();
            tag_sets->parent = this;
            children["tag-sets"] = tag_sets.get();
        }
        return children.at("tag-sets");
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Sets::get_children()
{
    if(children.find("as-path-sets") == children.end())
    {
        if(as_path_sets != nullptr)
        {
            children["as-path-sets"] = as_path_sets.get();
        }
    }

    if(children.find("community-sets") == children.end())
    {
        if(community_sets != nullptr)
        {
            children["community-sets"] = community_sets.get();
        }
    }

    if(children.find("extended-community-bandwidth-sets") == children.end())
    {
        if(extended_community_bandwidth_sets != nullptr)
        {
            children["extended-community-bandwidth-sets"] = extended_community_bandwidth_sets.get();
        }
    }

    if(children.find("extended-community-cost-sets") == children.end())
    {
        if(extended_community_cost_sets != nullptr)
        {
            children["extended-community-cost-sets"] = extended_community_cost_sets.get();
        }
    }

    if(children.find("extended-community-opaque-sets") == children.end())
    {
        if(extended_community_opaque_sets != nullptr)
        {
            children["extended-community-opaque-sets"] = extended_community_opaque_sets.get();
        }
    }

    if(children.find("extended-community-rt-sets") == children.end())
    {
        if(extended_community_rt_sets != nullptr)
        {
            children["extended-community-rt-sets"] = extended_community_rt_sets.get();
        }
    }

    if(children.find("extended-community-seg-nh-sets") == children.end())
    {
        if(extended_community_seg_nh_sets != nullptr)
        {
            children["extended-community-seg-nh-sets"] = extended_community_seg_nh_sets.get();
        }
    }

    if(children.find("extended-community-soo-sets") == children.end())
    {
        if(extended_community_soo_sets != nullptr)
        {
            children["extended-community-soo-sets"] = extended_community_soo_sets.get();
        }
    }

    if(children.find("ospf-area-sets") == children.end())
    {
        if(ospf_area_sets != nullptr)
        {
            children["ospf-area-sets"] = ospf_area_sets.get();
        }
    }

    if(children.find("policy-global-set-table") == children.end())
    {
        if(policy_global_set_table != nullptr)
        {
            children["policy-global-set-table"] = policy_global_set_table.get();
        }
    }

    if(children.find("prefix-sets") == children.end())
    {
        if(prefix_sets != nullptr)
        {
            children["prefix-sets"] = prefix_sets.get();
        }
    }

    if(children.find("rd-sets") == children.end())
    {
        if(rd_sets != nullptr)
        {
            children["rd-sets"] = rd_sets.get();
        }
    }

    if(children.find("tag-sets") == children.end())
    {
        if(tag_sets != nullptr)
        {
            children["tag-sets"] = tag_sets.get();
        }
    }

    return children;
}

void RoutingPolicy::Sets::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(maximum_lines_of_policy.operation)
	|| is_set(maximum_number_of_policies.operation);
}

std::string RoutingPolicy::Limits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limits";

    return path_buffer.str();

}

EntityPath RoutingPolicy::Limits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_lines_of_policy.is_set || is_set(maximum_lines_of_policy.operation)) leaf_name_data.push_back(maximum_lines_of_policy.get_name_leafdata());
    if (maximum_number_of_policies.is_set || is_set(maximum_number_of_policies.operation)) leaf_name_data.push_back(maximum_number_of_policies.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::Limits::get_children()
{
    return children;
}

void RoutingPolicy::Limits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-lines-of-policy")
    {
        maximum_lines_of_policy = value;
    }
    if(value_path == "maximum-number-of-policies")
    {
        maximum_number_of_policies = value;
    }
}

RoutingPolicy::RoutingPolicy()
    :
    	editor{YType::str, "editor"}
    	,
    limits(std::make_unique<RoutingPolicy::Limits>())
	,route_policies(std::make_unique<RoutingPolicy::RoutePolicies>())
	,sets(std::make_unique<RoutingPolicy::Sets>())
{
    limits->parent = this;
    children["limits"] = limits.get();

    route_policies->parent = this;
    children["route-policies"] = route_policies.get();

    sets->parent = this;
    children["sets"] = sets.get();

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
    return is_set(operation)
	|| is_set(editor.operation)
	|| (limits !=  nullptr && is_set(limits->operation))
	|| (route_policies !=  nullptr && is_set(route_policies->operation))
	|| (sets !=  nullptr && is_set(sets->operation));
}

std::string RoutingPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-cfg:routing-policy";

    return path_buffer.str();

}

EntityPath RoutingPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (editor.is_set || is_set(editor.operation)) leaf_name_data.push_back(editor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "limits")
    {
        if(limits != nullptr)
        {
            children["limits"] = limits.get();
        }
        else
        {
            limits = std::make_unique<RoutingPolicy::Limits>();
            limits->parent = this;
            children["limits"] = limits.get();
        }
        return children.at("limits");
    }

    if(child_yang_name == "route-policies")
    {
        if(route_policies != nullptr)
        {
            children["route-policies"] = route_policies.get();
        }
        else
        {
            route_policies = std::make_unique<RoutingPolicy::RoutePolicies>();
            route_policies->parent = this;
            children["route-policies"] = route_policies.get();
        }
        return children.at("route-policies");
    }

    if(child_yang_name == "sets")
    {
        if(sets != nullptr)
        {
            children["sets"] = sets.get();
        }
        else
        {
            sets = std::make_unique<RoutingPolicy::Sets>();
            sets->parent = this;
            children["sets"] = sets.get();
        }
        return children.at("sets");
    }

    return nullptr;
}

std::map<std::string, Entity*> & RoutingPolicy::get_children()
{
    if(children.find("limits") == children.end())
    {
        if(limits != nullptr)
        {
            children["limits"] = limits.get();
        }
    }

    if(children.find("route-policies") == children.end())
    {
        if(route_policies != nullptr)
        {
            children["route-policies"] = route_policies.get();
        }
    }

    if(children.find("sets") == children.end())
    {
        if(sets != nullptr)
        {
            children["sets"] = sets.get();
        }
    }

    return children;
}

void RoutingPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "editor")
    {
        editor = value;
    }
}

std::unique_ptr<Entity> RoutingPolicy::clone_ptr()
{
    return std::make_unique<RoutingPolicy>();
}


}
}

