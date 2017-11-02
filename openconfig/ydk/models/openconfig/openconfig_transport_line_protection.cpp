
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_transport_line_protection.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_transport_line_protection {

APSPATHS::APSPATHS()
     : Identity("http://openconfig.net/yang/optical-transport-line-protection", "openconfig-transport-line-protection", "openconfig-transport-line-protection:APS_PATHS")
{

}

APSPATHS::~APSPATHS()
{
}

Aps::Aps()
    :
    aps_modules(std::make_shared<Aps::ApsModules>())
{
    aps_modules->parent = this;

    yang_name = "aps"; yang_parent_name = "openconfig-transport-line-protection"; is_top_level_class = true; has_list_ancestor = false;
}

Aps::~Aps()
{
}

bool Aps::has_data() const
{
    return (aps_modules !=  nullptr && aps_modules->has_data());
}

bool Aps::has_operation() const
{
    return is_set(yfilter)
	|| (aps_modules !=  nullptr && aps_modules->has_operation());
}

std::string Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-transport-line-protection:aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps-modules")
    {
        if(aps_modules == nullptr)
        {
            aps_modules = std::make_shared<Aps::ApsModules>();
        }
        return aps_modules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aps_modules != nullptr)
    {
        children["aps-modules"] = aps_modules;
    }

    return children;
}

void Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Aps::clone_ptr() const
{
    return std::make_shared<Aps>();
}

std::string Aps::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Aps::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Aps::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Aps::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps-modules")
        return true;
    return false;
}

Aps::ApsModules::ApsModules()
{

    yang_name = "aps-modules"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = false;
}

Aps::ApsModules::~ApsModules()
{
}

bool Aps::ApsModules::has_data() const
{
    for (std::size_t index=0; index<aps_module.size(); index++)
    {
        if(aps_module[index]->has_data())
            return true;
    }
    return false;
}

bool Aps::ApsModules::has_operation() const
{
    for (std::size_t index=0; index<aps_module.size(); index++)
    {
        if(aps_module[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Aps::ApsModules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-transport-line-protection:aps/" << get_segment_path();
    return path_buffer.str();
}

std::string Aps::ApsModules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps-modules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps-module")
    {
        for(auto const & c : aps_module)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Aps::ApsModules::ApsModule>();
        c->parent = this;
        aps_module.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aps_module)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Aps::ApsModules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::ApsModules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aps::ApsModules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps-module")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::ApsModule()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Aps::ApsModules::ApsModule::Config>())
	,state(std::make_shared<Aps::ApsModules::ApsModule::State>())
	,ports(std::make_shared<Aps::ApsModules::ApsModule::Ports>())
{
    config->parent = this;
    state->parent = this;
    ports->parent = this;

    yang_name = "aps-module"; yang_parent_name = "aps-modules"; is_top_level_class = false; has_list_ancestor = false;
}

Aps::ApsModules::ApsModule::~ApsModule()
{
}

bool Aps::ApsModules::ApsModule::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ports !=  nullptr && ports->has_data());
}

bool Aps::ApsModules::ApsModule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ports !=  nullptr && ports->has_operation());
}

std::string Aps::ApsModules::ApsModule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-transport-line-protection:aps/aps-modules/" << get_segment_path();
    return path_buffer.str();
}

std::string Aps::ApsModules::ApsModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps-module" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Aps::ApsModules::ApsModule::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Aps::ApsModules::ApsModule::State>();
        }
        return state;
    }

    if(child_yang_name == "ports")
    {
        if(ports == nullptr)
        {
            ports = std::make_shared<Aps::ApsModules::ApsModule::Ports>();
        }
        return ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::get_children() const
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

    if(ports != nullptr)
    {
        children["ports"] = ports;
    }

    return children;
}

void Aps::ApsModules::ApsModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ports" || name == "name")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Config::Config()
    :
    name{YType::str, "name"},
    revertive{YType::boolean, "revertive"},
    primary_switch_threshold{YType::str, "primary-switch-threshold"},
    primary_switch_hysteresis{YType::str, "primary-switch-hysteresis"},
    secondary_switch_threshold{YType::str, "secondary-switch-threshold"},
    secondary_switch_hysteresis{YType::str, "secondary-switch-hysteresis"}
{

    yang_name = "config"; yang_parent_name = "aps-module"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Config::~Config()
{
}

bool Aps::ApsModules::ApsModule::Config::has_data() const
{
    return name.is_set
	|| revertive.is_set
	|| primary_switch_threshold.is_set
	|| primary_switch_hysteresis.is_set
	|| secondary_switch_threshold.is_set
	|| secondary_switch_hysteresis.is_set;
}

bool Aps::ApsModules::ApsModule::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revertive.yfilter)
	|| ydk::is_set(primary_switch_threshold.yfilter)
	|| ydk::is_set(primary_switch_hysteresis.yfilter)
	|| ydk::is_set(secondary_switch_threshold.yfilter)
	|| ydk::is_set(secondary_switch_hysteresis.yfilter);
}

std::string Aps::ApsModules::ApsModule::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revertive.is_set || is_set(revertive.yfilter)) leaf_name_data.push_back(revertive.get_name_leafdata());
    if (primary_switch_threshold.is_set || is_set(primary_switch_threshold.yfilter)) leaf_name_data.push_back(primary_switch_threshold.get_name_leafdata());
    if (primary_switch_hysteresis.is_set || is_set(primary_switch_hysteresis.yfilter)) leaf_name_data.push_back(primary_switch_hysteresis.get_name_leafdata());
    if (secondary_switch_threshold.is_set || is_set(secondary_switch_threshold.yfilter)) leaf_name_data.push_back(secondary_switch_threshold.get_name_leafdata());
    if (secondary_switch_hysteresis.is_set || is_set(secondary_switch_hysteresis.yfilter)) leaf_name_data.push_back(secondary_switch_hysteresis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revertive")
    {
        revertive = value;
        revertive.value_namespace = name_space;
        revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-switch-threshold")
    {
        primary_switch_threshold = value;
        primary_switch_threshold.value_namespace = name_space;
        primary_switch_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-switch-hysteresis")
    {
        primary_switch_hysteresis = value;
        primary_switch_hysteresis.value_namespace = name_space;
        primary_switch_hysteresis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-switch-threshold")
    {
        secondary_switch_threshold = value;
        secondary_switch_threshold.value_namespace = name_space;
        secondary_switch_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-switch-hysteresis")
    {
        secondary_switch_hysteresis = value;
        secondary_switch_hysteresis.value_namespace = name_space;
        secondary_switch_hysteresis.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revertive")
    {
        revertive.yfilter = yfilter;
    }
    if(value_path == "primary-switch-threshold")
    {
        primary_switch_threshold.yfilter = yfilter;
    }
    if(value_path == "primary-switch-hysteresis")
    {
        primary_switch_hysteresis.yfilter = yfilter;
    }
    if(value_path == "secondary-switch-threshold")
    {
        secondary_switch_threshold.yfilter = yfilter;
    }
    if(value_path == "secondary-switch-hysteresis")
    {
        secondary_switch_hysteresis.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "revertive" || name == "primary-switch-threshold" || name == "primary-switch-hysteresis" || name == "secondary-switch-threshold" || name == "secondary-switch-hysteresis")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::State::State()
    :
    name{YType::str, "name"},
    revertive{YType::boolean, "revertive"},
    primary_switch_threshold{YType::str, "primary-switch-threshold"},
    primary_switch_hysteresis{YType::str, "primary-switch-hysteresis"},
    secondary_switch_threshold{YType::str, "secondary-switch-threshold"},
    secondary_switch_hysteresis{YType::str, "secondary-switch-hysteresis"},
    active_path{YType::identityref, "active-path"}
{

    yang_name = "state"; yang_parent_name = "aps-module"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::State::~State()
{
}

bool Aps::ApsModules::ApsModule::State::has_data() const
{
    return name.is_set
	|| revertive.is_set
	|| primary_switch_threshold.is_set
	|| primary_switch_hysteresis.is_set
	|| secondary_switch_threshold.is_set
	|| secondary_switch_hysteresis.is_set
	|| active_path.is_set;
}

bool Aps::ApsModules::ApsModule::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revertive.yfilter)
	|| ydk::is_set(primary_switch_threshold.yfilter)
	|| ydk::is_set(primary_switch_hysteresis.yfilter)
	|| ydk::is_set(secondary_switch_threshold.yfilter)
	|| ydk::is_set(secondary_switch_hysteresis.yfilter)
	|| ydk::is_set(active_path.yfilter);
}

std::string Aps::ApsModules::ApsModule::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revertive.is_set || is_set(revertive.yfilter)) leaf_name_data.push_back(revertive.get_name_leafdata());
    if (primary_switch_threshold.is_set || is_set(primary_switch_threshold.yfilter)) leaf_name_data.push_back(primary_switch_threshold.get_name_leafdata());
    if (primary_switch_hysteresis.is_set || is_set(primary_switch_hysteresis.yfilter)) leaf_name_data.push_back(primary_switch_hysteresis.get_name_leafdata());
    if (secondary_switch_threshold.is_set || is_set(secondary_switch_threshold.yfilter)) leaf_name_data.push_back(secondary_switch_threshold.get_name_leafdata());
    if (secondary_switch_hysteresis.is_set || is_set(secondary_switch_hysteresis.yfilter)) leaf_name_data.push_back(secondary_switch_hysteresis.get_name_leafdata());
    if (active_path.is_set || is_set(active_path.yfilter)) leaf_name_data.push_back(active_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revertive")
    {
        revertive = value;
        revertive.value_namespace = name_space;
        revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-switch-threshold")
    {
        primary_switch_threshold = value;
        primary_switch_threshold.value_namespace = name_space;
        primary_switch_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-switch-hysteresis")
    {
        primary_switch_hysteresis = value;
        primary_switch_hysteresis.value_namespace = name_space;
        primary_switch_hysteresis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-switch-threshold")
    {
        secondary_switch_threshold = value;
        secondary_switch_threshold.value_namespace = name_space;
        secondary_switch_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-switch-hysteresis")
    {
        secondary_switch_hysteresis = value;
        secondary_switch_hysteresis.value_namespace = name_space;
        secondary_switch_hysteresis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path")
    {
        active_path = value;
        active_path.value_namespace = name_space;
        active_path.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revertive")
    {
        revertive.yfilter = yfilter;
    }
    if(value_path == "primary-switch-threshold")
    {
        primary_switch_threshold.yfilter = yfilter;
    }
    if(value_path == "primary-switch-hysteresis")
    {
        primary_switch_hysteresis.yfilter = yfilter;
    }
    if(value_path == "secondary-switch-threshold")
    {
        secondary_switch_threshold.yfilter = yfilter;
    }
    if(value_path == "secondary-switch-hysteresis")
    {
        secondary_switch_hysteresis.yfilter = yfilter;
    }
    if(value_path == "active-path")
    {
        active_path.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "revertive" || name == "primary-switch-threshold" || name == "primary-switch-hysteresis" || name == "secondary-switch-threshold" || name == "secondary-switch-hysteresis" || name == "active-path")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::Ports()
    :
    line_primary_in(std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryIn>())
	,line_primary_out(std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryOut>())
	,line_secondary_in(std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryIn>())
	,line_secondary_out(std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryOut>())
	,common_in(std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonIn>())
	,common_output(std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonOutput>())
{
    line_primary_in->parent = this;
    line_primary_out->parent = this;
    line_secondary_in->parent = this;
    line_secondary_out->parent = this;
    common_in->parent = this;
    common_output->parent = this;

    yang_name = "ports"; yang_parent_name = "aps-module"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::~Ports()
{
}

bool Aps::ApsModules::ApsModule::Ports::has_data() const
{
    return (line_primary_in !=  nullptr && line_primary_in->has_data())
	|| (line_primary_out !=  nullptr && line_primary_out->has_data())
	|| (line_secondary_in !=  nullptr && line_secondary_in->has_data())
	|| (line_secondary_out !=  nullptr && line_secondary_out->has_data())
	|| (common_in !=  nullptr && common_in->has_data())
	|| (common_output !=  nullptr && common_output->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::has_operation() const
{
    return is_set(yfilter)
	|| (line_primary_in !=  nullptr && line_primary_in->has_operation())
	|| (line_primary_out !=  nullptr && line_primary_out->has_operation())
	|| (line_secondary_in !=  nullptr && line_secondary_in->has_operation())
	|| (line_secondary_out !=  nullptr && line_secondary_out->has_operation())
	|| (common_in !=  nullptr && common_in->has_operation())
	|| (common_output !=  nullptr && common_output->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-primary-in")
    {
        if(line_primary_in == nullptr)
        {
            line_primary_in = std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryIn>();
        }
        return line_primary_in;
    }

    if(child_yang_name == "line-primary-out")
    {
        if(line_primary_out == nullptr)
        {
            line_primary_out = std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryOut>();
        }
        return line_primary_out;
    }

    if(child_yang_name == "line-secondary-in")
    {
        if(line_secondary_in == nullptr)
        {
            line_secondary_in = std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryIn>();
        }
        return line_secondary_in;
    }

    if(child_yang_name == "line-secondary-out")
    {
        if(line_secondary_out == nullptr)
        {
            line_secondary_out = std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryOut>();
        }
        return line_secondary_out;
    }

    if(child_yang_name == "common-in")
    {
        if(common_in == nullptr)
        {
            common_in = std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonIn>();
        }
        return common_in;
    }

    if(child_yang_name == "common-output")
    {
        if(common_output == nullptr)
        {
            common_output = std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonOutput>();
        }
        return common_output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_primary_in != nullptr)
    {
        children["line-primary-in"] = line_primary_in;
    }

    if(line_primary_out != nullptr)
    {
        children["line-primary-out"] = line_primary_out;
    }

    if(line_secondary_in != nullptr)
    {
        children["line-secondary-in"] = line_secondary_in;
    }

    if(line_secondary_out != nullptr)
    {
        children["line-secondary-out"] = line_secondary_out;
    }

    if(common_in != nullptr)
    {
        children["common-in"] = common_in;
    }

    if(common_output != nullptr)
    {
        children["common-output"] = common_output;
    }

    return children;
}

void Aps::ApsModules::ApsModule::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::ApsModules::ApsModule::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aps::ApsModules::ApsModule::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-primary-in" || name == "line-primary-out" || name == "line-secondary-in" || name == "line-secondary-out" || name == "common-in" || name == "common-output")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::LinePrimaryIn()
    :
    config(std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config>())
	,state(std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "line-primary-in"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::~LinePrimaryIn()
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-primary-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::get_children() const
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

void Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    target_attenuation{YType::str, "target-attenuation"}
{

    yang_name = "config"; yang_parent_name = "line-primary-in"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::~Config()
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::has_data() const
{
    return enabled.is_set
	|| target_attenuation.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(target_attenuation.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "target-attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::State()
    :
    enabled{YType::boolean, "enabled"},
    target_attenuation{YType::str, "target-attenuation"},
    attenuation{YType::str, "attenuation"}
    	,
    optical_power(std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower>())
{
    optical_power->parent = this;

    yang_name = "state"; yang_parent_name = "line-primary-in"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::~State()
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::has_data() const
{
    return enabled.is_set
	|| target_attenuation.is_set
	|| attenuation.is_set
	|| (optical_power !=  nullptr && optical_power->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(target_attenuation.yfilter)
	|| ydk::is_set(attenuation.yfilter)
	|| (optical_power !=  nullptr && optical_power->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());
    if (attenuation.is_set || is_set(attenuation.yfilter)) leaf_name_data.push_back(attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-power")
    {
        if(optical_power == nullptr)
        {
            optical_power = std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower>();
        }
        return optical_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_power != nullptr)
    {
        children["optical-power"] = optical_power;
    }

    return children;
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attenuation")
    {
        attenuation = value;
        attenuation.value_namespace = name_space;
        attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
    if(value_path == "attenuation")
    {
        attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-power" || name == "enabled" || name == "target-attenuation" || name == "attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::OpticalPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "optical-power"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::~OpticalPower()
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::has_data() const
{
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::LinePrimaryOut()
    :
    config(std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config>())
	,state(std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "line-primary-out"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::~LinePrimaryOut()
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-primary-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::get_children() const
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

void Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::Config()
    :
    target_attenuation{YType::str, "target-attenuation"}
{

    yang_name = "config"; yang_parent_name = "line-primary-out"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::~Config()
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::has_data() const
{
    return target_attenuation.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_attenuation.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::State()
    :
    target_attenuation{YType::str, "target-attenuation"},
    attenuation{YType::str, "attenuation"}
    	,
    optical_power(std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower>())
{
    optical_power->parent = this;

    yang_name = "state"; yang_parent_name = "line-primary-out"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::~State()
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::has_data() const
{
    return target_attenuation.is_set
	|| attenuation.is_set
	|| (optical_power !=  nullptr && optical_power->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_attenuation.yfilter)
	|| ydk::is_set(attenuation.yfilter)
	|| (optical_power !=  nullptr && optical_power->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());
    if (attenuation.is_set || is_set(attenuation.yfilter)) leaf_name_data.push_back(attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-power")
    {
        if(optical_power == nullptr)
        {
            optical_power = std::make_shared<Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower>();
        }
        return optical_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_power != nullptr)
    {
        children["optical-power"] = optical_power;
    }

    return children;
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attenuation")
    {
        attenuation = value;
        attenuation.value_namespace = name_space;
        attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
    if(value_path == "attenuation")
    {
        attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-power" || name == "target-attenuation" || name == "attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::OpticalPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "optical-power"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::~OpticalPower()
{
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::has_data() const
{
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::LineSecondaryIn()
    :
    config(std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config>())
	,state(std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "line-secondary-in"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::~LineSecondaryIn()
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-secondary-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::get_children() const
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

void Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    target_attenuation{YType::str, "target-attenuation"}
{

    yang_name = "config"; yang_parent_name = "line-secondary-in"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::~Config()
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::has_data() const
{
    return enabled.is_set
	|| target_attenuation.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(target_attenuation.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "target-attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::State()
    :
    enabled{YType::boolean, "enabled"},
    target_attenuation{YType::str, "target-attenuation"},
    attenuation{YType::str, "attenuation"}
    	,
    optical_power(std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower>())
{
    optical_power->parent = this;

    yang_name = "state"; yang_parent_name = "line-secondary-in"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::~State()
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::has_data() const
{
    return enabled.is_set
	|| target_attenuation.is_set
	|| attenuation.is_set
	|| (optical_power !=  nullptr && optical_power->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(target_attenuation.yfilter)
	|| ydk::is_set(attenuation.yfilter)
	|| (optical_power !=  nullptr && optical_power->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());
    if (attenuation.is_set || is_set(attenuation.yfilter)) leaf_name_data.push_back(attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-power")
    {
        if(optical_power == nullptr)
        {
            optical_power = std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower>();
        }
        return optical_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_power != nullptr)
    {
        children["optical-power"] = optical_power;
    }

    return children;
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attenuation")
    {
        attenuation = value;
        attenuation.value_namespace = name_space;
        attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
    if(value_path == "attenuation")
    {
        attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-power" || name == "enabled" || name == "target-attenuation" || name == "attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::OpticalPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "optical-power"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::~OpticalPower()
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::has_data() const
{
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::LineSecondaryOut()
    :
    config(std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config>())
	,state(std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "line-secondary-out"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::~LineSecondaryOut()
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-secondary-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::get_children() const
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

void Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::Config()
    :
    target_attenuation{YType::str, "target-attenuation"}
{

    yang_name = "config"; yang_parent_name = "line-secondary-out"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::~Config()
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::has_data() const
{
    return target_attenuation.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_attenuation.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::State()
    :
    target_attenuation{YType::str, "target-attenuation"},
    attenuation{YType::str, "attenuation"}
    	,
    optical_power(std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower>())
{
    optical_power->parent = this;

    yang_name = "state"; yang_parent_name = "line-secondary-out"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::~State()
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::has_data() const
{
    return target_attenuation.is_set
	|| attenuation.is_set
	|| (optical_power !=  nullptr && optical_power->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_attenuation.yfilter)
	|| ydk::is_set(attenuation.yfilter)
	|| (optical_power !=  nullptr && optical_power->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());
    if (attenuation.is_set || is_set(attenuation.yfilter)) leaf_name_data.push_back(attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-power")
    {
        if(optical_power == nullptr)
        {
            optical_power = std::make_shared<Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower>();
        }
        return optical_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_power != nullptr)
    {
        children["optical-power"] = optical_power;
    }

    return children;
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attenuation")
    {
        attenuation = value;
        attenuation.value_namespace = name_space;
        attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
    if(value_path == "attenuation")
    {
        attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-power" || name == "target-attenuation" || name == "attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::OpticalPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "optical-power"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::~OpticalPower()
{
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::has_data() const
{
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::CommonIn::CommonIn()
    :
    config(std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonIn::Config>())
	,state(std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonIn::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "common-in"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::CommonIn::~CommonIn()
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::CommonIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::CommonIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::CommonIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonIn::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonIn::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::CommonIn::get_children() const
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

void Aps::ApsModules::ApsModule::Ports::CommonIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::ApsModules::ApsModule::Ports::CommonIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::CommonIn::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    target_attenuation{YType::str, "target-attenuation"}
{

    yang_name = "config"; yang_parent_name = "common-in"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::CommonIn::Config::~Config()
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::Config::has_data() const
{
    return enabled.is_set
	|| target_attenuation.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(target_attenuation.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::CommonIn::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::CommonIn::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::CommonIn::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::CommonIn::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::CommonIn::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::CommonIn::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "target-attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::CommonIn::State::State()
    :
    enabled{YType::boolean, "enabled"},
    target_attenuation{YType::str, "target-attenuation"},
    attenuation{YType::str, "attenuation"}
    	,
    optical_power(std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower>())
{
    optical_power->parent = this;

    yang_name = "state"; yang_parent_name = "common-in"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::CommonIn::State::~State()
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::State::has_data() const
{
    return enabled.is_set
	|| target_attenuation.is_set
	|| attenuation.is_set
	|| (optical_power !=  nullptr && optical_power->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(target_attenuation.yfilter)
	|| ydk::is_set(attenuation.yfilter)
	|| (optical_power !=  nullptr && optical_power->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::CommonIn::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::CommonIn::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());
    if (attenuation.is_set || is_set(attenuation.yfilter)) leaf_name_data.push_back(attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::CommonIn::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-power")
    {
        if(optical_power == nullptr)
        {
            optical_power = std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower>();
        }
        return optical_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::CommonIn::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_power != nullptr)
    {
        children["optical-power"] = optical_power;
    }

    return children;
}

void Aps::ApsModules::ApsModule::Ports::CommonIn::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attenuation")
    {
        attenuation = value;
        attenuation.value_namespace = name_space;
        attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::CommonIn::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
    if(value_path == "attenuation")
    {
        attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-power" || name == "enabled" || name == "target-attenuation" || name == "attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::OpticalPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "optical-power"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::~OpticalPower()
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::has_data() const
{
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::CommonOutput::CommonOutput()
    :
    config(std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonOutput::Config>())
	,state(std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonOutput::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "common-output"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::CommonOutput::~CommonOutput()
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::CommonOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::CommonOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::CommonOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonOutput::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonOutput::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::CommonOutput::get_children() const
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

void Aps::ApsModules::ApsModule::Ports::CommonOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aps::ApsModules::ApsModule::Ports::CommonOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::Config()
    :
    target_attenuation{YType::str, "target-attenuation"}
{

    yang_name = "config"; yang_parent_name = "common-output"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::~Config()
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::has_data() const
{
    return target_attenuation.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_attenuation.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::CommonOutput::State::State()
    :
    target_attenuation{YType::str, "target-attenuation"},
    attenuation{YType::str, "attenuation"}
    	,
    optical_power(std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower>())
{
    optical_power->parent = this;

    yang_name = "state"; yang_parent_name = "common-output"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::CommonOutput::State::~State()
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::State::has_data() const
{
    return target_attenuation.is_set
	|| attenuation.is_set
	|| (optical_power !=  nullptr && optical_power->has_data());
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_attenuation.yfilter)
	|| ydk::is_set(attenuation.yfilter)
	|| (optical_power !=  nullptr && optical_power->has_operation());
}

std::string Aps::ApsModules::ApsModule::Ports::CommonOutput::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::CommonOutput::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_attenuation.is_set || is_set(target_attenuation.yfilter)) leaf_name_data.push_back(target_attenuation.get_name_leafdata());
    if (attenuation.is_set || is_set(attenuation.yfilter)) leaf_name_data.push_back(attenuation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::CommonOutput::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-power")
    {
        if(optical_power == nullptr)
        {
            optical_power = std::make_shared<Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower>();
        }
        return optical_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::CommonOutput::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_power != nullptr)
    {
        children["optical-power"] = optical_power;
    }

    return children;
}

void Aps::ApsModules::ApsModule::Ports::CommonOutput::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation = value;
        target_attenuation.value_namespace = name_space;
        target_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attenuation")
    {
        attenuation = value;
        attenuation.value_namespace = name_space;
        attenuation.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::CommonOutput::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-attenuation")
    {
        target_attenuation.yfilter = yfilter;
    }
    if(value_path == "attenuation")
    {
        attenuation.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-power" || name == "target-attenuation" || name == "attenuation")
        return true;
    return false;
}

Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::OpticalPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "optical-power"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::~OpticalPower()
{
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::has_data() const
{
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

PRIMARY::PRIMARY()
     : Identity("http://openconfig.net/yang/optical-transport-line-protection", "openconfig-transport-line-protection", "openconfig-transport-line-protection:PRIMARY")
{

}

PRIMARY::~PRIMARY()
{
}

SECONDARY::SECONDARY()
     : Identity("http://openconfig.net/yang/optical-transport-line-protection", "openconfig-transport-line-protection", "openconfig-transport-line-protection:SECONDARY")
{

}

SECONDARY::~SECONDARY()
{
}


}
}

