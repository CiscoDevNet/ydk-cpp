
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_2.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_bgp {

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::has_data() const
{
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_children() const
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

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config>())
	,state(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_children() const
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

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::has_data() const
{
    return maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::has_data() const
{
    return maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::has_data() const
{
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}


}
}

