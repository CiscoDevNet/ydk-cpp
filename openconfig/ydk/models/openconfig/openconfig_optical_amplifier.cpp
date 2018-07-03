
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_optical_amplifier.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_optical_amplifier {

OPTICALAMPLIFIERTYPE::OPTICALAMPLIFIERTYPE()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:OPTICAL_AMPLIFIER_TYPE")
{

}

OPTICALAMPLIFIERTYPE::~OPTICALAMPLIFIERTYPE()
{
}

OPTICALAMPLIFIERMODE::OPTICALAMPLIFIERMODE()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:OPTICAL_AMPLIFIER_MODE")
{

}

OPTICALAMPLIFIERMODE::~OPTICALAMPLIFIERMODE()
{
}

GAINRANGE::GAINRANGE()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:GAIN_RANGE")
{

}

GAINRANGE::~GAINRANGE()
{
}

OpticalAmplifier::OpticalAmplifier()
    :
    amplifiers(std::make_shared<OpticalAmplifier::Amplifiers>())
    , supervisory_channels(std::make_shared<OpticalAmplifier::SupervisoryChannels>())
{
    amplifiers->parent = this;
    supervisory_channels->parent = this;

    yang_name = "optical-amplifier"; yang_parent_name = "openconfig-optical-amplifier"; is_top_level_class = true; has_list_ancestor = false; 
}

OpticalAmplifier::~OpticalAmplifier()
{
}

bool OpticalAmplifier::has_data() const
{
    if (is_presence_container) return true;
    return (amplifiers !=  nullptr && amplifiers->has_data())
	|| (supervisory_channels !=  nullptr && supervisory_channels->has_data());
}

bool OpticalAmplifier::has_operation() const
{
    return is_set(yfilter)
	|| (amplifiers !=  nullptr && amplifiers->has_operation())
	|| (supervisory_channels !=  nullptr && supervisory_channels->has_operation());
}

std::string OpticalAmplifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-optical-amplifier:optical-amplifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amplifiers")
    {
        if(amplifiers == nullptr)
        {
            amplifiers = std::make_shared<OpticalAmplifier::Amplifiers>();
        }
        return amplifiers;
    }

    if(child_yang_name == "supervisory-channels")
    {
        if(supervisory_channels == nullptr)
        {
            supervisory_channels = std::make_shared<OpticalAmplifier::SupervisoryChannels>();
        }
        return supervisory_channels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(amplifiers != nullptr)
    {
        children["amplifiers"] = amplifiers;
    }

    if(supervisory_channels != nullptr)
    {
        children["supervisory-channels"] = supervisory_channels;
    }

    return children;
}

void OpticalAmplifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalAmplifier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> OpticalAmplifier::clone_ptr() const
{
    return std::make_shared<OpticalAmplifier>();
}

std::string OpticalAmplifier::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string OpticalAmplifier::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function OpticalAmplifier::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OpticalAmplifier::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool OpticalAmplifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "amplifiers" || name == "supervisory-channels")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifiers()
    :
    amplifier(this, {"name"})
{

    yang_name = "amplifiers"; yang_parent_name = "optical-amplifier"; is_top_level_class = false; has_list_ancestor = false; 
}

OpticalAmplifier::Amplifiers::~Amplifiers()
{
}

bool OpticalAmplifier::Amplifiers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<amplifier.len(); index++)
    {
        if(amplifier[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalAmplifier::Amplifiers::has_operation() const
{
    for (std::size_t index=0; index<amplifier.len(); index++)
    {
        if(amplifier[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OpticalAmplifier::Amplifiers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-optical-amplifier:optical-amplifier/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalAmplifier::Amplifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amplifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amplifier")
    {
        auto c = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier>();
        c->parent = this;
        amplifier.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : amplifier.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OpticalAmplifier::Amplifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalAmplifier::Amplifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalAmplifier::Amplifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "amplifier")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::Amplifier()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::Config>())
    , state(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "amplifier"; yang_parent_name = "amplifiers"; is_top_level_class = false; has_list_ancestor = false; 
}

OpticalAmplifier::Amplifiers::Amplifier::~Amplifier()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool OpticalAmplifier::Amplifiers::Amplifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string OpticalAmplifier::Amplifiers::Amplifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-optical-amplifier:optical-amplifier/amplifiers/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalAmplifier::Amplifiers::Amplifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amplifier";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::get_children() const
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

void OpticalAmplifier::Amplifiers::Amplifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalAmplifier::Amplifiers::Amplifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OpticalAmplifier::Amplifiers::Amplifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "name")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::Config::Config()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    target_gain{YType::str, "target-gain"},
    target_gain_tilt{YType::str, "target-gain-tilt"},
    gain_range{YType::identityref, "gain-range"},
    amp_mode{YType::identityref, "amp-mode"},
    target_output_power{YType::str, "target-output-power"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "amplifier"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::Config::~Config()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| target_gain.is_set
	|| target_gain_tilt.is_set
	|| gain_range.is_set
	|| amp_mode.is_set
	|| target_output_power.is_set
	|| enabled.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(target_gain.yfilter)
	|| ydk::is_set(target_gain_tilt.yfilter)
	|| ydk::is_set(gain_range.yfilter)
	|| ydk::is_set(amp_mode.yfilter)
	|| ydk::is_set(target_output_power.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (target_gain.is_set || is_set(target_gain.yfilter)) leaf_name_data.push_back(target_gain.get_name_leafdata());
    if (target_gain_tilt.is_set || is_set(target_gain_tilt.yfilter)) leaf_name_data.push_back(target_gain_tilt.get_name_leafdata());
    if (gain_range.is_set || is_set(gain_range.yfilter)) leaf_name_data.push_back(gain_range.get_name_leafdata());
    if (amp_mode.is_set || is_set(amp_mode.yfilter)) leaf_name_data.push_back(amp_mode.get_name_leafdata());
    if (target_output_power.is_set || is_set(target_output_power.yfilter)) leaf_name_data.push_back(target_output_power.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-gain")
    {
        target_gain = value;
        target_gain.value_namespace = name_space;
        target_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-gain-tilt")
    {
        target_gain_tilt = value;
        target_gain_tilt.value_namespace = name_space;
        target_gain_tilt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gain-range")
    {
        gain_range = value;
        gain_range.value_namespace = name_space;
        gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amp-mode")
    {
        amp_mode = value;
        amp_mode.value_namespace = name_space;
        amp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-output-power")
    {
        target_output_power = value;
        target_output_power.value_namespace = name_space;
        target_output_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalAmplifier::Amplifiers::Amplifier::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "target-gain")
    {
        target_gain.yfilter = yfilter;
    }
    if(value_path == "target-gain-tilt")
    {
        target_gain_tilt.yfilter = yfilter;
    }
    if(value_path == "gain-range")
    {
        gain_range.yfilter = yfilter;
    }
    if(value_path == "amp-mode")
    {
        amp_mode.yfilter = yfilter;
    }
    if(value_path == "target-output-power")
    {
        target_output_power.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool OpticalAmplifier::Amplifiers::Amplifier::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "target-gain" || name == "target-gain-tilt" || name == "gain-range" || name == "amp-mode" || name == "target-output-power" || name == "enabled")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::State()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    target_gain{YType::str, "target-gain"},
    target_gain_tilt{YType::str, "target-gain-tilt"},
    gain_range{YType::identityref, "gain-range"},
    amp_mode{YType::identityref, "amp-mode"},
    target_output_power{YType::str, "target-output-power"},
    enabled{YType::boolean, "enabled"},
    ingress_port{YType::str, "ingress-port"},
    egress_port{YType::str, "egress-port"}
        ,
    actual_gain(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain>())
    , actual_gain_tilt(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt>())
    , input_power_total(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal>())
    , input_power_c_band(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand>())
    , input_power_l_band(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand>())
    , output_power_total(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal>())
    , output_power_c_band(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand>())
    , output_power_l_band(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand>())
    , laser_bias_current(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent>())
    , optical_return_loss(std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss>())
{
    actual_gain->parent = this;
    actual_gain_tilt->parent = this;
    input_power_total->parent = this;
    input_power_c_band->parent = this;
    input_power_l_band->parent = this;
    output_power_total->parent = this;
    output_power_c_band->parent = this;
    output_power_l_band->parent = this;
    laser_bias_current->parent = this;
    optical_return_loss->parent = this;

    yang_name = "state"; yang_parent_name = "amplifier"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::~State()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| target_gain.is_set
	|| target_gain_tilt.is_set
	|| gain_range.is_set
	|| amp_mode.is_set
	|| target_output_power.is_set
	|| enabled.is_set
	|| ingress_port.is_set
	|| egress_port.is_set
	|| (actual_gain !=  nullptr && actual_gain->has_data())
	|| (actual_gain_tilt !=  nullptr && actual_gain_tilt->has_data())
	|| (input_power_total !=  nullptr && input_power_total->has_data())
	|| (input_power_c_band !=  nullptr && input_power_c_band->has_data())
	|| (input_power_l_band !=  nullptr && input_power_l_band->has_data())
	|| (output_power_total !=  nullptr && output_power_total->has_data())
	|| (output_power_c_band !=  nullptr && output_power_c_band->has_data())
	|| (output_power_l_band !=  nullptr && output_power_l_band->has_data())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_data())
	|| (optical_return_loss !=  nullptr && optical_return_loss->has_data());
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(target_gain.yfilter)
	|| ydk::is_set(target_gain_tilt.yfilter)
	|| ydk::is_set(gain_range.yfilter)
	|| ydk::is_set(amp_mode.yfilter)
	|| ydk::is_set(target_output_power.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(ingress_port.yfilter)
	|| ydk::is_set(egress_port.yfilter)
	|| (actual_gain !=  nullptr && actual_gain->has_operation())
	|| (actual_gain_tilt !=  nullptr && actual_gain_tilt->has_operation())
	|| (input_power_total !=  nullptr && input_power_total->has_operation())
	|| (input_power_c_band !=  nullptr && input_power_c_band->has_operation())
	|| (input_power_l_band !=  nullptr && input_power_l_band->has_operation())
	|| (output_power_total !=  nullptr && output_power_total->has_operation())
	|| (output_power_c_band !=  nullptr && output_power_c_band->has_operation())
	|| (output_power_l_band !=  nullptr && output_power_l_band->has_operation())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_operation())
	|| (optical_return_loss !=  nullptr && optical_return_loss->has_operation());
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (target_gain.is_set || is_set(target_gain.yfilter)) leaf_name_data.push_back(target_gain.get_name_leafdata());
    if (target_gain_tilt.is_set || is_set(target_gain_tilt.yfilter)) leaf_name_data.push_back(target_gain_tilt.get_name_leafdata());
    if (gain_range.is_set || is_set(gain_range.yfilter)) leaf_name_data.push_back(gain_range.get_name_leafdata());
    if (amp_mode.is_set || is_set(amp_mode.yfilter)) leaf_name_data.push_back(amp_mode.get_name_leafdata());
    if (target_output_power.is_set || is_set(target_output_power.yfilter)) leaf_name_data.push_back(target_output_power.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ingress_port.is_set || is_set(ingress_port.yfilter)) leaf_name_data.push_back(ingress_port.get_name_leafdata());
    if (egress_port.is_set || is_set(egress_port.yfilter)) leaf_name_data.push_back(egress_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actual-gain")
    {
        if(actual_gain == nullptr)
        {
            actual_gain = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain>();
        }
        return actual_gain;
    }

    if(child_yang_name == "actual-gain-tilt")
    {
        if(actual_gain_tilt == nullptr)
        {
            actual_gain_tilt = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt>();
        }
        return actual_gain_tilt;
    }

    if(child_yang_name == "input-power-total")
    {
        if(input_power_total == nullptr)
        {
            input_power_total = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal>();
        }
        return input_power_total;
    }

    if(child_yang_name == "input-power-c-band")
    {
        if(input_power_c_band == nullptr)
        {
            input_power_c_band = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand>();
        }
        return input_power_c_band;
    }

    if(child_yang_name == "input-power-l-band")
    {
        if(input_power_l_band == nullptr)
        {
            input_power_l_band = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand>();
        }
        return input_power_l_band;
    }

    if(child_yang_name == "output-power-total")
    {
        if(output_power_total == nullptr)
        {
            output_power_total = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal>();
        }
        return output_power_total;
    }

    if(child_yang_name == "output-power-c-band")
    {
        if(output_power_c_band == nullptr)
        {
            output_power_c_band = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand>();
        }
        return output_power_c_band;
    }

    if(child_yang_name == "output-power-l-band")
    {
        if(output_power_l_band == nullptr)
        {
            output_power_l_band = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand>();
        }
        return output_power_l_band;
    }

    if(child_yang_name == "laser-bias-current")
    {
        if(laser_bias_current == nullptr)
        {
            laser_bias_current = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent>();
        }
        return laser_bias_current;
    }

    if(child_yang_name == "optical-return-loss")
    {
        if(optical_return_loss == nullptr)
        {
            optical_return_loss = std::make_shared<OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss>();
        }
        return optical_return_loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actual_gain != nullptr)
    {
        children["actual-gain"] = actual_gain;
    }

    if(actual_gain_tilt != nullptr)
    {
        children["actual-gain-tilt"] = actual_gain_tilt;
    }

    if(input_power_total != nullptr)
    {
        children["input-power-total"] = input_power_total;
    }

    if(input_power_c_band != nullptr)
    {
        children["input-power-c-band"] = input_power_c_band;
    }

    if(input_power_l_band != nullptr)
    {
        children["input-power-l-band"] = input_power_l_band;
    }

    if(output_power_total != nullptr)
    {
        children["output-power-total"] = output_power_total;
    }

    if(output_power_c_band != nullptr)
    {
        children["output-power-c-band"] = output_power_c_band;
    }

    if(output_power_l_band != nullptr)
    {
        children["output-power-l-band"] = output_power_l_band;
    }

    if(laser_bias_current != nullptr)
    {
        children["laser-bias-current"] = laser_bias_current;
    }

    if(optical_return_loss != nullptr)
    {
        children["optical-return-loss"] = optical_return_loss;
    }

    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-gain")
    {
        target_gain = value;
        target_gain.value_namespace = name_space;
        target_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-gain-tilt")
    {
        target_gain_tilt = value;
        target_gain_tilt.value_namespace = name_space;
        target_gain_tilt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gain-range")
    {
        gain_range = value;
        gain_range.value_namespace = name_space;
        gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amp-mode")
    {
        amp_mode = value;
        amp_mode.value_namespace = name_space;
        amp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-output-power")
    {
        target_output_power = value;
        target_output_power.value_namespace = name_space;
        target_output_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-port")
    {
        ingress_port = value;
        ingress_port.value_namespace = name_space;
        ingress_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-port")
    {
        egress_port = value;
        egress_port.value_namespace = name_space;
        egress_port.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalAmplifier::Amplifiers::Amplifier::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "target-gain")
    {
        target_gain.yfilter = yfilter;
    }
    if(value_path == "target-gain-tilt")
    {
        target_gain_tilt.yfilter = yfilter;
    }
    if(value_path == "gain-range")
    {
        gain_range.yfilter = yfilter;
    }
    if(value_path == "amp-mode")
    {
        amp_mode.yfilter = yfilter;
    }
    if(value_path == "target-output-power")
    {
        target_output_power.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "ingress-port")
    {
        ingress_port.yfilter = yfilter;
    }
    if(value_path == "egress-port")
    {
        egress_port.yfilter = yfilter;
    }
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actual-gain" || name == "actual-gain-tilt" || name == "input-power-total" || name == "input-power-c-band" || name == "input-power-l-band" || name == "output-power-total" || name == "output-power-c-band" || name == "output-power-l-band" || name == "laser-bias-current" || name == "optical-return-loss" || name == "name" || name == "type" || name == "target-gain" || name == "target-gain-tilt" || name == "gain-range" || name == "amp-mode" || name == "target-output-power" || name == "enabled" || name == "ingress-port" || name == "egress-port")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::ActualGain()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "actual-gain"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::~ActualGain()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actual-gain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::ActualGainTilt()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "actual-gain-tilt"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::~ActualGainTilt()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actual-gain-tilt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::InputPowerTotal()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "input-power-total"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::~InputPowerTotal()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-power-total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::InputPowerCBand()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "input-power-c-band"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::~InputPowerCBand()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-power-c-band";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::InputPowerLBand()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "input-power-l-band"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::~InputPowerLBand()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-power-l-band";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::OutputPowerTotal()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "output-power-total"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::~OutputPowerTotal()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-power-total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::OutputPowerCBand()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "output-power-c-band"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::~OutputPowerCBand()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-power-c-band";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::OutputPowerLBand()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "output-power-l-band"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::~OutputPowerLBand()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-power-l-band";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::LaserBiasCurrent()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "laser-bias-current"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::~LaserBiasCurrent()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-bias-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::OpticalReturnLoss()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "optical-return-loss"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::~OpticalReturnLoss()
{
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-return-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannels()
    :
    supervisory_channel(this, {"interface"})
{

    yang_name = "supervisory-channels"; yang_parent_name = "optical-amplifier"; is_top_level_class = false; has_list_ancestor = false; 
}

OpticalAmplifier::SupervisoryChannels::~SupervisoryChannels()
{
}

bool OpticalAmplifier::SupervisoryChannels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<supervisory_channel.len(); index++)
    {
        if(supervisory_channel[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalAmplifier::SupervisoryChannels::has_operation() const
{
    for (std::size_t index=0; index<supervisory_channel.len(); index++)
    {
        if(supervisory_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OpticalAmplifier::SupervisoryChannels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-optical-amplifier:optical-amplifier/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalAmplifier::SupervisoryChannels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supervisory-channels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::SupervisoryChannels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::SupervisoryChannels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supervisory-channel")
    {
        auto c = std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel>();
        c->parent = this;
        supervisory_channel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::SupervisoryChannels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : supervisory_channel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OpticalAmplifier::SupervisoryChannels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalAmplifier::SupervisoryChannels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalAmplifier::SupervisoryChannels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supervisory-channel")
        return true;
    return false;
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::SupervisoryChannel()
    :
    interface{YType::str, "interface"}
        ,
    config(std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config>())
    , state(std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "supervisory-channel"; yang_parent_name = "supervisory-channels"; is_top_level_class = false; has_list_ancestor = false; 
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::~SupervisoryChannel()
{
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-optical-amplifier:optical-amplifier/supervisory-channels/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supervisory-channel";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::get_children() const
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

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface")
        return true;
    return false;
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::Config()
    :
    interface{YType::str, "interface"}
{

    yang_name = "config"; yang_parent_name = "supervisory-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::~Config()
{
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::State()
    :
    interface{YType::str, "interface"}
        ,
    input_power(std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower>())
    , output_power(std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower>())
    , laser_bias_current(std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent>())
{
    input_power->parent = this;
    output_power->parent = this;
    laser_bias_current->parent = this;

    yang_name = "state"; yang_parent_name = "supervisory-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::~State()
{
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (input_power !=  nullptr && input_power->has_data())
	|| (output_power !=  nullptr && output_power->has_data())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_data());
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (input_power !=  nullptr && input_power->has_operation())
	|| (output_power !=  nullptr && output_power->has_operation())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_operation());
}

std::string OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-power")
    {
        if(input_power == nullptr)
        {
            input_power = std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower>();
        }
        return input_power;
    }

    if(child_yang_name == "output-power")
    {
        if(output_power == nullptr)
        {
            output_power = std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower>();
        }
        return output_power;
    }

    if(child_yang_name == "laser-bias-current")
    {
        if(laser_bias_current == nullptr)
        {
            laser_bias_current = std::make_shared<OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent>();
        }
        return laser_bias_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input_power != nullptr)
    {
        children["input-power"] = input_power;
    }

    if(output_power != nullptr)
    {
        children["output-power"] = output_power;
    }

    if(laser_bias_current != nullptr)
    {
        children["laser-bias-current"] = laser_bias_current;
    }

    return children;
}

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-power" || name == "output-power" || name == "laser-bias-current" || name == "interface")
        return true;
    return false;
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::InputPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "input-power"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::~InputPower()
{
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::OutputPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "output-power"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::~OutputPower()
{
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::LaserBiasCurrent()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    min{YType::str, "min"},
    max{YType::str, "max"}
{

    yang_name = "laser-bias-current"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::~LaserBiasCurrent()
{
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| min.is_set
	|| max.is_set;
}

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-bias-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "min" || name == "max")
        return true;
    return false;
}

LOWGAINRANGE::LOWGAINRANGE()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:LOW_GAIN_RANGE")
{

}

LOWGAINRANGE::~LOWGAINRANGE()
{
}

BACKWARDRAMAN::BACKWARDRAMAN()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:BACKWARD_RAMAN")
{

}

BACKWARDRAMAN::~BACKWARDRAMAN()
{
}

CONSTANTGAIN::CONSTANTGAIN()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:CONSTANT_GAIN")
{

}

CONSTANTGAIN::~CONSTANTGAIN()
{
}

FIXEDGAINRANGE::FIXEDGAINRANGE()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:FIXED_GAIN_RANGE")
{

}

FIXEDGAINRANGE::~FIXEDGAINRANGE()
{
}

MIDGAINRANGE::MIDGAINRANGE()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:MID_GAIN_RANGE")
{

}

MIDGAINRANGE::~MIDGAINRANGE()
{
}

HIGHGAINRANGE::HIGHGAINRANGE()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:HIGH_GAIN_RANGE")
{

}

HIGHGAINRANGE::~HIGHGAINRANGE()
{
}

HYBRID::HYBRID()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:HYBRID")
{

}

HYBRID::~HYBRID()
{
}

FORWARDRAMAN::FORWARDRAMAN()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:FORWARD_RAMAN")
{

}

FORWARDRAMAN::~FORWARDRAMAN()
{
}

EDFA::EDFA()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:EDFA")
{

}

EDFA::~EDFA()
{
}

CONSTANTPOWER::CONSTANTPOWER()
     : Identity("http://openconfig.net/yang/optical-amplfier", "openconfig-optical-amplifier", "openconfig-optical-amplifier:CONSTANT_POWER")
{

}

CONSTANTPOWER::~CONSTANTPOWER()
{
}


}
}

