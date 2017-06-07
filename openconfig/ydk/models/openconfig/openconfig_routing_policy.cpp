
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_routing_policy.hpp"

namespace ydk {
namespace openconfig_routing_policy {

RoutingPolicy::RoutingPolicy()
    :
    defined_sets(std::make_shared<RoutingPolicy::DefinedSets>())
	,policy_definitions(std::make_shared<RoutingPolicy::PolicyDefinitions>())
{
    defined_sets->parent = this;

    policy_definitions->parent = this;

    yang_name = "routing-policy"; yang_parent_name = "openconfig-routing-policy";
}

RoutingPolicy::~RoutingPolicy()
{
}

bool RoutingPolicy::has_data() const
{
    return (defined_sets !=  nullptr && defined_sets->has_data())
	|| (policy_definitions !=  nullptr && policy_definitions->has_data());
}

bool RoutingPolicy::has_operation() const
{
    return is_set(operation)
	|| (defined_sets !=  nullptr && defined_sets->has_operation())
	|| (policy_definitions !=  nullptr && policy_definitions->has_operation());
}

std::string RoutingPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy";

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
    if(child_yang_name == "defined-sets")
    {
        if(defined_sets == nullptr)
        {
            defined_sets = std::make_shared<RoutingPolicy::DefinedSets>();
        }
        return defined_sets;
    }

    if(child_yang_name == "policy-definitions")
    {
        if(policy_definitions == nullptr)
        {
            policy_definitions = std::make_shared<RoutingPolicy::PolicyDefinitions>();
        }
        return policy_definitions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(defined_sets != nullptr)
    {
        children["defined-sets"] = defined_sets;
    }

    if(policy_definitions != nullptr)
    {
        children["policy-definitions"] = policy_definitions;
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
    return ydk_openconfig_models_path;
}

std::string RoutingPolicy::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function RoutingPolicy::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

RoutingPolicy::DefinedSets::DefinedSets()
    :
    bgp_defined_sets(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets>())
	,neighbor_sets(std::make_shared<RoutingPolicy::DefinedSets::NeighborSets>())
	,prefix_sets(std::make_shared<RoutingPolicy::DefinedSets::PrefixSets>())
	,tag_sets(std::make_shared<RoutingPolicy::DefinedSets::TagSets>())
{
    bgp_defined_sets->parent = this;

    neighbor_sets->parent = this;

    prefix_sets->parent = this;

    tag_sets->parent = this;

    yang_name = "defined-sets"; yang_parent_name = "routing-policy";
}

RoutingPolicy::DefinedSets::~DefinedSets()
{
}

bool RoutingPolicy::DefinedSets::has_data() const
{
    return (bgp_defined_sets !=  nullptr && bgp_defined_sets->has_data())
	|| (neighbor_sets !=  nullptr && neighbor_sets->has_data())
	|| (prefix_sets !=  nullptr && prefix_sets->has_data())
	|| (tag_sets !=  nullptr && tag_sets->has_data());
}

bool RoutingPolicy::DefinedSets::has_operation() const
{
    return is_set(operation)
	|| (bgp_defined_sets !=  nullptr && bgp_defined_sets->has_operation())
	|| (neighbor_sets !=  nullptr && neighbor_sets->has_operation())
	|| (prefix_sets !=  nullptr && prefix_sets->has_operation())
	|| (tag_sets !=  nullptr && tag_sets->has_operation());
}

std::string RoutingPolicy::DefinedSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defined-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-defined-sets")
    {
        if(bgp_defined_sets == nullptr)
        {
            bgp_defined_sets = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets>();
        }
        return bgp_defined_sets;
    }

    if(child_yang_name == "neighbor-sets")
    {
        if(neighbor_sets == nullptr)
        {
            neighbor_sets = std::make_shared<RoutingPolicy::DefinedSets::NeighborSets>();
        }
        return neighbor_sets;
    }

    if(child_yang_name == "prefix-sets")
    {
        if(prefix_sets == nullptr)
        {
            prefix_sets = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets>();
        }
        return prefix_sets;
    }

    if(child_yang_name == "tag-sets")
    {
        if(tag_sets == nullptr)
        {
            tag_sets = std::make_shared<RoutingPolicy::DefinedSets::TagSets>();
        }
        return tag_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_defined_sets != nullptr)
    {
        children["bgp-defined-sets"] = bgp_defined_sets;
    }

    if(neighbor_sets != nullptr)
    {
        children["neighbor-sets"] = neighbor_sets;
    }

    if(prefix_sets != nullptr)
    {
        children["prefix-sets"] = prefix_sets;
    }

    if(tag_sets != nullptr)
    {
        children["tag-sets"] = tag_sets;
    }

    return children;
}

void RoutingPolicy::DefinedSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSets()
{
    yang_name = "prefix-sets"; yang_parent_name = "defined-sets";
}

RoutingPolicy::DefinedSets::PrefixSets::~PrefixSets()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::has_data() const
{
    for (std::size_t index=0; index<prefix_set.size(); index++)
    {
        if(prefix_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::DefinedSets::PrefixSets::has_operation() const
{
    for (std::size_t index=0; index<prefix_set.size(); index++)
    {
        if(prefix_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::PrefixSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet>();
        c->parent = this;
        prefix_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::PrefixSet()
    :
    prefix_set_name{YType::str, "prefix-set-name"}
{
    yang_name = "prefix-set"; yang_parent_name = "prefix-sets";
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::~PrefixSet()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return prefix_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_set_name.operation);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-set" <<"[prefix-set-name='" <<prefix_set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/prefix-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_set_name.is_set || is_set(prefix_set_name.operation)) leaf_name_data.push_back(prefix_set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-set-name")
    {
        prefix_set_name = value;
    }
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::Prefix()
    :
    ip_prefix{YType::str, "ip-prefix"},
    masklength_range{YType::str, "masklength-range"}
{
    yang_name = "prefix"; yang_parent_name = "prefix-set";
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::~Prefix()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::has_data() const
{
    return ip_prefix.is_set
	|| masklength_range.is_set;
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_prefix.operation)
	|| is_set(masklength_range.operation);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[ip-prefix='" <<ip_prefix <<"']" <<"[masklength-range='" <<masklength_range <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (masklength_range.is_set || is_set(masklength_range.operation)) leaf_name_data.push_back(masklength_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
    if(value_path == "masklength-range")
    {
        masklength_range = value;
    }
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSets()
{
    yang_name = "neighbor-sets"; yang_parent_name = "defined-sets";
}

RoutingPolicy::DefinedSets::NeighborSets::~NeighborSets()
{
}

bool RoutingPolicy::DefinedSets::NeighborSets::has_data() const
{
    for (std::size_t index=0; index<neighbor_set.size(); index++)
    {
        if(neighbor_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::DefinedSets::NeighborSets::has_operation() const
{
    for (std::size_t index=0; index<neighbor_set.size(); index++)
    {
        if(neighbor_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::DefinedSets::NeighborSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::NeighborSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::NeighborSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-set")
    {
        for(auto const & c : neighbor_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::DefinedSets::NeighborSets::NeighborSet>();
        c->parent = this;
        neighbor_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::NeighborSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::NeighborSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::NeighborSet()
    :
    neighbor_set_name{YType::str, "neighbor-set-name"}
{
    yang_name = "neighbor-set"; yang_parent_name = "neighbor-sets";
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::~NeighborSet()
{
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return neighbor_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_set_name.operation);
}

std::string RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-set" <<"[neighbor-set-name='" <<neighbor_set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/neighbor-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_set_name.is_set || is_set(neighbor_set_name.operation)) leaf_name_data.push_back(neighbor_set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-set-name")
    {
        neighbor_set_name = value;
    }
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::Neighbor()
    :
    address{YType::str, "address"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbor-set";
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::~Neighbor()
{
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::has_data() const
{
    return address.is_set;
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

RoutingPolicy::DefinedSets::TagSets::TagSets()
{
    yang_name = "tag-sets"; yang_parent_name = "defined-sets";
}

RoutingPolicy::DefinedSets::TagSets::~TagSets()
{
}

bool RoutingPolicy::DefinedSets::TagSets::has_data() const
{
    for (std::size_t index=0; index<tag_set.size(); index++)
    {
        if(tag_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::DefinedSets::TagSets::has_operation() const
{
    for (std::size_t index=0; index<tag_set.size(); index++)
    {
        if(tag_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::DefinedSets::TagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::TagSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::TagSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::DefinedSets::TagSets::TagSet>();
        c->parent = this;
        tag_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::TagSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tag_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::TagSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::DefinedSets::TagSets::TagSet::TagSet()
    :
    tag_set_name{YType::str, "tag-set-name"}
{
    yang_name = "tag-set"; yang_parent_name = "tag-sets";
}

RoutingPolicy::DefinedSets::TagSets::TagSet::~TagSet()
{
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::has_data() const
{
    for (std::size_t index=0; index<tag.size(); index++)
    {
        if(tag[index]->has_data())
            return true;
    }
    return tag_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::has_operation() const
{
    for (std::size_t index=0; index<tag.size(); index++)
    {
        if(tag[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(tag_set_name.operation);
}

std::string RoutingPolicy::DefinedSets::TagSets::TagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-set" <<"[tag-set-name='" <<tag_set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::TagSets::TagSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/tag-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_set_name.is_set || is_set(tag_set_name.operation)) leaf_name_data.push_back(tag_set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::TagSets::TagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        for(auto const & c : tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::DefinedSets::TagSets::TagSet::Tag>();
        c->parent = this;
        tag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::TagSets::TagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::TagSets::TagSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag-set-name")
    {
        tag_set_name = value;
    }
}

RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::Tag()
    :
    value_{YType::str, "value"}
{
    yang_name = "tag"; yang_parent_name = "tag-set";
}

RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::~Tag()
{
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::has_data() const
{
    return value_.is_set;
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag" <<"[value='" <<value_ <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingPolicy::DefinedSets::BgpDefinedSets::BgpDefinedSets()
    :
    as_path_sets(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets>())
	,community_sets(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets>())
	,ext_community_sets(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets>())
{
    as_path_sets->parent = this;

    community_sets->parent = this;

    ext_community_sets->parent = this;

    yang_name = "bgp-defined-sets"; yang_parent_name = "defined-sets";
}

RoutingPolicy::DefinedSets::BgpDefinedSets::~BgpDefinedSets()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::has_data() const
{
    return (as_path_sets !=  nullptr && as_path_sets->has_data())
	|| (community_sets !=  nullptr && community_sets->has_data())
	|| (ext_community_sets !=  nullptr && ext_community_sets->has_data());
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::has_operation() const
{
    return is_set(operation)
	|| (as_path_sets !=  nullptr && as_path_sets->has_operation())
	|| (community_sets !=  nullptr && community_sets->has_operation())
	|| (ext_community_sets !=  nullptr && ext_community_sets->has_operation());
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp-policy:bgp-defined-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::BgpDefinedSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-path-sets")
    {
        if(as_path_sets == nullptr)
        {
            as_path_sets = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets>();
        }
        return as_path_sets;
    }

    if(child_yang_name == "community-sets")
    {
        if(community_sets == nullptr)
        {
            community_sets = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets>();
        }
        return community_sets;
    }

    if(child_yang_name == "ext-community-sets")
    {
        if(ext_community_sets == nullptr)
        {
            ext_community_sets = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets>();
        }
        return ext_community_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_path_sets != nullptr)
    {
        children["as-path-sets"] = as_path_sets;
    }

    if(community_sets != nullptr)
    {
        children["community-sets"] = community_sets;
    }

    if(ext_community_sets != nullptr)
    {
        children["ext-community-sets"] = ext_community_sets;
    }

    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySets()
{
    yang_name = "community-sets"; yang_parent_name = "bgp-defined-sets";
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::~CommunitySets()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::has_data() const
{
    for (std::size_t index=0; index<community_set.size(); index++)
    {
        if(community_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::has_operation() const
{
    for (std::size_t index=0; index<community_set.size(); index++)
    {
        if(community_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet>();
        c->parent = this;
        community_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::CommunitySet()
    :
    community_set_name{YType::str, "community-set-name"},
    community_member{YType::str, "community-member"}
{
    yang_name = "community-set"; yang_parent_name = "community-sets";
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::~CommunitySet()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::has_data() const
{
    for (auto const & leaf : community_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return community_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::has_operation() const
{
    for (auto const & leaf : community_member.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(community_set_name.operation)
	|| is_set(community_member.operation);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-set" <<"[community-set-name='" <<community_set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/community-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set_name.is_set || is_set(community_set_name.operation)) leaf_name_data.push_back(community_set_name.get_name_leafdata());

    auto community_member_name_datas = community_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_member_name_datas.begin(), community_member_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-set-name")
    {
        community_set_name = value;
    }
    if(value_path == "community-member")
    {
        community_member.append(value);
    }
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySets()
{
    yang_name = "ext-community-sets"; yang_parent_name = "bgp-defined-sets";
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::~ExtCommunitySets()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::has_data() const
{
    for (std::size_t index=0; index<ext_community_set.size(); index++)
    {
        if(ext_community_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::has_operation() const
{
    for (std::size_t index=0; index<ext_community_set.size(); index++)
    {
        if(ext_community_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community-set")
    {
        for(auto const & c : ext_community_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet>();
        c->parent = this;
        ext_community_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ext_community_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ExtCommunitySet()
    :
    ext_community_set_name{YType::str, "ext-community-set-name"},
    ext_community_member{YType::str, "ext-community-member"}
{
    yang_name = "ext-community-set"; yang_parent_name = "ext-community-sets";
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::~ExtCommunitySet()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::has_data() const
{
    for (auto const & leaf : ext_community_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return ext_community_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::has_operation() const
{
    for (auto const & leaf : ext_community_member.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_community_set_name.operation)
	|| is_set(ext_community_member.operation);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community-set" <<"[ext-community-set-name='" <<ext_community_set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/ext-community-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set_name.is_set || is_set(ext_community_set_name.operation)) leaf_name_data.push_back(ext_community_set_name.get_name_leafdata());

    auto ext_community_member_name_datas = ext_community_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_member_name_datas.begin(), ext_community_member_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-community-set-name")
    {
        ext_community_set_name = value;
    }
    if(value_path == "ext-community-member")
    {
        ext_community_member.append(value);
    }
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSets()
{
    yang_name = "as-path-sets"; yang_parent_name = "bgp-defined-sets";
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::~AsPathSets()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::has_data() const
{
    for (std::size_t index=0; index<as_path_set.size(); index++)
    {
        if(as_path_set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::has_operation() const
{
    for (std::size_t index=0; index<as_path_set.size(); index++)
    {
        if(as_path_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet>();
        c->parent = this;
        as_path_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_path_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::AsPathSet()
    :
    as_path_set_name{YType::str, "as-path-set-name"},
    as_path_set_member{YType::str, "as-path-set-member"}
{
    yang_name = "as-path-set"; yang_parent_name = "as-path-sets";
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::~AsPathSet()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::has_data() const
{
    for (auto const & leaf : as_path_set_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as_path_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::has_operation() const
{
    for (auto const & leaf : as_path_set_member.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(as_path_set_name.operation)
	|| is_set(as_path_set_member.operation);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-set" <<"[as-path-set-name='" <<as_path_set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/as-path-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_set_name.is_set || is_set(as_path_set_name.operation)) leaf_name_data.push_back(as_path_set_name.get_name_leafdata());

    auto as_path_set_member_name_datas = as_path_set_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), as_path_set_member_name_datas.begin(), as_path_set_member_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-path-set-name")
    {
        as_path_set_name = value;
    }
    if(value_path == "as-path-set-member")
    {
        as_path_set_member.append(value);
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinitions()
{
    yang_name = "policy-definitions"; yang_parent_name = "routing-policy";
}

RoutingPolicy::PolicyDefinitions::~PolicyDefinitions()
{
}

bool RoutingPolicy::PolicyDefinitions::has_data() const
{
    for (std::size_t index=0; index<policy_definition.size(); index++)
    {
        if(policy_definition[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::PolicyDefinitions::has_operation() const
{
    for (std::size_t index=0; index<policy_definition.size(); index++)
    {
        if(policy_definition[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::PolicyDefinitions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-definitions";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-definition")
    {
        for(auto const & c : policy_definition)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition>();
        c->parent = this;
        policy_definition.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_definition)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::PolicyDefinition()
    :
    name{YType::str, "name"}
    	,
    statements(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements>())
{
    statements->parent = this;

    yang_name = "policy-definition"; yang_parent_name = "policy-definitions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::~PolicyDefinition()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::has_data() const
{
    return name.is_set
	|| (statements !=  nullptr && statements->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (statements !=  nullptr && statements->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-definition" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-routing-policy:routing-policy/policy-definitions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statements")
    {
        if(statements == nullptr)
        {
            statements = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements>();
        }
        return statements;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statements != nullptr)
    {
        children["statements"] = statements;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statements()
{
    yang_name = "statements"; yang_parent_name = "policy-definition";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::~Statements()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::has_data() const
{
    for (std::size_t index=0; index<statement.size(); index++)
    {
        if(statement[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::has_operation() const
{
    for (std::size_t index=0; index<statement.size(); index++)
    {
        if(statement[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statements";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statements' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statement")
    {
        for(auto const & c : statement)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement>();
        c->parent = this;
        statement.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statement)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Statement()
    :
    name{YType::str, "name"}
    	,
    actions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions>())
	,conditions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions>())
{
    actions->parent = this;

    conditions->parent = this;

    yang_name = "statement"; yang_parent_name = "statements";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::~Statement()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::has_data() const
{
    return name.is_set
	|| (actions !=  nullptr && actions->has_data())
	|| (conditions !=  nullptr && conditions->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (actions !=  nullptr && actions->has_operation())
	|| (conditions !=  nullptr && conditions->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statement" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statement' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions>();
        }
        return actions;
    }

    if(child_yang_name == "conditions")
    {
        if(conditions == nullptr)
        {
            conditions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions>();
        }
        return conditions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actions != nullptr)
    {
        children["actions"] = actions;
    }

    if(conditions != nullptr)
    {
        children["conditions"] = conditions;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Conditions()
    :
    call_policy{YType::str, "call-policy"},
    install_protocol_eq{YType::identityref, "install-protocol-eq"}
    	,
    bgp_conditions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions>())
	,igp_conditions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions>())
	,match_neighbor_set(nullptr) // presence node
	,match_prefix_set(nullptr) // presence node
	,match_tag_set(nullptr) // presence node
{
    bgp_conditions->parent = this;

    igp_conditions->parent = this;

    yang_name = "conditions"; yang_parent_name = "statement";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::~Conditions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::has_data() const
{
    return call_policy.is_set
	|| install_protocol_eq.is_set
	|| (bgp_conditions !=  nullptr && bgp_conditions->has_data())
	|| (igp_conditions !=  nullptr && igp_conditions->has_data())
	|| (match_neighbor_set !=  nullptr && match_neighbor_set->has_data())
	|| (match_prefix_set !=  nullptr && match_prefix_set->has_data())
	|| (match_tag_set !=  nullptr && match_tag_set->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::has_operation() const
{
    return is_set(operation)
	|| is_set(call_policy.operation)
	|| is_set(install_protocol_eq.operation)
	|| (bgp_conditions !=  nullptr && bgp_conditions->has_operation())
	|| (igp_conditions !=  nullptr && igp_conditions->has_operation())
	|| (match_neighbor_set !=  nullptr && match_neighbor_set->has_operation())
	|| (match_prefix_set !=  nullptr && match_prefix_set->has_operation())
	|| (match_tag_set !=  nullptr && match_tag_set->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conditions";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Conditions' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_policy.is_set || is_set(call_policy.operation)) leaf_name_data.push_back(call_policy.get_name_leafdata());
    if (install_protocol_eq.is_set || is_set(install_protocol_eq.operation)) leaf_name_data.push_back(install_protocol_eq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-conditions")
    {
        if(bgp_conditions == nullptr)
        {
            bgp_conditions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions>();
        }
        return bgp_conditions;
    }

    if(child_yang_name == "igp-conditions")
    {
        if(igp_conditions == nullptr)
        {
            igp_conditions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions>();
        }
        return igp_conditions;
    }

    if(child_yang_name == "match-neighbor-set")
    {
        if(match_neighbor_set == nullptr)
        {
            match_neighbor_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet>();
        }
        return match_neighbor_set;
    }

    if(child_yang_name == "match-prefix-set")
    {
        if(match_prefix_set == nullptr)
        {
            match_prefix_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet>();
        }
        return match_prefix_set;
    }

    if(child_yang_name == "match-tag-set")
    {
        if(match_tag_set == nullptr)
        {
            match_tag_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet>();
        }
        return match_tag_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_conditions != nullptr)
    {
        children["bgp-conditions"] = bgp_conditions;
    }

    if(igp_conditions != nullptr)
    {
        children["igp-conditions"] = igp_conditions;
    }

    if(match_neighbor_set != nullptr)
    {
        children["match-neighbor-set"] = match_neighbor_set;
    }

    if(match_prefix_set != nullptr)
    {
        children["match-prefix-set"] = match_prefix_set;
    }

    if(match_tag_set != nullptr)
    {
        children["match-tag-set"] = match_tag_set;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "call-policy")
    {
        call_policy = value;
    }
    if(value_path == "install-protocol-eq")
    {
        install_protocol_eq = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::MatchPrefixSet()
    :
    match_set_options{YType::enumeration, "match-set-options"},
    prefix_set{YType::str, "prefix-set"}
{
    yang_name = "match-prefix-set"; yang_parent_name = "conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::~MatchPrefixSet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::has_data() const
{
    return match_set_options.is_set
	|| prefix_set.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::has_operation() const
{
    return is_set(operation)
	|| is_set(match_set_options.operation)
	|| is_set(prefix_set.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-prefix-set";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchPrefixSet' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_set_options.is_set || is_set(match_set_options.operation)) leaf_name_data.push_back(match_set_options.get_name_leafdata());
    if (prefix_set.is_set || is_set(prefix_set.operation)) leaf_name_data.push_back(prefix_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-set-options")
    {
        match_set_options = value;
    }
    if(value_path == "prefix-set")
    {
        prefix_set = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::MatchNeighborSet()
    :
    match_set_options{YType::enumeration, "match-set-options"},
    neighbor_set{YType::str, "neighbor-set"}
{
    yang_name = "match-neighbor-set"; yang_parent_name = "conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::~MatchNeighborSet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::has_data() const
{
    return match_set_options.is_set
	|| neighbor_set.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::has_operation() const
{
    return is_set(operation)
	|| is_set(match_set_options.operation)
	|| is_set(neighbor_set.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-neighbor-set";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchNeighborSet' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_set_options.is_set || is_set(match_set_options.operation)) leaf_name_data.push_back(match_set_options.get_name_leafdata());
    if (neighbor_set.is_set || is_set(neighbor_set.operation)) leaf_name_data.push_back(neighbor_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-set-options")
    {
        match_set_options = value;
    }
    if(value_path == "neighbor-set")
    {
        neighbor_set = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::MatchTagSet()
    :
    match_set_options{YType::enumeration, "match-set-options"},
    tag_set{YType::str, "tag-set"}
{
    yang_name = "match-tag-set"; yang_parent_name = "conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::~MatchTagSet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::has_data() const
{
    return match_set_options.is_set
	|| tag_set.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::has_operation() const
{
    return is_set(operation)
	|| is_set(match_set_options.operation)
	|| is_set(tag_set.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-tag-set";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchTagSet' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_set_options.is_set || is_set(match_set_options.operation)) leaf_name_data.push_back(match_set_options.get_name_leafdata());
    if (tag_set.is_set || is_set(tag_set.operation)) leaf_name_data.push_back(tag_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-set-options")
    {
        match_set_options = value;
    }
    if(value_path == "tag-set")
    {
        tag_set = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::IgpConditions()
{
    yang_name = "igp-conditions"; yang_parent_name = "conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::~IgpConditions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::has_data() const
{
    return false;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::has_operation() const
{
    return is_set(operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-conditions";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpConditions' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::BgpConditions()
    :
    afi_safi_in{YType::identityref, "afi-safi-in"},
    local_pref_eq{YType::uint32, "local-pref-eq"},
    med_eq{YType::uint32, "med-eq"},
    next_hop_in{YType::str, "next-hop-in"},
    origin_eq{YType::enumeration, "origin-eq"},
    route_type{YType::enumeration, "route-type"}
    	,
    as_path_length(nullptr) // presence node
	,community_count(nullptr) // presence node
	,match_as_path_set(nullptr) // presence node
	,match_community_set(nullptr) // presence node
	,match_ext_community_set(nullptr) // presence node
{
    yang_name = "bgp-conditions"; yang_parent_name = "conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::~BgpConditions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::has_data() const
{
    for (auto const & leaf : afi_safi_in.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : next_hop_in.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_pref_eq.is_set
	|| med_eq.is_set
	|| origin_eq.is_set
	|| route_type.is_set
	|| (as_path_length !=  nullptr && as_path_length->has_data())
	|| (community_count !=  nullptr && community_count->has_data())
	|| (match_as_path_set !=  nullptr && match_as_path_set->has_data())
	|| (match_community_set !=  nullptr && match_community_set->has_data())
	|| (match_ext_community_set !=  nullptr && match_ext_community_set->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::has_operation() const
{
    for (auto const & leaf : afi_safi_in.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : next_hop_in.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(afi_safi_in.operation)
	|| is_set(local_pref_eq.operation)
	|| is_set(med_eq.operation)
	|| is_set(next_hop_in.operation)
	|| is_set(origin_eq.operation)
	|| is_set(route_type.operation)
	|| (as_path_length !=  nullptr && as_path_length->has_operation())
	|| (community_count !=  nullptr && community_count->has_operation())
	|| (match_as_path_set !=  nullptr && match_as_path_set->has_operation())
	|| (match_community_set !=  nullptr && match_community_set->has_operation())
	|| (match_ext_community_set !=  nullptr && match_ext_community_set->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp-policy:bgp-conditions";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConditions' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_pref_eq.is_set || is_set(local_pref_eq.operation)) leaf_name_data.push_back(local_pref_eq.get_name_leafdata());
    if (med_eq.is_set || is_set(med_eq.operation)) leaf_name_data.push_back(med_eq.get_name_leafdata());
    if (origin_eq.is_set || is_set(origin_eq.operation)) leaf_name_data.push_back(origin_eq.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());

    auto afi_safi_in_name_datas = afi_safi_in.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), afi_safi_in_name_datas.begin(), afi_safi_in_name_datas.end());
    auto next_hop_in_name_datas = next_hop_in.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), next_hop_in_name_datas.begin(), next_hop_in_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-path-length")
    {
        if(as_path_length == nullptr)
        {
            as_path_length = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength>();
        }
        return as_path_length;
    }

    if(child_yang_name == "community-count")
    {
        if(community_count == nullptr)
        {
            community_count = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount>();
        }
        return community_count;
    }

    if(child_yang_name == "match-as-path-set")
    {
        if(match_as_path_set == nullptr)
        {
            match_as_path_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet>();
        }
        return match_as_path_set;
    }

    if(child_yang_name == "match-community-set")
    {
        if(match_community_set == nullptr)
        {
            match_community_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet>();
        }
        return match_community_set;
    }

    if(child_yang_name == "match-ext-community-set")
    {
        if(match_ext_community_set == nullptr)
        {
            match_ext_community_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet>();
        }
        return match_ext_community_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_path_length != nullptr)
    {
        children["as-path-length"] = as_path_length;
    }

    if(community_count != nullptr)
    {
        children["community-count"] = community_count;
    }

    if(match_as_path_set != nullptr)
    {
        children["match-as-path-set"] = match_as_path_set;
    }

    if(match_community_set != nullptr)
    {
        children["match-community-set"] = match_community_set;
    }

    if(match_ext_community_set != nullptr)
    {
        children["match-ext-community-set"] = match_ext_community_set;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-in")
    {
        afi_safi_in.append(value);
    }
    if(value_path == "local-pref-eq")
    {
        local_pref_eq = value;
    }
    if(value_path == "med-eq")
    {
        med_eq = value;
    }
    if(value_path == "next-hop-in")
    {
        next_hop_in.append(value);
    }
    if(value_path == "origin-eq")
    {
        origin_eq = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::MatchCommunitySet()
    :
    community_set{YType::str, "community-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{
    yang_name = "match-community-set"; yang_parent_name = "bgp-conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::~MatchCommunitySet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::has_data() const
{
    return community_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::has_operation() const
{
    return is_set(operation)
	|| is_set(community_set.operation)
	|| is_set(match_set_options.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-community-set";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchCommunitySet' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set.is_set || is_set(community_set.operation)) leaf_name_data.push_back(community_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.operation)) leaf_name_data.push_back(match_set_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-set")
    {
        community_set = value;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::MatchExtCommunitySet()
    :
    ext_community_set{YType::str, "ext-community-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{
    yang_name = "match-ext-community-set"; yang_parent_name = "bgp-conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::~MatchExtCommunitySet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::has_data() const
{
    return ext_community_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::has_operation() const
{
    return is_set(operation)
	|| is_set(ext_community_set.operation)
	|| is_set(match_set_options.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-ext-community-set";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchExtCommunitySet' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set.is_set || is_set(ext_community_set.operation)) leaf_name_data.push_back(ext_community_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.operation)) leaf_name_data.push_back(match_set_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-community-set")
    {
        ext_community_set = value;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::MatchAsPathSet()
    :
    as_path_set{YType::str, "as-path-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{
    yang_name = "match-as-path-set"; yang_parent_name = "bgp-conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::~MatchAsPathSet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::has_data() const
{
    return as_path_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::has_operation() const
{
    return is_set(operation)
	|| is_set(as_path_set.operation)
	|| is_set(match_set_options.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-as-path-set";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAsPathSet' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_set.is_set || is_set(as_path_set.operation)) leaf_name_data.push_back(as_path_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.operation)) leaf_name_data.push_back(match_set_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-path-set")
    {
        as_path_set = value;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::CommunityCount()
    :
    operator_{YType::identityref, "operator"},
    value_{YType::uint32, "value"}
{
    yang_name = "community-count"; yang_parent_name = "bgp-conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::~CommunityCount()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::has_data() const
{
    return operator_.is_set
	|| value_.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::has_operation() const
{
    return is_set(operation)
	|| is_set(operator_.operation)
	|| is_set(value_.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-count";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommunityCount' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::AsPathLength()
    :
    operator_{YType::identityref, "operator"},
    value_{YType::uint32, "value"}
{
    yang_name = "as-path-length"; yang_parent_name = "bgp-conditions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::~AsPathLength()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::has_data() const
{
    return operator_.is_set
	|| value_.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::has_operation() const
{
    return is_set(operation)
	|| is_set(operator_.operation)
	|| is_set(value_.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-length";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsPathLength' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Actions()
    :
    accept_route{YType::empty, "accept-route"},
    reject_route{YType::empty, "reject-route"}
    	,
    bgp_actions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions>())
	,igp_actions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions>())
{
    bgp_actions->parent = this;

    igp_actions->parent = this;

    yang_name = "actions"; yang_parent_name = "statement";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::~Actions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::has_data() const
{
    return accept_route.is_set
	|| reject_route.is_set
	|| (bgp_actions !=  nullptr && bgp_actions->has_data())
	|| (igp_actions !=  nullptr && igp_actions->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_route.operation)
	|| is_set(reject_route.operation)
	|| (bgp_actions !=  nullptr && bgp_actions->has_operation())
	|| (igp_actions !=  nullptr && igp_actions->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Actions' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_route.is_set || is_set(accept_route.operation)) leaf_name_data.push_back(accept_route.get_name_leafdata());
    if (reject_route.is_set || is_set(reject_route.operation)) leaf_name_data.push_back(reject_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-actions")
    {
        if(bgp_actions == nullptr)
        {
            bgp_actions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions>();
        }
        return bgp_actions;
    }

    if(child_yang_name == "igp-actions")
    {
        if(igp_actions == nullptr)
        {
            igp_actions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions>();
        }
        return igp_actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_actions != nullptr)
    {
        children["bgp-actions"] = bgp_actions;
    }

    if(igp_actions != nullptr)
    {
        children["igp-actions"] = igp_actions;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-route")
    {
        accept_route = value;
    }
    if(value_path == "reject-route")
    {
        reject_route = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::IgpActions()
    :
    set_tag{YType::str, "set-tag"}
{
    yang_name = "igp-actions"; yang_parent_name = "actions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::~IgpActions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::has_data() const
{
    return set_tag.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::has_operation() const
{
    return is_set(operation)
	|| is_set(set_tag.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-actions";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpActions' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_tag.is_set || is_set(set_tag.operation)) leaf_name_data.push_back(set_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-tag")
    {
        set_tag = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::BgpActions()
    :
    set_local_pref{YType::uint32, "set-local-pref"},
    set_med{YType::str, "set-med"},
    set_next_hop{YType::str, "set-next-hop"},
    set_route_origin{YType::enumeration, "set-route-origin"}
    	,
    set_as_path_prepend(nullptr) // presence node
	,set_community(nullptr) // presence node
	,set_ext_community(nullptr) // presence node
{
    yang_name = "bgp-actions"; yang_parent_name = "actions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::~BgpActions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::has_data() const
{
    return set_local_pref.is_set
	|| set_med.is_set
	|| set_next_hop.is_set
	|| set_route_origin.is_set
	|| (set_as_path_prepend !=  nullptr && set_as_path_prepend->has_data())
	|| (set_community !=  nullptr && set_community->has_data())
	|| (set_ext_community !=  nullptr && set_ext_community->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::has_operation() const
{
    return is_set(operation)
	|| is_set(set_local_pref.operation)
	|| is_set(set_med.operation)
	|| is_set(set_next_hop.operation)
	|| is_set(set_route_origin.operation)
	|| (set_as_path_prepend !=  nullptr && set_as_path_prepend->has_operation())
	|| (set_community !=  nullptr && set_community->has_operation())
	|| (set_ext_community !=  nullptr && set_ext_community->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp-policy:bgp-actions";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpActions' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_local_pref.is_set || is_set(set_local_pref.operation)) leaf_name_data.push_back(set_local_pref.get_name_leafdata());
    if (set_med.is_set || is_set(set_med.operation)) leaf_name_data.push_back(set_med.get_name_leafdata());
    if (set_next_hop.is_set || is_set(set_next_hop.operation)) leaf_name_data.push_back(set_next_hop.get_name_leafdata());
    if (set_route_origin.is_set || is_set(set_route_origin.operation)) leaf_name_data.push_back(set_route_origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-as-path-prepend")
    {
        if(set_as_path_prepend == nullptr)
        {
            set_as_path_prepend = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend>();
        }
        return set_as_path_prepend;
    }

    if(child_yang_name == "set-community")
    {
        if(set_community == nullptr)
        {
            set_community = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity>();
        }
        return set_community;
    }

    if(child_yang_name == "set-ext-community")
    {
        if(set_ext_community == nullptr)
        {
            set_ext_community = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity>();
        }
        return set_ext_community;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set_as_path_prepend != nullptr)
    {
        children["set-as-path-prepend"] = set_as_path_prepend;
    }

    if(set_community != nullptr)
    {
        children["set-community"] = set_community;
    }

    if(set_ext_community != nullptr)
    {
        children["set-ext-community"] = set_ext_community;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-local-pref")
    {
        set_local_pref = value;
    }
    if(value_path == "set-med")
    {
        set_med = value;
    }
    if(value_path == "set-next-hop")
    {
        set_next_hop = value;
    }
    if(value_path == "set-route-origin")
    {
        set_route_origin = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::SetAsPathPrepend()
    :
    repeat_n{YType::uint8, "repeat-n"}
{
    yang_name = "set-as-path-prepend"; yang_parent_name = "bgp-actions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::~SetAsPathPrepend()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::has_data() const
{
    return repeat_n.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::has_operation() const
{
    return is_set(operation)
	|| is_set(repeat_n.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-as-path-prepend";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetAsPathPrepend' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repeat_n.is_set || is_set(repeat_n.operation)) leaf_name_data.push_back(repeat_n.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repeat-n")
    {
        repeat_n = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::SetCommunity()
    :
    communities{YType::str, "communities"},
    community_set_ref{YType::str, "community-set-ref"},
    options{YType::enumeration, "options"}
{
    yang_name = "set-community"; yang_parent_name = "bgp-actions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::~SetCommunity()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::has_data() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return community_set_ref.is_set
	|| options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::has_operation() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(communities.operation)
	|| is_set(community_set_ref.operation)
	|| is_set(options.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-community";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetCommunity' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set_ref.is_set || is_set(community_set_ref.operation)) leaf_name_data.push_back(community_set_ref.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());

    auto communities_name_datas = communities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), communities_name_datas.begin(), communities_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "communities")
    {
        communities.append(value);
    }
    if(value_path == "community-set-ref")
    {
        community_set_ref = value;
    }
    if(value_path == "options")
    {
        options = value;
    }
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::SetExtCommunity()
    :
    communities{YType::str, "communities"},
    ext_community_set_ref{YType::str, "ext-community-set-ref"},
    options{YType::enumeration, "options"}
{
    yang_name = "set-ext-community"; yang_parent_name = "bgp-actions";
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::~SetExtCommunity()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::has_data() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return ext_community_set_ref.is_set
	|| options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::has_operation() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(communities.operation)
	|| is_set(ext_community_set_ref.operation)
	|| is_set(options.operation);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-ext-community";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetExtCommunity' in openconfig_routing_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set_ref.is_set || is_set(ext_community_set_ref.operation)) leaf_name_data.push_back(ext_community_set_ref.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());

    auto communities_name_datas = communities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), communities_name_datas.begin(), communities_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "communities")
    {
        communities.append(value);
    }
    if(value_path == "ext-community-set-ref")
    {
        ext_community_set_ref = value;
    }
    if(value_path == "options")
    {
        options = value;
    }
}

const Enum::YLeaf DefaultPolicyTypeEnum::ACCEPT_ROUTE {0, "ACCEPT-ROUTE"};
const Enum::YLeaf DefaultPolicyTypeEnum::REJECT_ROUTE {1, "REJECT-ROUTE"};

const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::RouteTypeEnum::INTERNAL {0, "INTERNAL"};
const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::RouteTypeEnum::EXTERNAL {1, "EXTERNAL"};


}
}

