
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_environment_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_environment_oper {

EnvironmentSensors::EnvironmentSensors()
{
    yang_name = "environment-sensors"; yang_parent_name = "Cisco-IOS-XE-environment-oper";
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
    return is_set(operation);
}

std::string EnvironmentSensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-environment-oper:environment-sensors";

    return path_buffer.str();

}

const EntityPath EnvironmentSensors::get_entity_path(Entity* ancestor) const
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

void EnvironmentSensors::set_value(const std::string & value_path, std::string value)
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

EnvironmentSensors::EnvironmentSensor::EnvironmentSensor()
    :
    name{YType::str, "name"},
    location{YType::str, "location"},
    current_reading{YType::uint32, "current-reading"},
    sensor_units{YType::enumeration, "sensor-units"},
    state{YType::str, "state"}
{
    yang_name = "environment-sensor"; yang_parent_name = "environment-sensors";
}

EnvironmentSensors::EnvironmentSensor::~EnvironmentSensor()
{
}

bool EnvironmentSensors::EnvironmentSensor::has_data() const
{
    return name.is_set
	|| location.is_set
	|| current_reading.is_set
	|| sensor_units.is_set
	|| state.is_set;
}

bool EnvironmentSensors::EnvironmentSensor::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(location.operation)
	|| is_set(current_reading.operation)
	|| is_set(sensor_units.operation)
	|| is_set(state.operation);
}

std::string EnvironmentSensors::EnvironmentSensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment-sensor" <<"[name='" <<name <<"']" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

const EntityPath EnvironmentSensors::EnvironmentSensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-environment-oper:environment-sensors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (current_reading.is_set || is_set(current_reading.operation)) leaf_name_data.push_back(current_reading.get_name_leafdata());
    if (sensor_units.is_set || is_set(sensor_units.operation)) leaf_name_data.push_back(sensor_units.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void EnvironmentSensors::EnvironmentSensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "current-reading")
    {
        current_reading = value;
    }
    if(value_path == "sensor-units")
    {
        sensor_units = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

const Enum::YLeaf SensorUnitsTypeEnum::Watts {0, "Watts"};
const Enum::YLeaf SensorUnitsTypeEnum::Celsius {1, "Celsius"};
const Enum::YLeaf SensorUnitsTypeEnum::milliVolts {2, "milliVolts"};
const Enum::YLeaf SensorUnitsTypeEnum::Amperes {3, "Amperes"};
const Enum::YLeaf SensorUnitsTypeEnum::Volts_DC {4, "Volts-DC"};
const Enum::YLeaf SensorUnitsTypeEnum::Volts_AC {5, "Volts-AC"};
const Enum::YLeaf SensorUnitsTypeEnum::milliAmperes {6, "milliAmperes"};


}
}

