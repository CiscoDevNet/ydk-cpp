
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_environment_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_environment_oper {

EnvironmentSensors::EnvironmentSensors()
{

    yang_name = "environment-sensors"; yang_parent_name = "Cisco-IOS-XE-environment-oper"; is_top_level_class = true; has_list_ancestor = false;
}

EnvironmentSensors::~EnvironmentSensors()
{
}

bool EnvironmentSensors::has_data() const
{
    for (std::size_t index=0; index<environment_sensor.size(); index++)
    {
        if(environment_sensor[index]->has_data())
            return true;
    }
    return false;
}

bool EnvironmentSensors::has_operation() const
{
    for (std::size_t index=0; index<environment_sensor.size(); index++)
    {
        if(environment_sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EnvironmentSensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-environment-oper:environment-sensors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EnvironmentSensors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EnvironmentSensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "environment-sensor")
    {
        for(auto const & c : environment_sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EnvironmentSensors::EnvironmentSensor>();
        c->parent = this;
        environment_sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentSensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : environment_sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EnvironmentSensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EnvironmentSensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EnvironmentSensors::clone_ptr() const
{
    return std::make_shared<EnvironmentSensors>();
}

std::string EnvironmentSensors::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EnvironmentSensors::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EnvironmentSensors::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EnvironmentSensors::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool EnvironmentSensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "environment-sensor")
        return true;
    return false;
}

EnvironmentSensors::EnvironmentSensor::EnvironmentSensor()
    :
    name{YType::str, "name"},
    location{YType::str, "location"},
    state{YType::str, "state"},
    current_reading{YType::uint32, "current-reading"},
    sensor_units{YType::enumeration, "sensor-units"}
{

    yang_name = "environment-sensor"; yang_parent_name = "environment-sensors"; is_top_level_class = false; has_list_ancestor = false;
}

EnvironmentSensors::EnvironmentSensor::~EnvironmentSensor()
{
}

bool EnvironmentSensors::EnvironmentSensor::has_data() const
{
    return name.is_set
	|| location.is_set
	|| state.is_set
	|| current_reading.is_set
	|| sensor_units.is_set;
}

bool EnvironmentSensors::EnvironmentSensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(current_reading.yfilter)
	|| ydk::is_set(sensor_units.yfilter);
}

std::string EnvironmentSensors::EnvironmentSensor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-environment-oper:environment-sensors/" << get_segment_path();
    return path_buffer.str();
}

std::string EnvironmentSensors::EnvironmentSensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment-sensor" <<"[name='" <<name <<"']" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EnvironmentSensors::EnvironmentSensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (current_reading.is_set || is_set(current_reading.yfilter)) leaf_name_data.push_back(current_reading.get_name_leafdata());
    if (sensor_units.is_set || is_set(sensor_units.yfilter)) leaf_name_data.push_back(sensor_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EnvironmentSensors::EnvironmentSensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentSensors::EnvironmentSensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EnvironmentSensors::EnvironmentSensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-reading")
    {
        current_reading = value;
        current_reading.value_namespace = name_space;
        current_reading.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor-units")
    {
        sensor_units = value;
        sensor_units.value_namespace = name_space;
        sensor_units.value_namespace_prefix = name_space_prefix;
    }
}

void EnvironmentSensors::EnvironmentSensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "current-reading")
    {
        current_reading.yfilter = yfilter;
    }
    if(value_path == "sensor-units")
    {
        sensor_units.yfilter = yfilter;
    }
}

bool EnvironmentSensors::EnvironmentSensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "location" || name == "state" || name == "current-reading" || name == "sensor-units")
        return true;
    return false;
}

const Enum::YLeaf SensorUnitsType::Watts {0, "Watts"};
const Enum::YLeaf SensorUnitsType::Celsius {1, "Celsius"};
const Enum::YLeaf SensorUnitsType::milliVolts {2, "milliVolts"};
const Enum::YLeaf SensorUnitsType::Amperes {3, "Amperes"};
const Enum::YLeaf SensorUnitsType::Volts_DC {4, "Volts-DC"};
const Enum::YLeaf SensorUnitsType::Volts_AC {5, "Volts-AC"};
const Enum::YLeaf SensorUnitsType::milliAmperes {6, "milliAmperes"};


}
}

