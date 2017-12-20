
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_routing_policy.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_routing_policy {

RoutingPolicy::RoutingPolicy()
    :
    defined_sets(std::make_shared<RoutingPolicy::DefinedSets>())
	,policy_definitions(std::make_shared<RoutingPolicy::PolicyDefinitions>())
{
    defined_sets->parent = this;
    policy_definitions->parent = this;

    yang_name = "routing-policy"; yang_parent_name = "openconfig-routing-policy"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (defined_sets !=  nullptr && defined_sets->has_operation())
	|| (policy_definitions !=  nullptr && policy_definitions->has_operation());
}

std::string RoutingPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> RoutingPolicy::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool RoutingPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defined-sets" || name == "policy-definitions")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::DefinedSets()
    :
    prefix_sets(std::make_shared<RoutingPolicy::DefinedSets::PrefixSets>())
	,neighbor_sets(std::make_shared<RoutingPolicy::DefinedSets::NeighborSets>())
	,tag_sets(std::make_shared<RoutingPolicy::DefinedSets::TagSets>())
	,bgp_defined_sets(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets>())
{
    prefix_sets->parent = this;
    neighbor_sets->parent = this;
    tag_sets->parent = this;
    bgp_defined_sets->parent = this;

    yang_name = "defined-sets"; yang_parent_name = "routing-policy"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::DefinedSets::~DefinedSets()
{
}

bool RoutingPolicy::DefinedSets::has_data() const
{
    return (prefix_sets !=  nullptr && prefix_sets->has_data())
	|| (neighbor_sets !=  nullptr && neighbor_sets->has_data())
	|| (tag_sets !=  nullptr && tag_sets->has_data())
	|| (bgp_defined_sets !=  nullptr && bgp_defined_sets->has_data());
}

bool RoutingPolicy::DefinedSets::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_sets !=  nullptr && prefix_sets->has_operation())
	|| (neighbor_sets !=  nullptr && neighbor_sets->has_operation())
	|| (tag_sets !=  nullptr && tag_sets->has_operation())
	|| (bgp_defined_sets !=  nullptr && bgp_defined_sets->has_operation());
}

std::string RoutingPolicy::DefinedSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defined-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sets")
    {
        if(prefix_sets == nullptr)
        {
            prefix_sets = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets>();
        }
        return prefix_sets;
    }

    if(child_yang_name == "neighbor-sets")
    {
        if(neighbor_sets == nullptr)
        {
            neighbor_sets = std::make_shared<RoutingPolicy::DefinedSets::NeighborSets>();
        }
        return neighbor_sets;
    }

    if(child_yang_name == "tag-sets")
    {
        if(tag_sets == nullptr)
        {
            tag_sets = std::make_shared<RoutingPolicy::DefinedSets::TagSets>();
        }
        return tag_sets;
    }

    if(child_yang_name == "openconfig-bgp-policy:bgp-defined-sets")
    {
        if(bgp_defined_sets == nullptr)
        {
            bgp_defined_sets = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets>();
        }
        return bgp_defined_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_sets != nullptr)
    {
        children["prefix-sets"] = prefix_sets;
    }

    if(neighbor_sets != nullptr)
    {
        children["neighbor-sets"] = neighbor_sets;
    }

    if(tag_sets != nullptr)
    {
        children["tag-sets"] = tag_sets;
    }

    if(bgp_defined_sets != nullptr)
    {
        children["openconfig-bgp-policy:bgp-defined-sets"] = bgp_defined_sets;
    }

    return children;
}

void RoutingPolicy::DefinedSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sets" || name == "neighbor-sets" || name == "tag-sets" || name == "bgp-defined-sets")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSets()
{

    yang_name = "prefix-sets"; yang_parent_name = "defined-sets"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::PrefixSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::PrefixSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::DefinedSets::PrefixSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::PrefixSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-set")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::PrefixSet()
    :
    prefix_set_name{YType::str, "prefix-set-name"}
    	,
    config(std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config>())
	,state(std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State>())
	,prefixes(std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes>())
{
    config->parent = this;
    state->parent = this;
    prefixes->parent = this;

    yang_name = "prefix-set"; yang_parent_name = "prefix-sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::~PrefixSet()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::has_data() const
{
    return prefix_set_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data());
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_set_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/prefix-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-set" <<"[prefix-set-name='" <<prefix_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_set_name.is_set || is_set(prefix_set_name.yfilter)) leaf_name_data.push_back(prefix_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State>();
        }
        return state;
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-set-name")
    {
        prefix_set_name = value;
        prefix_set_name.value_namespace = name_space;
        prefix_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-set-name")
    {
        prefix_set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "prefixes" || name == "prefix-set-name")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::Config()
    :
    prefix_set_name{YType::str, "prefix-set-name"}
{

    yang_name = "config"; yang_parent_name = "prefix-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::~Config()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::has_data() const
{
    return prefix_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_set_name.yfilter);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_set_name.is_set || is_set(prefix_set_name.yfilter)) leaf_name_data.push_back(prefix_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-set-name")
    {
        prefix_set_name = value;
        prefix_set_name.value_namespace = name_space;
        prefix_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-set-name")
    {
        prefix_set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-set-name")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::State()
    :
    prefix_set_name{YType::str, "prefix-set-name"}
{

    yang_name = "state"; yang_parent_name = "prefix-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::~State()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::has_data() const
{
    return prefix_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_set_name.yfilter);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_set_name.is_set || is_set(prefix_set_name.yfilter)) leaf_name_data.push_back(prefix_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-set-name")
    {
        prefix_set_name = value;
        prefix_set_name.value_namespace = name_space;
        prefix_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-set-name")
    {
        prefix_set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-set-name")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefixes()
{

    yang_name = "prefixes"; yang_parent_name = "prefix-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::~Prefixes()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Prefix()
    :
    ip_prefix{YType::str, "ip-prefix"},
    masklength_range{YType::str, "masklength-range"}
    	,
    config(std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config>())
	,state(std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::~Prefix()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::has_data() const
{
    return ip_prefix.is_set
	|| masklength_range.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_prefix.yfilter)
	|| ydk::is_set(masklength_range.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[ip-prefix='" <<ip_prefix <<"']" <<"[masklength-range='" <<masklength_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (masklength_range.is_set || is_set(masklength_range.yfilter)) leaf_name_data.push_back(masklength_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masklength-range")
    {
        masklength_range = value;
        masklength_range.value_namespace = name_space;
        masklength_range.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
    if(value_path == "masklength-range")
    {
        masklength_range.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ip-prefix" || name == "masklength-range")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::Config()
    :
    ip_prefix{YType::str, "ip-prefix"},
    masklength_range{YType::str, "masklength-range"}
{

    yang_name = "config"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::~Config()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::has_data() const
{
    return ip_prefix.is_set
	|| masklength_range.is_set;
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_prefix.yfilter)
	|| ydk::is_set(masklength_range.yfilter);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (masklength_range.is_set || is_set(masklength_range.yfilter)) leaf_name_data.push_back(masklength_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masklength-range")
    {
        masklength_range = value;
        masklength_range.value_namespace = name_space;
        masklength_range.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
    if(value_path == "masklength-range")
    {
        masklength_range.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-prefix" || name == "masklength-range")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::State()
    :
    ip_prefix{YType::str, "ip-prefix"},
    masklength_range{YType::str, "masklength-range"}
{

    yang_name = "state"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::~State()
{
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::has_data() const
{
    return ip_prefix.is_set
	|| masklength_range.is_set;
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_prefix.yfilter)
	|| ydk::is_set(masklength_range.yfilter);
}

std::string RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (masklength_range.is_set || is_set(masklength_range.yfilter)) leaf_name_data.push_back(masklength_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masklength-range")
    {
        masklength_range = value;
        masklength_range.value_namespace = name_space;
        masklength_range.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
    if(value_path == "masklength-range")
    {
        masklength_range.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-prefix" || name == "masklength-range")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSets()
{

    yang_name = "neighbor-sets"; yang_parent_name = "defined-sets"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::DefinedSets::NeighborSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::NeighborSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::NeighborSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::DefinedSets::NeighborSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::NeighborSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::NeighborSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-set")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::NeighborSet()
    :
    neighbor_set_name{YType::str, "neighbor-set-name"}
    	,
    config(std::make_shared<RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config>())
	,state(std::make_shared<RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "neighbor-set"; yang_parent_name = "neighbor-sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::~NeighborSet()
{
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::has_data() const
{
    return neighbor_set_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_set_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/neighbor-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-set" <<"[neighbor-set-name='" <<neighbor_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_set_name.is_set || is_set(neighbor_set_name.yfilter)) leaf_name_data.push_back(neighbor_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-set-name")
    {
        neighbor_set_name = value;
        neighbor_set_name.value_namespace = name_space;
        neighbor_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-set-name")
    {
        neighbor_set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "neighbor-set-name")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::Config()
    :
    neighbor_set_name{YType::str, "neighbor-set-name"},
    address{YType::str, "address"}
{

    yang_name = "config"; yang_parent_name = "neighbor-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::~Config()
{
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return neighbor_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_set_name.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_set_name.is_set || is_set(neighbor_set_name.yfilter)) leaf_name_data.push_back(neighbor_set_name.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-set-name")
    {
        neighbor_set_name = value;
        neighbor_set_name.value_namespace = name_space;
        neighbor_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-set-name")
    {
        neighbor_set_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-set-name" || name == "address")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::State()
    :
    neighbor_set_name{YType::str, "neighbor-set-name"},
    address{YType::str, "address"}
{

    yang_name = "state"; yang_parent_name = "neighbor-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::~State()
{
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return neighbor_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_set_name.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_set_name.is_set || is_set(neighbor_set_name.yfilter)) leaf_name_data.push_back(neighbor_set_name.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-set-name")
    {
        neighbor_set_name = value;
        neighbor_set_name.value_namespace = name_space;
        neighbor_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-set-name")
    {
        neighbor_set_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-set-name" || name == "address")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::TagSets::TagSets()
{

    yang_name = "tag-sets"; yang_parent_name = "defined-sets"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::DefinedSets::TagSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::TagSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::TagSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::DefinedSets::TagSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::TagSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::TagSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-set")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::TagSets::TagSet::TagSet()
    :
    tag_set_name{YType::str, "tag-set-name"}
    	,
    config(std::make_shared<RoutingPolicy::DefinedSets::TagSets::TagSet::Config>())
	,state(std::make_shared<RoutingPolicy::DefinedSets::TagSets::TagSet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "tag-set"; yang_parent_name = "tag-sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::DefinedSets::TagSets::TagSet::~TagSet()
{
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::has_data() const
{
    return tag_set_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag_set_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::DefinedSets::TagSets::TagSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/tag-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::TagSets::TagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-set" <<"[tag-set-name='" <<tag_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::TagSets::TagSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_set_name.is_set || is_set(tag_set_name.yfilter)) leaf_name_data.push_back(tag_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::TagSets::TagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::DefinedSets::TagSets::TagSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::DefinedSets::TagSets::TagSet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::TagSets::TagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::DefinedSets::TagSets::TagSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-set-name")
    {
        tag_set_name = value;
        tag_set_name.value_namespace = name_space;
        tag_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::TagSets::TagSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-set-name")
    {
        tag_set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "tag-set-name")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::TagSets::TagSet::Config::Config()
    :
    tag_set_name{YType::str, "tag-set-name"},
    tag_value{YType::str, "tag-value"}
{

    yang_name = "config"; yang_parent_name = "tag-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::TagSets::TagSet::Config::~Config()
{
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::Config::has_data() const
{
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return tag_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::Config::has_operation() const
{
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag_set_name.yfilter)
	|| ydk::is_set(tag_value.yfilter);
}

std::string RoutingPolicy::DefinedSets::TagSets::TagSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::TagSets::TagSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_set_name.is_set || is_set(tag_set_name.yfilter)) leaf_name_data.push_back(tag_set_name.get_name_leafdata());

    auto tag_value_name_datas = tag_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_value_name_datas.begin(), tag_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::TagSets::TagSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::TagSets::TagSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::TagSets::TagSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-set-name")
    {
        tag_set_name = value;
        tag_set_name.value_namespace = name_space;
        tag_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-value")
    {
        tag_value.append(value);
    }
}

void RoutingPolicy::DefinedSets::TagSets::TagSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-set-name")
    {
        tag_set_name.yfilter = yfilter;
    }
    if(value_path == "tag-value")
    {
        tag_value.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-set-name" || name == "tag-value")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::TagSets::TagSet::State::State()
    :
    tag_set_name{YType::str, "tag-set-name"},
    tag_value{YType::str, "tag-value"}
{

    yang_name = "state"; yang_parent_name = "tag-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::TagSets::TagSet::State::~State()
{
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::State::has_data() const
{
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return tag_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::State::has_operation() const
{
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag_set_name.yfilter)
	|| ydk::is_set(tag_value.yfilter);
}

std::string RoutingPolicy::DefinedSets::TagSets::TagSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::TagSets::TagSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_set_name.is_set || is_set(tag_set_name.yfilter)) leaf_name_data.push_back(tag_set_name.get_name_leafdata());

    auto tag_value_name_datas = tag_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_value_name_datas.begin(), tag_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::TagSets::TagSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::TagSets::TagSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::TagSets::TagSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-set-name")
    {
        tag_set_name = value;
        tag_set_name.value_namespace = name_space;
        tag_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-value")
    {
        tag_value.append(value);
    }
}

void RoutingPolicy::DefinedSets::TagSets::TagSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-set-name")
    {
        tag_set_name.yfilter = yfilter;
    }
    if(value_path == "tag-value")
    {
        tag_value.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::TagSets::TagSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-set-name" || name == "tag-value")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::BgpDefinedSets()
    :
    community_sets(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets>())
	,ext_community_sets(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets>())
	,as_path_sets(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets>())
{
    community_sets->parent = this;
    ext_community_sets->parent = this;
    as_path_sets->parent = this;

    yang_name = "bgp-defined-sets"; yang_parent_name = "defined-sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::~BgpDefinedSets()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::has_data() const
{
    return (community_sets !=  nullptr && community_sets->has_data())
	|| (ext_community_sets !=  nullptr && ext_community_sets->has_data())
	|| (as_path_sets !=  nullptr && as_path_sets->has_data());
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::has_operation() const
{
    return is_set(yfilter)
	|| (community_sets !=  nullptr && community_sets->has_operation())
	|| (ext_community_sets !=  nullptr && ext_community_sets->has_operation())
	|| (as_path_sets !=  nullptr && as_path_sets->has_operation());
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp-policy:bgp-defined-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "as-path-sets")
    {
        if(as_path_sets == nullptr)
        {
            as_path_sets = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets>();
        }
        return as_path_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community_sets != nullptr)
    {
        children["community-sets"] = community_sets;
    }

    if(ext_community_sets != nullptr)
    {
        children["ext-community-sets"] = ext_community_sets;
    }

    if(as_path_sets != nullptr)
    {
        children["as-path-sets"] = as_path_sets;
    }

    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-sets" || name == "ext-community-sets" || name == "as-path-sets")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySets()
{

    yang_name = "community-sets"; yang_parent_name = "bgp-defined-sets"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-set")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::CommunitySet()
    :
    community_set_name{YType::str, "community-set-name"}
    	,
    config(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config>())
	,state(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "community-set"; yang_parent_name = "community-sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::~CommunitySet()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::has_data() const
{
    return community_set_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_set_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/community-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-set" <<"[community-set-name='" <<community_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set_name.is_set || is_set(community_set_name.yfilter)) leaf_name_data.push_back(community_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-set-name")
    {
        community_set_name = value;
        community_set_name.value_namespace = name_space;
        community_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-set-name")
    {
        community_set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "community-set-name")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::Config()
    :
    community_set_name{YType::str, "community-set-name"},
    community_member{YType::str, "community-member"}
{

    yang_name = "config"; yang_parent_name = "community-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::~Config()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::has_data() const
{
    for (auto const & leaf : community_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return community_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::has_operation() const
{
    for (auto const & leaf : community_member.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(community_set_name.yfilter)
	|| ydk::is_set(community_member.yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set_name.is_set || is_set(community_set_name.yfilter)) leaf_name_data.push_back(community_set_name.get_name_leafdata());

    auto community_member_name_datas = community_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_member_name_datas.begin(), community_member_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-set-name")
    {
        community_set_name = value;
        community_set_name.value_namespace = name_space;
        community_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-member")
    {
        community_member.append(value);
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-set-name")
    {
        community_set_name.yfilter = yfilter;
    }
    if(value_path == "community-member")
    {
        community_member.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-set-name" || name == "community-member")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::State()
    :
    community_set_name{YType::str, "community-set-name"},
    community_member{YType::str, "community-member"}
{

    yang_name = "state"; yang_parent_name = "community-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::~State()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::has_data() const
{
    for (auto const & leaf : community_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return community_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::has_operation() const
{
    for (auto const & leaf : community_member.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(community_set_name.yfilter)
	|| ydk::is_set(community_member.yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set_name.is_set || is_set(community_set_name.yfilter)) leaf_name_data.push_back(community_set_name.get_name_leafdata());

    auto community_member_name_datas = community_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_member_name_datas.begin(), community_member_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-set-name")
    {
        community_set_name = value;
        community_set_name.value_namespace = name_space;
        community_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-member")
    {
        community_member.append(value);
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-set-name")
    {
        community_set_name.yfilter = yfilter;
    }
    if(value_path == "community-member")
    {
        community_member.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-set-name" || name == "community-member")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySets()
{

    yang_name = "ext-community-sets"; yang_parent_name = "bgp-defined-sets"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community-set")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ExtCommunitySet()
    :
    ext_community_set_name{YType::str, "ext-community-set-name"}
    	,
    config(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config>())
	,state(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ext-community-set"; yang_parent_name = "ext-community-sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::~ExtCommunitySet()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::has_data() const
{
    return ext_community_set_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_community_set_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/ext-community-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community-set" <<"[ext-community-set-name='" <<ext_community_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set_name.is_set || is_set(ext_community_set_name.yfilter)) leaf_name_data.push_back(ext_community_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-community-set-name")
    {
        ext_community_set_name = value;
        ext_community_set_name.value_namespace = name_space;
        ext_community_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-community-set-name")
    {
        ext_community_set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ext-community-set-name")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::Config()
    :
    ext_community_set_name{YType::str, "ext-community-set-name"},
    ext_community_member{YType::str, "ext-community-member"}
{

    yang_name = "config"; yang_parent_name = "ext-community-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::~Config()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::has_data() const
{
    for (auto const & leaf : ext_community_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return ext_community_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::has_operation() const
{
    for (auto const & leaf : ext_community_member.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ext_community_set_name.yfilter)
	|| ydk::is_set(ext_community_member.yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set_name.is_set || is_set(ext_community_set_name.yfilter)) leaf_name_data.push_back(ext_community_set_name.get_name_leafdata());

    auto ext_community_member_name_datas = ext_community_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_member_name_datas.begin(), ext_community_member_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-community-set-name")
    {
        ext_community_set_name = value;
        ext_community_set_name.value_namespace = name_space;
        ext_community_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-community-member")
    {
        ext_community_member.append(value);
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-community-set-name")
    {
        ext_community_set_name.yfilter = yfilter;
    }
    if(value_path == "ext-community-member")
    {
        ext_community_member.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community-set-name" || name == "ext-community-member")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::State()
    :
    ext_community_set_name{YType::str, "ext-community-set-name"},
    ext_community_member{YType::str, "ext-community-member"}
{

    yang_name = "state"; yang_parent_name = "ext-community-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::~State()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::has_data() const
{
    for (auto const & leaf : ext_community_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return ext_community_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::has_operation() const
{
    for (auto const & leaf : ext_community_member.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ext_community_set_name.yfilter)
	|| ydk::is_set(ext_community_member.yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set_name.is_set || is_set(ext_community_set_name.yfilter)) leaf_name_data.push_back(ext_community_set_name.get_name_leafdata());

    auto ext_community_member_name_datas = ext_community_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_member_name_datas.begin(), ext_community_member_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-community-set-name")
    {
        ext_community_set_name = value;
        ext_community_set_name.value_namespace = name_space;
        ext_community_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-community-member")
    {
        ext_community_member.append(value);
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-community-set-name")
    {
        ext_community_set_name.yfilter = yfilter;
    }
    if(value_path == "ext-community-member")
    {
        ext_community_member.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community-set-name" || name == "ext-community-member")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSets()
{

    yang_name = "as-path-sets"; yang_parent_name = "bgp-defined-sets"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-path-set")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::AsPathSet()
    :
    as_path_set_name{YType::str, "as-path-set-name"}
    	,
    config(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config>())
	,state(std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "as-path-set"; yang_parent_name = "as-path-sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::~AsPathSet()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::has_data() const
{
    return as_path_set_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_path_set_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/defined-sets/openconfig-bgp-policy:bgp-defined-sets/as-path-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-set" <<"[as-path-set-name='" <<as_path_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_set_name.is_set || is_set(as_path_set_name.yfilter)) leaf_name_data.push_back(as_path_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-path-set-name")
    {
        as_path_set_name = value;
        as_path_set_name.value_namespace = name_space;
        as_path_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-path-set-name")
    {
        as_path_set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "as-path-set-name")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::Config()
    :
    as_path_set_name{YType::str, "as-path-set-name"},
    as_path_set_member{YType::str, "as-path-set-member"}
{

    yang_name = "config"; yang_parent_name = "as-path-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::~Config()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::has_data() const
{
    for (auto const & leaf : as_path_set_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as_path_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::has_operation() const
{
    for (auto const & leaf : as_path_set_member.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as_path_set_name.yfilter)
	|| ydk::is_set(as_path_set_member.yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_set_name.is_set || is_set(as_path_set_name.yfilter)) leaf_name_data.push_back(as_path_set_name.get_name_leafdata());

    auto as_path_set_member_name_datas = as_path_set_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), as_path_set_member_name_datas.begin(), as_path_set_member_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-path-set-name")
    {
        as_path_set_name = value;
        as_path_set_name.value_namespace = name_space;
        as_path_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-set-member")
    {
        as_path_set_member.append(value);
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-path-set-name")
    {
        as_path_set_name.yfilter = yfilter;
    }
    if(value_path == "as-path-set-member")
    {
        as_path_set_member.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-path-set-name" || name == "as-path-set-member")
        return true;
    return false;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::State()
    :
    as_path_set_name{YType::str, "as-path-set-name"},
    as_path_set_member{YType::str, "as-path-set-member"}
{

    yang_name = "state"; yang_parent_name = "as-path-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::~State()
{
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::has_data() const
{
    for (auto const & leaf : as_path_set_member.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as_path_set_name.is_set;
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::has_operation() const
{
    for (auto const & leaf : as_path_set_member.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as_path_set_name.yfilter)
	|| ydk::is_set(as_path_set_member.yfilter);
}

std::string RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_set_name.is_set || is_set(as_path_set_name.yfilter)) leaf_name_data.push_back(as_path_set_name.get_name_leafdata());

    auto as_path_set_member_name_datas = as_path_set_member.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), as_path_set_member_name_datas.begin(), as_path_set_member_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-path-set-name")
    {
        as_path_set_name = value;
        as_path_set_name.value_namespace = name_space;
        as_path_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-set-member")
    {
        as_path_set_member.append(value);
    }
}

void RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-path-set-name")
    {
        as_path_set_name.yfilter = yfilter;
    }
    if(value_path == "as-path-set-member")
    {
        as_path_set_member.yfilter = yfilter;
    }
}

bool RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-path-set-name" || name == "as-path-set-member")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinitions()
{

    yang_name = "policy-definitions"; yang_parent_name = "routing-policy"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::PolicyDefinitions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-definitions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::PolicyDefinitions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-definition")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::PolicyDefinition()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::State>())
	,statements(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements>())
{
    config->parent = this;
    state->parent = this;
    statements->parent = this;

    yang_name = "policy-definition"; yang_parent_name = "policy-definitions"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::~PolicyDefinition()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (statements !=  nullptr && statements->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (statements !=  nullptr && statements->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-routing-policy:routing-policy/policy-definitions/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-definition" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::State>();
        }
        return state;
    }

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
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(statements != nullptr)
    {
        children["statements"] = statements;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "statements" || name == "name")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::Config()
    :
    name{YType::str, "name"}
{

    yang_name = "config"; yang_parent_name = "policy-definition"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::has_data() const
{
    return name.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::State()
    :
    name{YType::str, "name"}
{

    yang_name = "state"; yang_parent_name = "policy-definition"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::has_data() const
{
    return name.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statements()
{

    yang_name = "statements"; yang_parent_name = "policy-definition"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statement")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Statement()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State>())
	,conditions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions>())
	,actions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions>())
{
    config->parent = this;
    state->parent = this;
    conditions->parent = this;
    actions->parent = this;

    yang_name = "statement"; yang_parent_name = "statements"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::~Statement()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (conditions !=  nullptr && conditions->has_data())
	|| (actions !=  nullptr && actions->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (conditions !=  nullptr && conditions->has_operation())
	|| (actions !=  nullptr && actions->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statement" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State>();
        }
        return state;
    }

    if(child_yang_name == "conditions")
    {
        if(conditions == nullptr)
        {
            conditions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions>();
        }
        return conditions;
    }

    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions>();
        }
        return actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(conditions != nullptr)
    {
        children["conditions"] = conditions;
    }

    if(actions != nullptr)
    {
        children["actions"] = actions;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "conditions" || name == "actions" || name == "name")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::Config()
    :
    name{YType::str, "name"}
{

    yang_name = "config"; yang_parent_name = "statement"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::has_data() const
{
    return name.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::State()
    :
    name{YType::str, "name"}
{

    yang_name = "state"; yang_parent_name = "statement"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::has_data() const
{
    return name.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Conditions()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State>())
	,match_interface(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface>())
	,match_prefix_set(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet>())
	,match_neighbor_set(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet>())
	,match_tag_set(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet>())
	,igp_conditions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions>())
	,bgp_conditions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions>())
{
    config->parent = this;
    state->parent = this;
    match_interface->parent = this;
    match_prefix_set->parent = this;
    match_neighbor_set->parent = this;
    match_tag_set->parent = this;
    igp_conditions->parent = this;
    bgp_conditions->parent = this;

    yang_name = "conditions"; yang_parent_name = "statement"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::~Conditions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (match_interface !=  nullptr && match_interface->has_data())
	|| (match_prefix_set !=  nullptr && match_prefix_set->has_data())
	|| (match_neighbor_set !=  nullptr && match_neighbor_set->has_data())
	|| (match_tag_set !=  nullptr && match_tag_set->has_data())
	|| (igp_conditions !=  nullptr && igp_conditions->has_data())
	|| (bgp_conditions !=  nullptr && bgp_conditions->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (match_interface !=  nullptr && match_interface->has_operation())
	|| (match_prefix_set !=  nullptr && match_prefix_set->has_operation())
	|| (match_neighbor_set !=  nullptr && match_neighbor_set->has_operation())
	|| (match_tag_set !=  nullptr && match_tag_set->has_operation())
	|| (igp_conditions !=  nullptr && igp_conditions->has_operation())
	|| (bgp_conditions !=  nullptr && bgp_conditions->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conditions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State>();
        }
        return state;
    }

    if(child_yang_name == "match-interface")
    {
        if(match_interface == nullptr)
        {
            match_interface = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface>();
        }
        return match_interface;
    }

    if(child_yang_name == "match-prefix-set")
    {
        if(match_prefix_set == nullptr)
        {
            match_prefix_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet>();
        }
        return match_prefix_set;
    }

    if(child_yang_name == "match-neighbor-set")
    {
        if(match_neighbor_set == nullptr)
        {
            match_neighbor_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet>();
        }
        return match_neighbor_set;
    }

    if(child_yang_name == "match-tag-set")
    {
        if(match_tag_set == nullptr)
        {
            match_tag_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet>();
        }
        return match_tag_set;
    }

    if(child_yang_name == "igp-conditions")
    {
        if(igp_conditions == nullptr)
        {
            igp_conditions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions>();
        }
        return igp_conditions;
    }

    if(child_yang_name == "openconfig-bgp-policy:bgp-conditions")
    {
        if(bgp_conditions == nullptr)
        {
            bgp_conditions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions>();
        }
        return bgp_conditions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(match_interface != nullptr)
    {
        children["match-interface"] = match_interface;
    }

    if(match_prefix_set != nullptr)
    {
        children["match-prefix-set"] = match_prefix_set;
    }

    if(match_neighbor_set != nullptr)
    {
        children["match-neighbor-set"] = match_neighbor_set;
    }

    if(match_tag_set != nullptr)
    {
        children["match-tag-set"] = match_tag_set;
    }

    if(igp_conditions != nullptr)
    {
        children["igp-conditions"] = igp_conditions;
    }

    if(bgp_conditions != nullptr)
    {
        children["openconfig-bgp-policy:bgp-conditions"] = bgp_conditions;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "match-interface" || name == "match-prefix-set" || name == "match-neighbor-set" || name == "match-tag-set" || name == "igp-conditions" || name == "bgp-conditions")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::Config()
    :
    call_policy{YType::str, "call-policy"},
    install_protocol_eq{YType::identityref, "install-protocol-eq"}
{

    yang_name = "config"; yang_parent_name = "conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::has_data() const
{
    return call_policy.is_set
	|| install_protocol_eq.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(call_policy.yfilter)
	|| ydk::is_set(install_protocol_eq.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_policy.is_set || is_set(call_policy.yfilter)) leaf_name_data.push_back(call_policy.get_name_leafdata());
    if (install_protocol_eq.is_set || is_set(install_protocol_eq.yfilter)) leaf_name_data.push_back(install_protocol_eq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "call-policy")
    {
        call_policy = value;
        call_policy.value_namespace = name_space;
        call_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-protocol-eq")
    {
        install_protocol_eq = value;
        install_protocol_eq.value_namespace = name_space;
        install_protocol_eq.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "call-policy")
    {
        call_policy.yfilter = yfilter;
    }
    if(value_path == "install-protocol-eq")
    {
        install_protocol_eq.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "call-policy" || name == "install-protocol-eq")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::State()
    :
    call_policy{YType::str, "call-policy"},
    install_protocol_eq{YType::identityref, "install-protocol-eq"}
{

    yang_name = "state"; yang_parent_name = "conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::has_data() const
{
    return call_policy.is_set
	|| install_protocol_eq.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(call_policy.yfilter)
	|| ydk::is_set(install_protocol_eq.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_policy.is_set || is_set(call_policy.yfilter)) leaf_name_data.push_back(call_policy.get_name_leafdata());
    if (install_protocol_eq.is_set || is_set(install_protocol_eq.yfilter)) leaf_name_data.push_back(install_protocol_eq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "call-policy")
    {
        call_policy = value;
        call_policy.value_namespace = name_space;
        call_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-protocol-eq")
    {
        install_protocol_eq = value;
        install_protocol_eq.value_namespace = name_space;
        install_protocol_eq.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "call-policy")
    {
        call_policy.yfilter = yfilter;
    }
    if(value_path == "install-protocol-eq")
    {
        install_protocol_eq.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "call-policy" || name == "install-protocol-eq")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::MatchInterface()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "match-interface"; yang_parent_name = "conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::~MatchInterface()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "match-interface"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "match-interface"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::MatchPrefixSet()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "match-prefix-set"; yang_parent_name = "conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::~MatchPrefixSet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-prefix-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::Config()
    :
    prefix_set{YType::str, "prefix-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "config"; yang_parent_name = "match-prefix-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::has_data() const
{
    return prefix_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_set.is_set || is_set(prefix_set.yfilter)) leaf_name_data.push_back(prefix_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-set")
    {
        prefix_set = value;
        prefix_set.value_namespace = name_space;
        prefix_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-set")
    {
        prefix_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::State()
    :
    prefix_set{YType::str, "prefix-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "state"; yang_parent_name = "match-prefix-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::has_data() const
{
    return prefix_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_set.is_set || is_set(prefix_set.yfilter)) leaf_name_data.push_back(prefix_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-set")
    {
        prefix_set = value;
        prefix_set.value_namespace = name_space;
        prefix_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-set")
    {
        prefix_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::MatchNeighborSet()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "match-neighbor-set"; yang_parent_name = "conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::~MatchNeighborSet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-neighbor-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::Config()
    :
    neighbor_set{YType::str, "neighbor-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "config"; yang_parent_name = "match-neighbor-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::has_data() const
{
    return neighbor_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_set.is_set || is_set(neighbor_set.yfilter)) leaf_name_data.push_back(neighbor_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-set")
    {
        neighbor_set = value;
        neighbor_set.value_namespace = name_space;
        neighbor_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-set")
    {
        neighbor_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::State()
    :
    neighbor_set{YType::str, "neighbor-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "state"; yang_parent_name = "match-neighbor-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::has_data() const
{
    return neighbor_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_set.is_set || is_set(neighbor_set.yfilter)) leaf_name_data.push_back(neighbor_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-set")
    {
        neighbor_set = value;
        neighbor_set.value_namespace = name_space;
        neighbor_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-set")
    {
        neighbor_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::MatchTagSet()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "match-tag-set"; yang_parent_name = "conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::~MatchTagSet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-tag-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::Config()
    :
    tag_set{YType::str, "tag-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "config"; yang_parent_name = "match-tag-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::has_data() const
{
    return tag_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_set.is_set || is_set(tag_set.yfilter)) leaf_name_data.push_back(tag_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-set")
    {
        tag_set = value;
        tag_set.value_namespace = name_space;
        tag_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-set")
    {
        tag_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::State()
    :
    tag_set{YType::str, "tag-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "state"; yang_parent_name = "match-tag-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::has_data() const
{
    return tag_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_set.is_set || is_set(tag_set.yfilter)) leaf_name_data.push_back(tag_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-set")
    {
        tag_set = value;
        tag_set.value_namespace = name_space;
        tag_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-set")
    {
        tag_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::IgpConditions()
{

    yang_name = "igp-conditions"; yang_parent_name = "conditions"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-conditions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::BgpConditions()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State>())
	,community_count(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount>())
	,as_path_length(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength>())
	,match_community_set(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet>())
	,match_ext_community_set(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet>())
	,match_as_path_set(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet>())
{
    config->parent = this;
    state->parent = this;
    community_count->parent = this;
    as_path_length->parent = this;
    match_community_set->parent = this;
    match_ext_community_set->parent = this;
    match_as_path_set->parent = this;

    yang_name = "bgp-conditions"; yang_parent_name = "conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::~BgpConditions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (community_count !=  nullptr && community_count->has_data())
	|| (as_path_length !=  nullptr && as_path_length->has_data())
	|| (match_community_set !=  nullptr && match_community_set->has_data())
	|| (match_ext_community_set !=  nullptr && match_ext_community_set->has_data())
	|| (match_as_path_set !=  nullptr && match_as_path_set->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (community_count !=  nullptr && community_count->has_operation())
	|| (as_path_length !=  nullptr && as_path_length->has_operation())
	|| (match_community_set !=  nullptr && match_community_set->has_operation())
	|| (match_ext_community_set !=  nullptr && match_ext_community_set->has_operation())
	|| (match_as_path_set !=  nullptr && match_as_path_set->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp-policy:bgp-conditions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State>();
        }
        return state;
    }

    if(child_yang_name == "community-count")
    {
        if(community_count == nullptr)
        {
            community_count = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount>();
        }
        return community_count;
    }

    if(child_yang_name == "as-path-length")
    {
        if(as_path_length == nullptr)
        {
            as_path_length = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength>();
        }
        return as_path_length;
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

    if(child_yang_name == "match-as-path-set")
    {
        if(match_as_path_set == nullptr)
        {
            match_as_path_set = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet>();
        }
        return match_as_path_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(community_count != nullptr)
    {
        children["community-count"] = community_count;
    }

    if(as_path_length != nullptr)
    {
        children["as-path-length"] = as_path_length;
    }

    if(match_community_set != nullptr)
    {
        children["match-community-set"] = match_community_set;
    }

    if(match_ext_community_set != nullptr)
    {
        children["match-ext-community-set"] = match_ext_community_set;
    }

    if(match_as_path_set != nullptr)
    {
        children["match-as-path-set"] = match_as_path_set;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "community-count" || name == "as-path-length" || name == "match-community-set" || name == "match-ext-community-set" || name == "match-as-path-set")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::Config()
    :
    med_eq{YType::uint32, "med-eq"},
    origin_eq{YType::enumeration, "origin-eq"},
    next_hop_in{YType::str, "next-hop-in"},
    afi_safi_in{YType::identityref, "afi-safi-in"},
    local_pref_eq{YType::uint32, "local-pref-eq"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "config"; yang_parent_name = "bgp-conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::has_data() const
{
    for (auto const & leaf : next_hop_in.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : afi_safi_in.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return med_eq.is_set
	|| origin_eq.is_set
	|| local_pref_eq.is_set
	|| route_type.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::has_operation() const
{
    for (auto const & leaf : next_hop_in.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : afi_safi_in.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(med_eq.yfilter)
	|| ydk::is_set(origin_eq.yfilter)
	|| ydk::is_set(next_hop_in.yfilter)
	|| ydk::is_set(afi_safi_in.yfilter)
	|| ydk::is_set(local_pref_eq.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (med_eq.is_set || is_set(med_eq.yfilter)) leaf_name_data.push_back(med_eq.get_name_leafdata());
    if (origin_eq.is_set || is_set(origin_eq.yfilter)) leaf_name_data.push_back(origin_eq.get_name_leafdata());
    if (local_pref_eq.is_set || is_set(local_pref_eq.yfilter)) leaf_name_data.push_back(local_pref_eq.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    auto next_hop_in_name_datas = next_hop_in.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), next_hop_in_name_datas.begin(), next_hop_in_name_datas.end());
    auto afi_safi_in_name_datas = afi_safi_in.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), afi_safi_in_name_datas.begin(), afi_safi_in_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "med-eq")
    {
        med_eq = value;
        med_eq.value_namespace = name_space;
        med_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-eq")
    {
        origin_eq = value;
        origin_eq.value_namespace = name_space;
        origin_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-in")
    {
        next_hop_in.append(value);
    }
    if(value_path == "afi-safi-in")
    {
        Identity identity{name_space, name_space_prefix, value};
        afi_safi_in.append(identity);
    }
    if(value_path == "local-pref-eq")
    {
        local_pref_eq = value;
        local_pref_eq.value_namespace = name_space;
        local_pref_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "med-eq")
    {
        med_eq.yfilter = yfilter;
    }
    if(value_path == "origin-eq")
    {
        origin_eq.yfilter = yfilter;
    }
    if(value_path == "next-hop-in")
    {
        next_hop_in.yfilter = yfilter;
    }
    if(value_path == "afi-safi-in")
    {
        afi_safi_in.yfilter = yfilter;
    }
    if(value_path == "local-pref-eq")
    {
        local_pref_eq.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "med-eq" || name == "origin-eq" || name == "next-hop-in" || name == "afi-safi-in" || name == "local-pref-eq" || name == "route-type")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::State()
    :
    med_eq{YType::uint32, "med-eq"},
    origin_eq{YType::enumeration, "origin-eq"},
    next_hop_in{YType::str, "next-hop-in"},
    afi_safi_in{YType::identityref, "afi-safi-in"},
    local_pref_eq{YType::uint32, "local-pref-eq"},
    route_type{YType::enumeration, "route-type"}
{

    yang_name = "state"; yang_parent_name = "bgp-conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::has_data() const
{
    for (auto const & leaf : next_hop_in.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : afi_safi_in.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return med_eq.is_set
	|| origin_eq.is_set
	|| local_pref_eq.is_set
	|| route_type.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::has_operation() const
{
    for (auto const & leaf : next_hop_in.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : afi_safi_in.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(med_eq.yfilter)
	|| ydk::is_set(origin_eq.yfilter)
	|| ydk::is_set(next_hop_in.yfilter)
	|| ydk::is_set(afi_safi_in.yfilter)
	|| ydk::is_set(local_pref_eq.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (med_eq.is_set || is_set(med_eq.yfilter)) leaf_name_data.push_back(med_eq.get_name_leafdata());
    if (origin_eq.is_set || is_set(origin_eq.yfilter)) leaf_name_data.push_back(origin_eq.get_name_leafdata());
    if (local_pref_eq.is_set || is_set(local_pref_eq.yfilter)) leaf_name_data.push_back(local_pref_eq.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    auto next_hop_in_name_datas = next_hop_in.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), next_hop_in_name_datas.begin(), next_hop_in_name_datas.end());
    auto afi_safi_in_name_datas = afi_safi_in.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), afi_safi_in_name_datas.begin(), afi_safi_in_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "med-eq")
    {
        med_eq = value;
        med_eq.value_namespace = name_space;
        med_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-eq")
    {
        origin_eq = value;
        origin_eq.value_namespace = name_space;
        origin_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-in")
    {
        next_hop_in.append(value);
    }
    if(value_path == "afi-safi-in")
    {
        Identity identity{name_space, name_space_prefix, value};
        afi_safi_in.append(identity);
    }
    if(value_path == "local-pref-eq")
    {
        local_pref_eq = value;
        local_pref_eq.value_namespace = name_space;
        local_pref_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "med-eq")
    {
        med_eq.yfilter = yfilter;
    }
    if(value_path == "origin-eq")
    {
        origin_eq.yfilter = yfilter;
    }
    if(value_path == "next-hop-in")
    {
        next_hop_in.yfilter = yfilter;
    }
    if(value_path == "afi-safi-in")
    {
        afi_safi_in.yfilter = yfilter;
    }
    if(value_path == "local-pref-eq")
    {
        local_pref_eq.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "med-eq" || name == "origin-eq" || name == "next-hop-in" || name == "afi-safi-in" || name == "local-pref-eq" || name == "route-type")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::CommunityCount()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "community-count"; yang_parent_name = "bgp-conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::~CommunityCount()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::Config()
    :
    operator_{YType::identityref, "operator"},
    value_{YType::uint32, "value"}
{

    yang_name = "config"; yang_parent_name = "community-count"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::has_data() const
{
    return operator_.is_set
	|| value_.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::State()
    :
    operator_{YType::identityref, "operator"},
    value_{YType::uint32, "value"}
{

    yang_name = "state"; yang_parent_name = "community-count"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::has_data() const
{
    return operator_.is_set
	|| value_.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::AsPathLength()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "as-path-length"; yang_parent_name = "bgp-conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::~AsPathLength()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::Config()
    :
    operator_{YType::identityref, "operator"},
    value_{YType::uint32, "value"}
{

    yang_name = "config"; yang_parent_name = "as-path-length"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::has_data() const
{
    return operator_.is_set
	|| value_.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::State()
    :
    operator_{YType::identityref, "operator"},
    value_{YType::uint32, "value"}
{

    yang_name = "state"; yang_parent_name = "as-path-length"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::has_data() const
{
    return operator_.is_set
	|| value_.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::MatchCommunitySet()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "match-community-set"; yang_parent_name = "bgp-conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::~MatchCommunitySet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-community-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::Config()
    :
    community_set{YType::str, "community-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "config"; yang_parent_name = "match-community-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::has_data() const
{
    return community_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set.is_set || is_set(community_set.yfilter)) leaf_name_data.push_back(community_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-set")
    {
        community_set = value;
        community_set.value_namespace = name_space;
        community_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-set")
    {
        community_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::State()
    :
    community_set{YType::str, "community-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "state"; yang_parent_name = "match-community-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::has_data() const
{
    return community_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set.is_set || is_set(community_set.yfilter)) leaf_name_data.push_back(community_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-set")
    {
        community_set = value;
        community_set.value_namespace = name_space;
        community_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-set")
    {
        community_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::MatchExtCommunitySet()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "match-ext-community-set"; yang_parent_name = "bgp-conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::~MatchExtCommunitySet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-ext-community-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::Config()
    :
    ext_community_set{YType::str, "ext-community-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "config"; yang_parent_name = "match-ext-community-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::has_data() const
{
    return ext_community_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_community_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set.is_set || is_set(ext_community_set.yfilter)) leaf_name_data.push_back(ext_community_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-community-set")
    {
        ext_community_set = value;
        ext_community_set.value_namespace = name_space;
        ext_community_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-community-set")
    {
        ext_community_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::State()
    :
    ext_community_set{YType::str, "ext-community-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "state"; yang_parent_name = "match-ext-community-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::has_data() const
{
    return ext_community_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_community_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set.is_set || is_set(ext_community_set.yfilter)) leaf_name_data.push_back(ext_community_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-community-set")
    {
        ext_community_set = value;
        ext_community_set.value_namespace = name_space;
        ext_community_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-community-set")
    {
        ext_community_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::MatchAsPathSet()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "match-as-path-set"; yang_parent_name = "bgp-conditions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::~MatchAsPathSet()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-as-path-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::Config()
    :
    as_path_set{YType::str, "as-path-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "config"; yang_parent_name = "match-as-path-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::has_data() const
{
    return as_path_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_path_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_set.is_set || is_set(as_path_set.yfilter)) leaf_name_data.push_back(as_path_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-path-set")
    {
        as_path_set = value;
        as_path_set.value_namespace = name_space;
        as_path_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-path-set")
    {
        as_path_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-path-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::State()
    :
    as_path_set{YType::str, "as-path-set"},
    match_set_options{YType::enumeration, "match-set-options"}
{

    yang_name = "state"; yang_parent_name = "match-as-path-set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::has_data() const
{
    return as_path_set.is_set
	|| match_set_options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_path_set.yfilter)
	|| ydk::is_set(match_set_options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_set.is_set || is_set(as_path_set.yfilter)) leaf_name_data.push_back(as_path_set.get_name_leafdata());
    if (match_set_options.is_set || is_set(match_set_options.yfilter)) leaf_name_data.push_back(match_set_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-path-set")
    {
        as_path_set = value;
        as_path_set.value_namespace = name_space;
        as_path_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-set-options")
    {
        match_set_options = value;
        match_set_options.value_namespace = name_space;
        match_set_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-path-set")
    {
        as_path_set.yfilter = yfilter;
    }
    if(value_path == "match-set-options")
    {
        match_set_options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-path-set" || name == "match-set-options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Actions()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State>())
	,igp_actions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions>())
	,bgp_actions(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions>())
{
    config->parent = this;
    state->parent = this;
    igp_actions->parent = this;
    bgp_actions->parent = this;

    yang_name = "actions"; yang_parent_name = "statement"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::~Actions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (igp_actions !=  nullptr && igp_actions->has_data())
	|| (bgp_actions !=  nullptr && bgp_actions->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (igp_actions !=  nullptr && igp_actions->has_operation())
	|| (bgp_actions !=  nullptr && bgp_actions->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State>();
        }
        return state;
    }

    if(child_yang_name == "igp-actions")
    {
        if(igp_actions == nullptr)
        {
            igp_actions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions>();
        }
        return igp_actions;
    }

    if(child_yang_name == "openconfig-bgp-policy:bgp-actions")
    {
        if(bgp_actions == nullptr)
        {
            bgp_actions = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions>();
        }
        return bgp_actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(igp_actions != nullptr)
    {
        children["igp-actions"] = igp_actions;
    }

    if(bgp_actions != nullptr)
    {
        children["openconfig-bgp-policy:bgp-actions"] = bgp_actions;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "igp-actions" || name == "bgp-actions")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::Config()
    :
    accept_route{YType::empty, "accept-route"},
    reject_route{YType::empty, "reject-route"}
{

    yang_name = "config"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::has_data() const
{
    return accept_route.is_set
	|| reject_route.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_route.yfilter)
	|| ydk::is_set(reject_route.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_route.is_set || is_set(accept_route.yfilter)) leaf_name_data.push_back(accept_route.get_name_leafdata());
    if (reject_route.is_set || is_set(reject_route.yfilter)) leaf_name_data.push_back(reject_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-route")
    {
        accept_route = value;
        accept_route.value_namespace = name_space;
        accept_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reject-route")
    {
        reject_route = value;
        reject_route.value_namespace = name_space;
        reject_route.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-route")
    {
        accept_route.yfilter = yfilter;
    }
    if(value_path == "reject-route")
    {
        reject_route.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-route" || name == "reject-route")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::State()
    :
    accept_route{YType::empty, "accept-route"},
    reject_route{YType::empty, "reject-route"}
{

    yang_name = "state"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::has_data() const
{
    return accept_route.is_set
	|| reject_route.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_route.yfilter)
	|| ydk::is_set(reject_route.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_route.is_set || is_set(accept_route.yfilter)) leaf_name_data.push_back(accept_route.get_name_leafdata());
    if (reject_route.is_set || is_set(reject_route.yfilter)) leaf_name_data.push_back(reject_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-route")
    {
        accept_route = value;
        accept_route.value_namespace = name_space;
        accept_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reject-route")
    {
        reject_route = value;
        reject_route.value_namespace = name_space;
        reject_route.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-route")
    {
        accept_route.yfilter = yfilter;
    }
    if(value_path == "reject-route")
    {
        reject_route.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-route" || name == "reject-route")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::IgpActions()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "igp-actions"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::~IgpActions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::Config()
    :
    set_tag{YType::str, "set-tag"}
{

    yang_name = "config"; yang_parent_name = "igp-actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::has_data() const
{
    return set_tag.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-tag")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::State()
    :
    set_tag{YType::str, "set-tag"}
{

    yang_name = "state"; yang_parent_name = "igp-actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::has_data() const
{
    return set_tag.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-tag")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::BgpActions()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State>())
	,set_as_path_prepend(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend>())
	,set_community(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity>())
	,set_ext_community(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity>())
{
    config->parent = this;
    state->parent = this;
    set_as_path_prepend->parent = this;
    set_community->parent = this;
    set_ext_community->parent = this;

    yang_name = "bgp-actions"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::~BgpActions()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (set_as_path_prepend !=  nullptr && set_as_path_prepend->has_data())
	|| (set_community !=  nullptr && set_community->has_data())
	|| (set_ext_community !=  nullptr && set_ext_community->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
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

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State>();
        }
        return state;
    }

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
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

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

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "set-as-path-prepend" || name == "set-community" || name == "set-ext-community")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::Config()
    :
    set_route_origin{YType::enumeration, "set-route-origin"},
    set_local_pref{YType::uint32, "set-local-pref"},
    set_next_hop{YType::str, "set-next-hop"},
    set_med{YType::str, "set-med"}
{

    yang_name = "config"; yang_parent_name = "bgp-actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::has_data() const
{
    return set_route_origin.is_set
	|| set_local_pref.is_set
	|| set_next_hop.is_set
	|| set_med.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_route_origin.yfilter)
	|| ydk::is_set(set_local_pref.yfilter)
	|| ydk::is_set(set_next_hop.yfilter)
	|| ydk::is_set(set_med.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_route_origin.is_set || is_set(set_route_origin.yfilter)) leaf_name_data.push_back(set_route_origin.get_name_leafdata());
    if (set_local_pref.is_set || is_set(set_local_pref.yfilter)) leaf_name_data.push_back(set_local_pref.get_name_leafdata());
    if (set_next_hop.is_set || is_set(set_next_hop.yfilter)) leaf_name_data.push_back(set_next_hop.get_name_leafdata());
    if (set_med.is_set || is_set(set_med.yfilter)) leaf_name_data.push_back(set_med.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-route-origin")
    {
        set_route_origin = value;
        set_route_origin.value_namespace = name_space;
        set_route_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-local-pref")
    {
        set_local_pref = value;
        set_local_pref.value_namespace = name_space;
        set_local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-next-hop")
    {
        set_next_hop = value;
        set_next_hop.value_namespace = name_space;
        set_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-med")
    {
        set_med = value;
        set_med.value_namespace = name_space;
        set_med.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-route-origin")
    {
        set_route_origin.yfilter = yfilter;
    }
    if(value_path == "set-local-pref")
    {
        set_local_pref.yfilter = yfilter;
    }
    if(value_path == "set-next-hop")
    {
        set_next_hop.yfilter = yfilter;
    }
    if(value_path == "set-med")
    {
        set_med.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-route-origin" || name == "set-local-pref" || name == "set-next-hop" || name == "set-med")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::State()
    :
    set_route_origin{YType::enumeration, "set-route-origin"},
    set_local_pref{YType::uint32, "set-local-pref"},
    set_next_hop{YType::str, "set-next-hop"},
    set_med{YType::str, "set-med"}
{

    yang_name = "state"; yang_parent_name = "bgp-actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::has_data() const
{
    return set_route_origin.is_set
	|| set_local_pref.is_set
	|| set_next_hop.is_set
	|| set_med.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_route_origin.yfilter)
	|| ydk::is_set(set_local_pref.yfilter)
	|| ydk::is_set(set_next_hop.yfilter)
	|| ydk::is_set(set_med.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_route_origin.is_set || is_set(set_route_origin.yfilter)) leaf_name_data.push_back(set_route_origin.get_name_leafdata());
    if (set_local_pref.is_set || is_set(set_local_pref.yfilter)) leaf_name_data.push_back(set_local_pref.get_name_leafdata());
    if (set_next_hop.is_set || is_set(set_next_hop.yfilter)) leaf_name_data.push_back(set_next_hop.get_name_leafdata());
    if (set_med.is_set || is_set(set_med.yfilter)) leaf_name_data.push_back(set_med.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-route-origin")
    {
        set_route_origin = value;
        set_route_origin.value_namespace = name_space;
        set_route_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-local-pref")
    {
        set_local_pref = value;
        set_local_pref.value_namespace = name_space;
        set_local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-next-hop")
    {
        set_next_hop = value;
        set_next_hop.value_namespace = name_space;
        set_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-med")
    {
        set_med = value;
        set_med.value_namespace = name_space;
        set_med.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-route-origin")
    {
        set_route_origin.yfilter = yfilter;
    }
    if(value_path == "set-local-pref")
    {
        set_local_pref.yfilter = yfilter;
    }
    if(value_path == "set-next-hop")
    {
        set_next_hop.yfilter = yfilter;
    }
    if(value_path == "set-med")
    {
        set_med.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-route-origin" || name == "set-local-pref" || name == "set-next-hop" || name == "set-med")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::SetAsPathPrepend()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "set-as-path-prepend"; yang_parent_name = "bgp-actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::~SetAsPathPrepend()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-as-path-prepend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::Config()
    :
    repeat_n{YType::uint8, "repeat-n"}
{

    yang_name = "config"; yang_parent_name = "set-as-path-prepend"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::has_data() const
{
    return repeat_n.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repeat_n.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repeat_n.is_set || is_set(repeat_n.yfilter)) leaf_name_data.push_back(repeat_n.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repeat-n")
    {
        repeat_n = value;
        repeat_n.value_namespace = name_space;
        repeat_n.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repeat-n")
    {
        repeat_n.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repeat-n")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::State()
    :
    repeat_n{YType::uint8, "repeat-n"}
{

    yang_name = "state"; yang_parent_name = "set-as-path-prepend"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::has_data() const
{
    return repeat_n.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repeat_n.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repeat_n.is_set || is_set(repeat_n.yfilter)) leaf_name_data.push_back(repeat_n.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repeat-n")
    {
        repeat_n = value;
        repeat_n.value_namespace = name_space;
        repeat_n.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repeat-n")
    {
        repeat_n.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repeat-n")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::SetCommunity()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State>())
	,inline_(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_>())
	,reference(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference>())
{
    config->parent = this;
    state->parent = this;
    inline_->parent = this;
    reference->parent = this;

    yang_name = "set-community"; yang_parent_name = "bgp-actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::~SetCommunity()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (inline_ !=  nullptr && inline_->has_data())
	|| (reference !=  nullptr && reference->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (inline_ !=  nullptr && inline_->has_operation())
	|| (reference !=  nullptr && reference->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State>();
        }
        return state;
    }

    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_>();
        }
        return inline_;
    }

    if(child_yang_name == "reference")
    {
        if(reference == nullptr)
        {
            reference = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference>();
        }
        return reference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(inline_ != nullptr)
    {
        children["inline"] = inline_;
    }

    if(reference != nullptr)
    {
        children["reference"] = reference;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "inline" || name == "reference")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::Config()
    :
    method{YType::enumeration, "method"},
    options{YType::enumeration, "options"}
{

    yang_name = "config"; yang_parent_name = "set-community"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::has_data() const
{
    return method.is_set
	|| options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::State()
    :
    method{YType::enumeration, "method"},
    options{YType::enumeration, "options"}
{

    yang_name = "state"; yang_parent_name = "set-community"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::has_data() const
{
    return method.is_set
	|| options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Inline_()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "inline"; yang_parent_name = "set-community"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::~Inline_()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::Config()
    :
    communities{YType::str, "communities"}
{

    yang_name = "config"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::has_data() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::has_operation() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(communities.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto communities_name_datas = communities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), communities_name_datas.begin(), communities_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communities")
    {
        communities.append(value);
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communities")
    {
        communities.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "communities")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::State()
    :
    communities{YType::str, "communities"}
{

    yang_name = "state"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::has_data() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::has_operation() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(communities.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto communities_name_datas = communities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), communities_name_datas.begin(), communities_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communities")
    {
        communities.append(value);
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communities")
    {
        communities.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "communities")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Reference()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "reference"; yang_parent_name = "set-community"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::~Reference()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::Config()
    :
    community_set_ref{YType::str, "community-set-ref"}
{

    yang_name = "config"; yang_parent_name = "reference"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::has_data() const
{
    return community_set_ref.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_set_ref.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set_ref.is_set || is_set(community_set_ref.yfilter)) leaf_name_data.push_back(community_set_ref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-set-ref")
    {
        community_set_ref = value;
        community_set_ref.value_namespace = name_space;
        community_set_ref.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-set-ref")
    {
        community_set_ref.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-set-ref")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::State()
    :
    community_set_ref{YType::str, "community-set-ref"}
{

    yang_name = "state"; yang_parent_name = "reference"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::has_data() const
{
    return community_set_ref.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_set_ref.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_set_ref.is_set || is_set(community_set_ref.yfilter)) leaf_name_data.push_back(community_set_ref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-set-ref")
    {
        community_set_ref = value;
        community_set_ref.value_namespace = name_space;
        community_set_ref.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-set-ref")
    {
        community_set_ref.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-set-ref")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::SetExtCommunity()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State>())
	,inline_(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_>())
	,reference(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference>())
{
    config->parent = this;
    state->parent = this;
    inline_->parent = this;
    reference->parent = this;

    yang_name = "set-ext-community"; yang_parent_name = "bgp-actions"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::~SetExtCommunity()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (inline_ !=  nullptr && inline_->has_data())
	|| (reference !=  nullptr && reference->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (inline_ !=  nullptr && inline_->has_operation())
	|| (reference !=  nullptr && reference->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State>();
        }
        return state;
    }

    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_>();
        }
        return inline_;
    }

    if(child_yang_name == "reference")
    {
        if(reference == nullptr)
        {
            reference = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference>();
        }
        return reference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(inline_ != nullptr)
    {
        children["inline"] = inline_;
    }

    if(reference != nullptr)
    {
        children["reference"] = reference;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "inline" || name == "reference")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::Config()
    :
    method{YType::enumeration, "method"},
    options{YType::enumeration, "options"}
{

    yang_name = "config"; yang_parent_name = "set-ext-community"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::has_data() const
{
    return method.is_set
	|| options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::State()
    :
    method{YType::enumeration, "method"},
    options{YType::enumeration, "options"}
{

    yang_name = "state"; yang_parent_name = "set-ext-community"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::has_data() const
{
    return method.is_set
	|| options.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "options")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Inline_()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "inline"; yang_parent_name = "set-ext-community"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::~Inline_()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::Config()
    :
    communities{YType::str, "communities"}
{

    yang_name = "config"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::has_data() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::has_operation() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(communities.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto communities_name_datas = communities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), communities_name_datas.begin(), communities_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communities")
    {
        communities.append(value);
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communities")
    {
        communities.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "communities")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::State()
    :
    communities{YType::str, "communities"}
{

    yang_name = "state"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::has_data() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::has_operation() const
{
    for (auto const & leaf : communities.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(communities.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto communities_name_datas = communities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), communities_name_datas.begin(), communities_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communities")
    {
        communities.append(value);
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communities")
    {
        communities.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "communities")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Reference()
    :
    config(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config>())
	,state(std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "reference"; yang_parent_name = "set-ext-community"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::~Reference()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::Config()
    :
    ext_community_set_ref{YType::str, "ext-community-set-ref"}
{

    yang_name = "config"; yang_parent_name = "reference"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::~Config()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::has_data() const
{
    return ext_community_set_ref.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_community_set_ref.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set_ref.is_set || is_set(ext_community_set_ref.yfilter)) leaf_name_data.push_back(ext_community_set_ref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-community-set-ref")
    {
        ext_community_set_ref = value;
        ext_community_set_ref.value_namespace = name_space;
        ext_community_set_ref.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-community-set-ref")
    {
        ext_community_set_ref.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community-set-ref")
        return true;
    return false;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::State()
    :
    ext_community_set_ref{YType::str, "ext-community-set-ref"}
{

    yang_name = "state"; yang_parent_name = "reference"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::~State()
{
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::has_data() const
{
    return ext_community_set_ref.is_set;
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ext_community_set_ref.yfilter);
}

std::string RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_community_set_ref.is_set || is_set(ext_community_set_ref.yfilter)) leaf_name_data.push_back(ext_community_set_ref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ext-community-set-ref")
    {
        ext_community_set_ref = value;
        ext_community_set_ref.value_namespace = name_space;
        ext_community_set_ref.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ext-community-set-ref")
    {
        ext_community_set_ref.yfilter = yfilter;
    }
}

bool RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community-set-ref")
        return true;
    return false;
}

const Enum::YLeaf DefaultPolicyType::ACCEPT_ROUTE {0, "ACCEPT_ROUTE"};
const Enum::YLeaf DefaultPolicyType::REJECT_ROUTE {1, "REJECT_ROUTE"};

const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::RouteType::INTERNAL {0, "INTERNAL"};
const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::RouteType::EXTERNAL {1, "EXTERNAL"};

const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::RouteType::INTERNAL {0, "INTERNAL"};
const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::RouteType::EXTERNAL {1, "EXTERNAL"};

const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::Method::INLINE {0, "INLINE"};
const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::Method::REFERENCE {1, "REFERENCE"};

const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::Method::INLINE {0, "INLINE"};
const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::Method::REFERENCE {1, "REFERENCE"};

const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::Method::INLINE {0, "INLINE"};
const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::Method::REFERENCE {1, "REFERENCE"};

const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::Method::INLINE {0, "INLINE"};
const Enum::YLeaf RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::Method::REFERENCE {1, "REFERENCE"};


}
}

