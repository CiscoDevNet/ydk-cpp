
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_network_instance_1.hpp"
#include "openconfig_network_instance_2.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_network_instance {

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_data() const
{
    return maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_data() const
{
    return maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::~ApplyPolicy()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::has_data() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::has_data() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>())
	,config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::~Ipv4Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_data() const
{
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_data() const
{
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
	,config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_data() const
{
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_data() const
{
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::Ipv4LabeledUnicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv4-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::~Ipv4LabeledUnicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::Ipv6LabeledUnicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv6-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::~Ipv6LabeledUnicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::L3VpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::~L3VpnIpv4Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::L3VpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::~L3VpnIpv6Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::L3VpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::~L3VpnIpv4Multicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::L3VpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::~L3VpnIpv6Multicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::L2VpnVpls()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::~L2VpnVpls()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::L2VpnEvpn()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::~L2VpnEvpn()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::~ApplyPolicy()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::has_data() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::has_data() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::~Neighbors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State>())
	,timers(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers>())
	,transport(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport>())
	,error_handling(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling>())
	,graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart>())
	,logging_options(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions>())
	,ebgp_multihop(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop>())
	,route_reflector(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector>())
	,as_path_options(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions>())
	,add_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths>())
	,use_multiple_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths>())
	,apply_policy(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy>())
	,afi_safis(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis>())
{
    config->parent = this;
    state->parent = this;
    timers->parent = this;
    transport->parent = this;
    error_handling->parent = this;
    graceful_restart->parent = this;
    logging_options->parent = this;
    ebgp_multihop->parent = this;
    route_reflector->parent = this;
    as_path_options->parent = this;
    add_paths->parent = this;
    use_multiple_paths->parent = this;
    apply_policy->parent = this;
    afi_safis->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::~Neighbor()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (error_handling !=  nullptr && error_handling->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (logging_options !=  nullptr && logging_options->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (route_reflector !=  nullptr && route_reflector->has_data())
	|| (as_path_options !=  nullptr && as_path_options->has_data())
	|| (add_paths !=  nullptr && add_paths->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (afi_safis !=  nullptr && afi_safis->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (error_handling !=  nullptr && error_handling->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (logging_options !=  nullptr && logging_options->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (route_reflector !=  nullptr && route_reflector->has_operation())
	|| (as_path_options !=  nullptr && as_path_options->has_operation())
	|| (add_paths !=  nullptr && add_paths->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (afi_safis !=  nullptr && afi_safis->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State>();
        }
        return state;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "error-handling")
    {
        if(error_handling == nullptr)
        {
            error_handling = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling>();
        }
        return error_handling;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "logging-options")
    {
        if(logging_options == nullptr)
        {
            logging_options = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions>();
        }
        return logging_options;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "route-reflector")
    {
        if(route_reflector == nullptr)
        {
            route_reflector = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector>();
        }
        return route_reflector;
    }

    if(child_yang_name == "as-path-options")
    {
        if(as_path_options == nullptr)
        {
            as_path_options = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions>();
        }
        return as_path_options;
    }

    if(child_yang_name == "add-paths")
    {
        if(add_paths == nullptr)
        {
            add_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths>();
        }
        return add_paths;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis>();
        }
        return afi_safis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(error_handling != nullptr)
    {
        children["error-handling"] = error_handling;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(logging_options != nullptr)
    {
        children["logging-options"] = logging_options;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(route_reflector != nullptr)
    {
        children["route-reflector"] = route_reflector;
    }

    if(as_path_options != nullptr)
    {
        children["as-path-options"] = as_path_options;
    }

    if(add_paths != nullptr)
    {
        children["add-paths"] = add_paths;
    }

    if(use_multiple_paths != nullptr)
    {
        children["use-multiple-paths"] = use_multiple_paths;
    }

    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    if(afi_safis != nullptr)
    {
        children["afi-safis"] = afi_safis;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "timers" || name == "transport" || name == "error-handling" || name == "graceful-restart" || name == "logging-options" || name == "ebgp-multihop" || name == "route-reflector" || name == "as-path-options" || name == "add-paths" || name == "use-multiple-paths" || name == "apply-policy" || name == "afi-safis" || name == "neighbor-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::Config()
    :
    peer_group{YType::str, "peer-group"},
    neighbor_address{YType::str, "neighbor-address"},
    enabled{YType::boolean, "enabled"},
    peer_as{YType::uint32, "peer-as"},
    local_as{YType::uint32, "local-as"},
    peer_type{YType::enumeration, "peer-type"},
    auth_password{YType::str, "auth-password"},
    remove_private_as{YType::identityref, "remove-private-as"},
    route_flap_damping{YType::boolean, "route-flap-damping"},
    send_community{YType::enumeration, "send-community"},
    description{YType::str, "description"}
{

    yang_name = "config"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::has_data() const
{
    return peer_group.is_set
	|| neighbor_address.is_set
	|| enabled.is_set
	|| peer_as.is_set
	|| local_as.is_set
	|| peer_type.is_set
	|| auth_password.is_set
	|| remove_private_as.is_set
	|| route_flap_damping.is_set
	|| send_community.is_set
	|| description.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(peer_as.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(auth_password.yfilter)
	|| ydk::is_set(remove_private_as.yfilter)
	|| ydk::is_set(route_flap_damping.yfilter)
	|| ydk::is_set(send_community.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (peer_as.is_set || is_set(peer_as.yfilter)) leaf_name_data.push_back(peer_as.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.yfilter)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_flap_damping.is_set || is_set(route_flap_damping.yfilter)) leaf_name_data.push_back(route_flap_damping.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.yfilter)) leaf_name_data.push_back(send_community.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-as")
    {
        peer_as = value;
        peer_as.value_namespace = name_space;
        peer_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
        remove_private_as.value_namespace = name_space;
        remove_private_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping = value;
        route_flap_damping.value_namespace = name_space;
        route_flap_damping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community")
    {
        send_community = value;
        send_community.value_namespace = name_space;
        send_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "peer-as")
    {
        peer_as.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as.yfilter = yfilter;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping.yfilter = yfilter;
    }
    if(value_path == "send-community")
    {
        send_community.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group" || name == "neighbor-address" || name == "enabled" || name == "peer-as" || name == "local-as" || name == "peer-type" || name == "auth-password" || name == "remove-private-as" || name == "route-flap-damping" || name == "send-community" || name == "description")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::State()
    :
    peer_group{YType::str, "peer-group"},
    neighbor_address{YType::str, "neighbor-address"},
    enabled{YType::boolean, "enabled"},
    peer_as{YType::uint32, "peer-as"},
    local_as{YType::uint32, "local-as"},
    peer_type{YType::enumeration, "peer-type"},
    auth_password{YType::str, "auth-password"},
    remove_private_as{YType::identityref, "remove-private-as"},
    route_flap_damping{YType::boolean, "route-flap-damping"},
    send_community{YType::enumeration, "send-community"},
    description{YType::str, "description"},
    session_state{YType::enumeration, "session-state"},
    last_established{YType::uint64, "last-established"},
    established_transitions{YType::uint64, "established-transitions"},
    supported_capabilities{YType::identityref, "supported-capabilities"}
    	,
    messages(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages>())
	,queues(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues>())
{
    messages->parent = this;
    queues->parent = this;

    yang_name = "state"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::has_data() const
{
    for (auto const & leaf : supported_capabilities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return peer_group.is_set
	|| neighbor_address.is_set
	|| enabled.is_set
	|| peer_as.is_set
	|| local_as.is_set
	|| peer_type.is_set
	|| auth_password.is_set
	|| remove_private_as.is_set
	|| route_flap_damping.is_set
	|| send_community.is_set
	|| description.is_set
	|| session_state.is_set
	|| last_established.is_set
	|| established_transitions.is_set
	|| (messages !=  nullptr && messages->has_data())
	|| (queues !=  nullptr && queues->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::has_operation() const
{
    for (auto const & leaf : supported_capabilities.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_group.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(peer_as.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(auth_password.yfilter)
	|| ydk::is_set(remove_private_as.yfilter)
	|| ydk::is_set(route_flap_damping.yfilter)
	|| ydk::is_set(send_community.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(last_established.yfilter)
	|| ydk::is_set(established_transitions.yfilter)
	|| ydk::is_set(supported_capabilities.yfilter)
	|| (messages !=  nullptr && messages->has_operation())
	|| (queues !=  nullptr && queues->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (peer_as.is_set || is_set(peer_as.yfilter)) leaf_name_data.push_back(peer_as.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.yfilter)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_flap_damping.is_set || is_set(route_flap_damping.yfilter)) leaf_name_data.push_back(route_flap_damping.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.yfilter)) leaf_name_data.push_back(send_community.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (last_established.is_set || is_set(last_established.yfilter)) leaf_name_data.push_back(last_established.get_name_leafdata());
    if (established_transitions.is_set || is_set(established_transitions.yfilter)) leaf_name_data.push_back(established_transitions.get_name_leafdata());

    auto supported_capabilities_name_datas = supported_capabilities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), supported_capabilities_name_datas.begin(), supported_capabilities_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "messages")
    {
        if(messages == nullptr)
        {
            messages = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages>();
        }
        return messages;
    }

    if(child_yang_name == "queues")
    {
        if(queues == nullptr)
        {
            queues = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues>();
        }
        return queues;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(messages != nullptr)
    {
        children["messages"] = messages;
    }

    if(queues != nullptr)
    {
        children["queues"] = queues;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-as")
    {
        peer_as = value;
        peer_as.value_namespace = name_space;
        peer_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
        remove_private_as.value_namespace = name_space;
        remove_private_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping = value;
        route_flap_damping.value_namespace = name_space;
        route_flap_damping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community")
    {
        send_community = value;
        send_community.value_namespace = name_space;
        send_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-established")
    {
        last_established = value;
        last_established.value_namespace = name_space;
        last_established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-transitions")
    {
        established_transitions = value;
        established_transitions.value_namespace = name_space;
        established_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supported-capabilities")
    {
        Identity identity{name_space, name_space_prefix, value};
        supported_capabilities.append(identity);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "peer-as")
    {
        peer_as.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as.yfilter = yfilter;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping.yfilter = yfilter;
    }
    if(value_path == "send-community")
    {
        send_community.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "last-established")
    {
        last_established.yfilter = yfilter;
    }
    if(value_path == "established-transitions")
    {
        established_transitions.yfilter = yfilter;
    }
    if(value_path == "supported-capabilities")
    {
        supported_capabilities.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "messages" || name == "queues" || name == "peer-group" || name == "neighbor-address" || name == "enabled" || name == "peer-as" || name == "local-as" || name == "peer-type" || name == "auth-password" || name == "remove-private-as" || name == "route-flap-damping" || name == "send-community" || name == "description" || name == "session-state" || name == "last-established" || name == "established-transitions" || name == "supported-capabilities")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Messages()
    :
    sent(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent>())
	,received(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received>())
{
    sent->parent = this;
    received->parent = this;

    yang_name = "messages"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::~Messages()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::has_data() const
{
    return (sent !=  nullptr && sent->has_data())
	|| (received !=  nullptr && received->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::has_operation() const
{
    return is_set(yfilter)
	|| (sent !=  nullptr && sent->has_operation())
	|| (received !=  nullptr && received->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent>();
        }
        return sent;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received>();
        }
        return received;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sent != nullptr)
    {
        children["sent"] = sent;
    }

    if(received != nullptr)
    {
        children["received"] = received;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::Sent()
    :
    update{YType::uint64, "UPDATE"},
    notification{YType::uint64, "NOTIFICATION"}
{

    yang_name = "sent"; yang_parent_name = "messages"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::~Sent()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::has_data() const
{
    return update.is_set
	|| notification.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter)
	|| ydk::is_set(notification.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());
    if (notification.is_set || is_set(notification.yfilter)) leaf_name_data.push_back(notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "UPDATE")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NOTIFICATION")
    {
        notification = value;
        notification.value_namespace = name_space;
        notification.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "UPDATE")
    {
        update.yfilter = yfilter;
    }
    if(value_path == "NOTIFICATION")
    {
        notification.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UPDATE" || name == "NOTIFICATION")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::Received()
    :
    update{YType::uint64, "UPDATE"},
    notification{YType::uint64, "NOTIFICATION"}
{

    yang_name = "received"; yang_parent_name = "messages"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::~Received()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::has_data() const
{
    return update.is_set
	|| notification.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter)
	|| ydk::is_set(notification.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());
    if (notification.is_set || is_set(notification.yfilter)) leaf_name_data.push_back(notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "UPDATE")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NOTIFICATION")
    {
        notification = value;
        notification.value_namespace = name_space;
        notification.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "UPDATE")
    {
        update.yfilter = yfilter;
    }
    if(value_path == "NOTIFICATION")
    {
        notification.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UPDATE" || name == "NOTIFICATION")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::Queues()
    :
    input{YType::uint32, "input"},
    output{YType::uint32, "output"}
{

    yang_name = "queues"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::~Queues()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queues";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Timers()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::~Timers()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::Config()
    :
    connect_retry{YType::str, "connect-retry"},
    hold_time{YType::str, "hold-time"},
    keepalive_interval{YType::str, "keepalive-interval"},
    minimum_advertisement_interval{YType::str, "minimum-advertisement-interval"}
{

    yang_name = "config"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::has_data() const
{
    return connect_retry.is_set
	|| hold_time.is_set
	|| keepalive_interval.is_set
	|| minimum_advertisement_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connect_retry.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(minimum_advertisement_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_retry.is_set || is_set(connect_retry.yfilter)) leaf_name_data.push_back(connect_retry.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.yfilter)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-retry")
    {
        connect_retry = value;
        connect_retry.value_namespace = name_space;
        connect_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
        minimum_advertisement_interval.value_namespace = name_space;
        minimum_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-retry")
    {
        connect_retry.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect-retry" || name == "hold-time" || name == "keepalive-interval" || name == "minimum-advertisement-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::State()
    :
    connect_retry{YType::str, "connect-retry"},
    hold_time{YType::str, "hold-time"},
    keepalive_interval{YType::str, "keepalive-interval"},
    minimum_advertisement_interval{YType::str, "minimum-advertisement-interval"},
    negotiated_hold_time{YType::str, "negotiated-hold-time"}
{

    yang_name = "state"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::has_data() const
{
    return connect_retry.is_set
	|| hold_time.is_set
	|| keepalive_interval.is_set
	|| minimum_advertisement_interval.is_set
	|| negotiated_hold_time.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connect_retry.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(minimum_advertisement_interval.yfilter)
	|| ydk::is_set(negotiated_hold_time.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_retry.is_set || is_set(connect_retry.yfilter)) leaf_name_data.push_back(connect_retry.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.yfilter)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());
    if (negotiated_hold_time.is_set || is_set(negotiated_hold_time.yfilter)) leaf_name_data.push_back(negotiated_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-retry")
    {
        connect_retry = value;
        connect_retry.value_namespace = name_space;
        connect_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
        minimum_advertisement_interval.value_namespace = name_space;
        minimum_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-hold-time")
    {
        negotiated_hold_time = value;
        negotiated_hold_time.value_namespace = name_space;
        negotiated_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-retry")
    {
        connect_retry.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-hold-time")
    {
        negotiated_hold_time.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect-retry" || name == "hold-time" || name == "keepalive-interval" || name == "minimum-advertisement-interval" || name == "negotiated-hold-time")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Transport()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::~Transport()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::Config()
    :
    tcp_mss{YType::uint16, "tcp-mss"},
    mtu_discovery{YType::boolean, "mtu-discovery"},
    passive_mode{YType::boolean, "passive-mode"},
    local_address{YType::str, "local-address"}
{

    yang_name = "config"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::has_data() const
{
    return tcp_mss.is_set
	|| mtu_discovery.is_set
	|| passive_mode.is_set
	|| local_address.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_mss.yfilter)
	|| ydk::is_set(mtu_discovery.yfilter)
	|| ydk::is_set(passive_mode.yfilter)
	|| ydk::is_set(local_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss.is_set || is_set(tcp_mss.yfilter)) leaf_name_data.push_back(tcp_mss.get_name_leafdata());
    if (mtu_discovery.is_set || is_set(mtu_discovery.yfilter)) leaf_name_data.push_back(mtu_discovery.get_name_leafdata());
    if (passive_mode.is_set || is_set(passive_mode.yfilter)) leaf_name_data.push_back(passive_mode.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss = value;
        tcp_mss.value_namespace = name_space;
        tcp_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery = value;
        mtu_discovery.value_namespace = name_space;
        mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-mode")
    {
        passive_mode = value;
        passive_mode.value_namespace = name_space;
        passive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss.yfilter = yfilter;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "passive-mode")
    {
        passive_mode.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-mss" || name == "mtu-discovery" || name == "passive-mode" || name == "local-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::State()
    :
    tcp_mss{YType::uint16, "tcp-mss"},
    mtu_discovery{YType::boolean, "mtu-discovery"},
    passive_mode{YType::boolean, "passive-mode"},
    local_address{YType::str, "local-address"},
    local_port{YType::uint16, "local-port"},
    remote_address{YType::str, "remote-address"},
    remote_port{YType::uint16, "remote-port"}
{

    yang_name = "state"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::has_data() const
{
    return tcp_mss.is_set
	|| mtu_discovery.is_set
	|| passive_mode.is_set
	|| local_address.is_set
	|| local_port.is_set
	|| remote_address.is_set
	|| remote_port.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_mss.yfilter)
	|| ydk::is_set(mtu_discovery.yfilter)
	|| ydk::is_set(passive_mode.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(remote_port.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss.is_set || is_set(tcp_mss.yfilter)) leaf_name_data.push_back(tcp_mss.get_name_leafdata());
    if (mtu_discovery.is_set || is_set(mtu_discovery.yfilter)) leaf_name_data.push_back(mtu_discovery.get_name_leafdata());
    if (passive_mode.is_set || is_set(passive_mode.yfilter)) leaf_name_data.push_back(passive_mode.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss = value;
        tcp_mss.value_namespace = name_space;
        tcp_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery = value;
        mtu_discovery.value_namespace = name_space;
        mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-mode")
    {
        passive_mode = value;
        passive_mode.value_namespace = name_space;
        passive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss.yfilter = yfilter;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "passive-mode")
    {
        passive_mode.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-mss" || name == "mtu-discovery" || name == "passive-mode" || name == "local-address" || name == "local-port" || name == "remote-address" || name == "remote-port")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::ErrorHandling()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "error-handling"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::~ErrorHandling()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-handling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::Config()
    :
    treat_as_withdraw{YType::boolean, "treat-as-withdraw"}
{

    yang_name = "config"; yang_parent_name = "error-handling"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::has_data() const
{
    return treat_as_withdraw.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(treat_as_withdraw.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (treat_as_withdraw.is_set || is_set(treat_as_withdraw.yfilter)) leaf_name_data.push_back(treat_as_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw = value;
        treat_as_withdraw.value_namespace = name_space;
        treat_as_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "treat-as-withdraw")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::State()
    :
    treat_as_withdraw{YType::boolean, "treat-as-withdraw"},
    erroneous_update_messages{YType::uint32, "erroneous-update-messages"}
{

    yang_name = "state"; yang_parent_name = "error-handling"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::has_data() const
{
    return treat_as_withdraw.is_set
	|| erroneous_update_messages.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(treat_as_withdraw.yfilter)
	|| ydk::is_set(erroneous_update_messages.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (treat_as_withdraw.is_set || is_set(treat_as_withdraw.yfilter)) leaf_name_data.push_back(treat_as_withdraw.get_name_leafdata());
    if (erroneous_update_messages.is_set || is_set(erroneous_update_messages.yfilter)) leaf_name_data.push_back(erroneous_update_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw = value;
        treat_as_withdraw.value_namespace = name_space;
        treat_as_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "erroneous-update-messages")
    {
        erroneous_update_messages = value;
        erroneous_update_messages.value_namespace = name_space;
        erroneous_update_messages.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw.yfilter = yfilter;
    }
    if(value_path == "erroneous-update-messages")
    {
        erroneous_update_messages.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "treat-as-withdraw" || name == "erroneous-update-messages")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::has_data() const
{
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
        stale_routes_time.value_namespace = name_space;
        stale_routes_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"},
    peer_restart_time{YType::uint16, "peer-restart-time"},
    peer_restarting{YType::boolean, "peer-restarting"},
    local_restarting{YType::boolean, "local-restarting"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::has_data() const
{
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set
	|| peer_restart_time.is_set
	|| peer_restarting.is_set
	|| local_restarting.is_set
	|| mode.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter)
	|| ydk::is_set(peer_restart_time.yfilter)
	|| ydk::is_set(peer_restarting.yfilter)
	|| ydk::is_set(local_restarting.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());
    if (peer_restart_time.is_set || is_set(peer_restart_time.yfilter)) leaf_name_data.push_back(peer_restart_time.get_name_leafdata());
    if (peer_restarting.is_set || is_set(peer_restarting.yfilter)) leaf_name_data.push_back(peer_restarting.get_name_leafdata());
    if (local_restarting.is_set || is_set(local_restarting.yfilter)) leaf_name_data.push_back(local_restarting.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
        stale_routes_time.value_namespace = name_space;
        stale_routes_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-restart-time")
    {
        peer_restart_time = value;
        peer_restart_time.value_namespace = name_space;
        peer_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-restarting")
    {
        peer_restarting = value;
        peer_restarting.value_namespace = name_space;
        peer_restarting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-restarting")
    {
        local_restarting = value;
        local_restarting.value_namespace = name_space;
        local_restarting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
    if(value_path == "peer-restart-time")
    {
        peer_restart_time.yfilter = yfilter;
    }
    if(value_path == "peer-restarting")
    {
        peer_restarting.yfilter = yfilter;
    }
    if(value_path == "local-restarting")
    {
        local_restarting.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only" || name == "peer-restart-time" || name == "peer-restarting" || name == "local-restarting" || name == "mode")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::LoggingOptions()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "logging-options"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::~LoggingOptions()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::Config()
    :
    log_neighbor_state_changes{YType::boolean, "log-neighbor-state-changes"}
{

    yang_name = "config"; yang_parent_name = "logging-options"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::has_data() const
{
    return log_neighbor_state_changes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_neighbor_state_changes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_neighbor_state_changes.is_set || is_set(log_neighbor_state_changes.yfilter)) leaf_name_data.push_back(log_neighbor_state_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes = value;
        log_neighbor_state_changes.value_namespace = name_space;
        log_neighbor_state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-neighbor-state-changes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::State()
    :
    log_neighbor_state_changes{YType::boolean, "log-neighbor-state-changes"}
{

    yang_name = "state"; yang_parent_name = "logging-options"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::has_data() const
{
    return log_neighbor_state_changes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_neighbor_state_changes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_neighbor_state_changes.is_set || is_set(log_neighbor_state_changes.yfilter)) leaf_name_data.push_back(log_neighbor_state_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes = value;
        log_neighbor_state_changes.value_namespace = name_space;
        log_neighbor_state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-neighbor-state-changes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    multihop_ttl{YType::uint8, "multihop-ttl"}
{

    yang_name = "config"; yang_parent_name = "ebgp-multihop"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::has_data() const
{
    return enabled.is_set
	|| multihop_ttl.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(multihop_ttl.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (multihop_ttl.is_set || is_set(multihop_ttl.yfilter)) leaf_name_data.push_back(multihop_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl = value;
        multihop_ttl.value_namespace = name_space;
        multihop_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "multihop-ttl")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::State()
    :
    enabled{YType::boolean, "enabled"},
    multihop_ttl{YType::uint8, "multihop-ttl"}
{

    yang_name = "state"; yang_parent_name = "ebgp-multihop"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::has_data() const
{
    return enabled.is_set
	|| multihop_ttl.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(multihop_ttl.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (multihop_ttl.is_set || is_set(multihop_ttl.yfilter)) leaf_name_data.push_back(multihop_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl = value;
        multihop_ttl.value_namespace = name_space;
        multihop_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "multihop-ttl")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::RouteReflector()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-reflector"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::~RouteReflector()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-reflector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::Config()
    :
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    route_reflector_client{YType::boolean, "route-reflector-client"}
{

    yang_name = "config"; yang_parent_name = "route-reflector"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::has_data() const
{
    return route_reflector_cluster_id.is_set
	|| route_reflector_client.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-reflector-cluster-id" || name == "route-reflector-client")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::State()
    :
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    route_reflector_client{YType::boolean, "route-reflector-client"}
{

    yang_name = "state"; yang_parent_name = "route-reflector"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::has_data() const
{
    return route_reflector_cluster_id.is_set
	|| route_reflector_client.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-reflector-cluster-id" || name == "route-reflector-client")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::AsPathOptions()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "as-path-options"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::~AsPathOptions()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::Config()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{

    yang_name = "config"; yang_parent_name = "as-path-options"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::has_data() const
{
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_own_as.yfilter)
	|| ydk::is_set(replace_peer_as.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_own_as.is_set || is_set(allow_own_as.yfilter)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.yfilter)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as = value;
        allow_own_as.value_namespace = name_space;
        allow_own_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as = value;
        replace_peer_as.value_namespace = name_space;
        replace_peer_as.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as.yfilter = yfilter;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-own-as" || name == "replace-peer-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::State()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{

    yang_name = "state"; yang_parent_name = "as-path-options"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::has_data() const
{
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_own_as.yfilter)
	|| ydk::is_set(replace_peer_as.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_own_as.is_set || is_set(allow_own_as.yfilter)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.yfilter)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as = value;
        allow_own_as.value_namespace = name_space;
        allow_own_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as = value;
        replace_peer_as.value_namespace = name_space;
        replace_peer_as.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as.yfilter = yfilter;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-own-as" || name == "replace-peer-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::AddPaths()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "add-paths"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::~AddPaths()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::Config()
    :
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"},
    eligible_prefix_policy{YType::str, "eligible-prefix-policy"}
{

    yang_name = "config"; yang_parent_name = "add-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::has_data() const
{
    return receive.is_set
	|| send_max.is_set
	|| eligible_prefix_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send_max.yfilter)
	|| ydk::is_set(eligible_prefix_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.yfilter)) leaf_name_data.push_back(send_max.get_name_leafdata());
    if (eligible_prefix_policy.is_set || is_set(eligible_prefix_policy.yfilter)) leaf_name_data.push_back(eligible_prefix_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-max")
    {
        send_max = value;
        send_max.value_namespace = name_space;
        send_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy = value;
        eligible_prefix_policy.value_namespace = name_space;
        eligible_prefix_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send-max")
    {
        send_max.yfilter = yfilter;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send-max" || name == "eligible-prefix-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::State()
    :
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"},
    eligible_prefix_policy{YType::str, "eligible-prefix-policy"}
{

    yang_name = "state"; yang_parent_name = "add-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::has_data() const
{
    return receive.is_set
	|| send_max.is_set
	|| eligible_prefix_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send_max.yfilter)
	|| ydk::is_set(eligible_prefix_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.yfilter)) leaf_name_data.push_back(send_max.get_name_leafdata());
    if (eligible_prefix_policy.is_set || is_set(eligible_prefix_policy.yfilter)) leaf_name_data.push_back(eligible_prefix_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-max")
    {
        send_max = value;
        send_max.value_namespace = name_space;
        send_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy = value;
        eligible_prefix_policy.value_namespace = name_space;
        eligible_prefix_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send-max")
    {
        send_max.yfilter = yfilter;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send-max" || name == "eligible-prefix-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State>())
	,ebgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::~UseMultiplePaths()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(ebgp != nullptr)
    {
        children["ebgp"] = ebgp;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::has_data() const
{
    return allow_multiple_as.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::has_data() const
{
    return allow_multiple_as.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::~ApplyPolicy()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::has_data() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::has_data() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafis()
{

    yang_name = "afi-safis"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::~AfiSafis()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::has_data() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi>();
        c->parent = this;
        afi_safi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : afi_safi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
    	,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State>())
	,graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart>())
	,apply_policy(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy>())
	,ipv4_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast>())
	,ipv6_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast>())
	,ipv4_labeled_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast>())
	,ipv6_labeled_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast>())
	,l3vpn_ipv4_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast>())
	,l3vpn_ipv6_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast>())
	,l3vpn_ipv4_multicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast>())
	,l3vpn_ipv6_multicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast>())
	,l2vpn_vpls(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls>())
	,l2vpn_evpn(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn>())
	,use_multiple_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths>())
{
    config->parent = this;
    state->parent = this;
    graceful_restart->parent = this;
    apply_policy->parent = this;
    ipv4_unicast->parent = this;
    ipv6_unicast->parent = this;
    ipv4_labeled_unicast->parent = this;
    ipv6_labeled_unicast->parent = this;
    l3vpn_ipv4_unicast->parent = this;
    l3vpn_ipv6_unicast->parent = this;
    l3vpn_ipv4_multicast->parent = this;
    l3vpn_ipv6_multicast->parent = this;
    l2vpn_vpls->parent = this;
    l2vpn_evpn->parent = this;
    use_multiple_paths->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::has_data() const
{
    return afi_safi_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_data())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_data())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_data())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_data())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_data())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_data())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_data())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_operation())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_operation())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_operation())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_operation())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_operation())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_operation())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_operation())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi" <<"[afi-safi-name='" <<afi_safi_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State>();
        }
        return state;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    if(child_yang_name == "ipv4-labeled-unicast")
    {
        if(ipv4_labeled_unicast == nullptr)
        {
            ipv4_labeled_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast>();
        }
        return ipv4_labeled_unicast;
    }

    if(child_yang_name == "ipv6-labeled-unicast")
    {
        if(ipv6_labeled_unicast == nullptr)
        {
            ipv6_labeled_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast>();
        }
        return ipv6_labeled_unicast;
    }

    if(child_yang_name == "l3vpn-ipv4-unicast")
    {
        if(l3vpn_ipv4_unicast == nullptr)
        {
            l3vpn_ipv4_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
        }
        return l3vpn_ipv4_unicast;
    }

    if(child_yang_name == "l3vpn-ipv6-unicast")
    {
        if(l3vpn_ipv6_unicast == nullptr)
        {
            l3vpn_ipv6_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
        }
        return l3vpn_ipv6_unicast;
    }

    if(child_yang_name == "l3vpn-ipv4-multicast")
    {
        if(l3vpn_ipv4_multicast == nullptr)
        {
            l3vpn_ipv4_multicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
        }
        return l3vpn_ipv4_multicast;
    }

    if(child_yang_name == "l3vpn-ipv6-multicast")
    {
        if(l3vpn_ipv6_multicast == nullptr)
        {
            l3vpn_ipv6_multicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
        }
        return l3vpn_ipv6_multicast;
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls == nullptr)
        {
            l2vpn_vpls = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls>();
        }
        return l2vpn_vpls;
    }

    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn == nullptr)
        {
            l2vpn_evpn = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn>();
        }
        return l2vpn_evpn;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    if(ipv4_unicast != nullptr)
    {
        children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        children["ipv6-unicast"] = ipv6_unicast;
    }

    if(ipv4_labeled_unicast != nullptr)
    {
        children["ipv4-labeled-unicast"] = ipv4_labeled_unicast;
    }

    if(ipv6_labeled_unicast != nullptr)
    {
        children["ipv6-labeled-unicast"] = ipv6_labeled_unicast;
    }

    if(l3vpn_ipv4_unicast != nullptr)
    {
        children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
    }

    if(l3vpn_ipv6_unicast != nullptr)
    {
        children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
    }

    if(l3vpn_ipv4_multicast != nullptr)
    {
        children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
    }

    if(l3vpn_ipv6_multicast != nullptr)
    {
        children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
    }

    if(l2vpn_vpls != nullptr)
    {
        children["l2vpn-vpls"] = l2vpn_vpls;
    }

    if(l2vpn_evpn != nullptr)
    {
        children["l2vpn-evpn"] = l2vpn_evpn;
    }

    if(use_multiple_paths != nullptr)
    {
        children["use-multiple-paths"] = use_multiple_paths;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "graceful-restart" || name == "apply-policy" || name == "ipv4-unicast" || name == "ipv6-unicast" || name == "ipv4-labeled-unicast" || name == "ipv6-labeled-unicast" || name == "l3vpn-ipv4-unicast" || name == "l3vpn-ipv6-unicast" || name == "l3vpn-ipv4-multicast" || name == "l3vpn-ipv6-multicast" || name == "l2vpn-vpls" || name == "l2vpn-evpn" || name == "use-multiple-paths" || name == "afi-safi-name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::Config()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::has_data() const
{
    return afi_safi_name.is_set
	|| enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::State()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"},
    active{YType::boolean, "active"}
    	,
    prefixes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes>())
{
    prefixes->parent = this;

    yang_name = "state"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::has_data() const
{
    return afi_safi_name.is_set
	|| enabled.is_set
	|| active.is_set
	|| (prefixes !=  nullptr && prefixes->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(active.yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "afi-safi-name" || name == "enabled" || name == "active")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::Prefixes()
    :
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"},
    installed{YType::uint32, "installed"}
{

    yang_name = "prefixes"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::~Prefixes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::has_data() const
{
    return received.is_set
	|| sent.is_set
	|| installed.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(installed.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (installed.is_set || is_set(installed.yfilter)) leaf_name_data.push_back(installed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installed")
    {
        installed = value;
        installed.value_namespace = name_space;
        installed.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "installed")
    {
        installed.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received" || name == "sent" || name == "installed")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::has_data() const
{
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    received{YType::boolean, "received"},
    advertised{YType::boolean, "advertised"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::has_data() const
{
    return enabled.is_set
	|| received.is_set
	|| advertised.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(advertised.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (advertised.is_set || is_set(advertised.yfilter)) leaf_name_data.push_back(advertised.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertised")
    {
        advertised = value;
        advertised.value_namespace = name_space;
        advertised.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "advertised")
    {
        advertised.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "received" || name == "advertised")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::~ApplyPolicy()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::has_data() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::has_data() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>())
	,config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::~Ipv4Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_data() const
{
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_data() const
{
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
	,config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_data() const
{
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_data() const
{
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::Ipv4LabeledUnicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv4-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::~Ipv4LabeledUnicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::Ipv6LabeledUnicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv6-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::~Ipv6LabeledUnicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::L3VpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::~L3VpnIpv4Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::L3VpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::~L3VpnIpv6Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::L3VpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::~L3VpnIpv4Multicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::L3VpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::~L3VpnIpv6Multicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::L2VpnVpls()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::~L2VpnVpls()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>())
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::L2VpnEvpn()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::~L2VpnEvpn()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::IDLE {0, "IDLE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::CONNECT {1, "CONNECT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::ACTIVE {2, "ACTIVE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::OPENSENT {3, "OPENSENT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::OPENCONFIRM {4, "OPENCONFIRM"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::ESTABLISHED {5, "ESTABLISHED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode::HELPER_ONLY {0, "HELPER_ONLY"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode::BILATERAL {1, "BILATERAL"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode::REMOTE_HELPER {2, "REMOTE_HELPER"};


}
}

