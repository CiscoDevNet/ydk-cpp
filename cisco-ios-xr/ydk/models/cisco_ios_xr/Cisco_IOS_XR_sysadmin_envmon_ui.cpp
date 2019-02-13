
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_envmon_ui.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_envmon_ui {

Environment::Environment()
    :
    oper(std::make_shared<Environment::Oper>())
    , all(std::make_shared<Environment::All>())
    , config(std::make_shared<Environment::Config>())
    , trace(this, {"buffer"})
{
    oper->parent = this;
    all->parent = this;
    config->parent = this;

    yang_name = "environment"; yang_parent_name = "Cisco-IOS-XR-sysadmin-envmon-ui"; is_top_level_class = true; has_list_ancestor = false; 
}

Environment::~Environment()
{
}

bool Environment::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return (oper !=  nullptr && oper->has_data())
	|| (all !=  nullptr && all->has_data())
	|| (config !=  nullptr && config->has_data());
}

bool Environment::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (oper !=  nullptr && oper->has_operation())
	|| (all !=  nullptr && all->has_operation())
	|| (config !=  nullptr && config->has_operation());
}

std::string Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Environment::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Environment::All>();
        }
        return all;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Environment::Config>();
        }
        return config;
    }

    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Environment::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(config != nullptr)
    {
        _children["config"] = config;
    }

    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Environment::clone_ptr() const
{
    return std::make_shared<Environment>();
}

std::string Environment::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Environment::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Environment::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Environment::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper" || name == "all" || name == "config" || name == "trace")
        return true;
    return false;
}

Environment::Oper::Oper()
    :
    temperatures(std::make_shared<Environment::Oper::Temperatures>())
    , voltages(std::make_shared<Environment::Oper::Voltages>())
    , current(std::make_shared<Environment::Oper::Current>())
    , fan(std::make_shared<Environment::Oper::Fan>())
    , power(std::make_shared<Environment::Oper::Power>())
    , altitude(std::make_shared<Environment::Oper::Altitude>())
{
    temperatures->parent = this;
    voltages->parent = this;
    current->parent = this;
    fan->parent = this;
    power->parent = this;
    altitude->parent = this;

    yang_name = "oper"; yang_parent_name = "environment"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::~Oper()
{
}

bool Environment::Oper::has_data() const
{
    if (is_presence_container) return true;
    return (temperatures !=  nullptr && temperatures->has_data())
	|| (voltages !=  nullptr && voltages->has_data())
	|| (current !=  nullptr && current->has_data())
	|| (fan !=  nullptr && fan->has_data())
	|| (power !=  nullptr && power->has_data())
	|| (altitude !=  nullptr && altitude->has_data());
}

bool Environment::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (temperatures !=  nullptr && temperatures->has_operation())
	|| (voltages !=  nullptr && voltages->has_operation())
	|| (current !=  nullptr && current->has_operation())
	|| (fan !=  nullptr && fan->has_operation())
	|| (power !=  nullptr && power->has_operation())
	|| (altitude !=  nullptr && altitude->has_operation());
}

std::string Environment::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "temperatures")
    {
        if(temperatures == nullptr)
        {
            temperatures = std::make_shared<Environment::Oper::Temperatures>();
        }
        return temperatures;
    }

    if(child_yang_name == "voltages")
    {
        if(voltages == nullptr)
        {
            voltages = std::make_shared<Environment::Oper::Voltages>();
        }
        return voltages;
    }

    if(child_yang_name == "current")
    {
        if(current == nullptr)
        {
            current = std::make_shared<Environment::Oper::Current>();
        }
        return current;
    }

    if(child_yang_name == "fan")
    {
        if(fan == nullptr)
        {
            fan = std::make_shared<Environment::Oper::Fan>();
        }
        return fan;
    }

    if(child_yang_name == "power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<Environment::Oper::Power>();
        }
        return power;
    }

    if(child_yang_name == "altitude")
    {
        if(altitude == nullptr)
        {
            altitude = std::make_shared<Environment::Oper::Altitude>();
        }
        return altitude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(temperatures != nullptr)
    {
        _children["temperatures"] = temperatures;
    }

    if(voltages != nullptr)
    {
        _children["voltages"] = voltages;
    }

    if(current != nullptr)
    {
        _children["current"] = current;
    }

    if(fan != nullptr)
    {
        _children["fan"] = fan;
    }

    if(power != nullptr)
    {
        _children["power"] = power;
    }

    if(altitude != nullptr)
    {
        _children["altitude"] = altitude;
    }

    return _children;
}

void Environment::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "temperatures" || name == "voltages" || name == "current" || name == "fan" || name == "power" || name == "altitude")
        return true;
    return false;
}

Environment::Oper::Temperatures::Temperatures()
    :
    location(this, {"location"})
{

    yang_name = "temperatures"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Temperatures::~Temperatures()
{
}

bool Environment::Oper::Temperatures::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::Oper::Temperatures::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::Oper::Temperatures::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Temperatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "temperatures";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Temperatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Temperatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Oper::Temperatures::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Temperatures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Temperatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Oper::Temperatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Oper::Temperatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::Oper::Temperatures::Location::Location()
    :
    location{YType::str, "location"},
    loc_header{YType::uint32, "loc_header"},
    print_header{YType::boolean, "print_header"}
        ,
    sensor_attributes(this, {"sensor"})
{

    yang_name = "location"; yang_parent_name = "temperatures"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Temperatures::Location::~Location()
{
}

bool Environment::Oper::Temperatures::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_data())
            return true;
    }
    return location.is_set
	|| loc_header.is_set
	|| print_header.is_set;
}

bool Environment::Oper::Temperatures::Location::has_operation() const
{
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(loc_header.yfilter)
	|| ydk::is_set(print_header.yfilter);
}

std::string Environment::Oper::Temperatures::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/temperatures/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Temperatures::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Temperatures::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (loc_header.is_set || is_set(loc_header.yfilter)) leaf_name_data.push_back(loc_header.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Temperatures::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor_attributes")
    {
        auto ent_ = std::make_shared<Environment::Oper::Temperatures::Location::SensorAttributes>();
        ent_->parent = this;
        sensor_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Temperatures::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Temperatures::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc_header")
    {
        loc_header = value;
        loc_header.value_namespace = name_space;
        loc_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Temperatures::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "loc_header")
    {
        loc_header.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
}

bool Environment::Oper::Temperatures::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor_attributes" || name == "location" || name == "loc_header" || name == "print_header")
        return true;
    return false;
}

Environment::Oper::Temperatures::Location::SensorAttributes::SensorAttributes()
    :
    sensor{YType::str, "sensor"},
    sensor_id{YType::str, "sensor_id"},
    alarm{YType::str, "alarm"},
    temperature_value{YType::str, "temperature_value"},
    value_{YType::int32, "value"},
    critical_lo{YType::int32, "critical_lo"},
    major_lo{YType::int32, "major_lo"},
    minor_lo{YType::int32, "minor_lo"},
    minor_hi{YType::int32, "minor_hi"},
    major_hi{YType::int32, "major_hi"},
    critical_hi{YType::int32, "critical_hi"}
{

    yang_name = "sensor_attributes"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Oper::Temperatures::Location::SensorAttributes::~SensorAttributes()
{
}

bool Environment::Oper::Temperatures::Location::SensorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return sensor.is_set
	|| sensor_id.is_set
	|| alarm.is_set
	|| temperature_value.is_set
	|| value_.is_set
	|| critical_lo.is_set
	|| major_lo.is_set
	|| minor_lo.is_set
	|| minor_hi.is_set
	|| major_hi.is_set
	|| critical_hi.is_set;
}

bool Environment::Oper::Temperatures::Location::SensorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor.yfilter)
	|| ydk::is_set(sensor_id.yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(temperature_value.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(critical_lo.yfilter)
	|| ydk::is_set(major_lo.yfilter)
	|| ydk::is_set(minor_lo.yfilter)
	|| ydk::is_set(minor_hi.yfilter)
	|| ydk::is_set(major_hi.yfilter)
	|| ydk::is_set(critical_hi.yfilter);
}

std::string Environment::Oper::Temperatures::Location::SensorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor_attributes";
    ADD_KEY_TOKEN(sensor, "sensor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Temperatures::Location::SensorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor.is_set || is_set(sensor.yfilter)) leaf_name_data.push_back(sensor.get_name_leafdata());
    if (sensor_id.is_set || is_set(sensor_id.yfilter)) leaf_name_data.push_back(sensor_id.get_name_leafdata());
    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (temperature_value.is_set || is_set(temperature_value.yfilter)) leaf_name_data.push_back(temperature_value.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (critical_lo.is_set || is_set(critical_lo.yfilter)) leaf_name_data.push_back(critical_lo.get_name_leafdata());
    if (major_lo.is_set || is_set(major_lo.yfilter)) leaf_name_data.push_back(major_lo.get_name_leafdata());
    if (minor_lo.is_set || is_set(minor_lo.yfilter)) leaf_name_data.push_back(minor_lo.get_name_leafdata());
    if (minor_hi.is_set || is_set(minor_hi.yfilter)) leaf_name_data.push_back(minor_hi.get_name_leafdata());
    if (major_hi.is_set || is_set(major_hi.yfilter)) leaf_name_data.push_back(major_hi.get_name_leafdata());
    if (critical_hi.is_set || is_set(critical_hi.yfilter)) leaf_name_data.push_back(critical_hi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Temperatures::Location::SensorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Temperatures::Location::SensorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Oper::Temperatures::Location::SensorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor")
    {
        sensor = value;
        sensor.value_namespace = name_space;
        sensor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor_id")
    {
        sensor_id = value;
        sensor_id.value_namespace = name_space;
        sensor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature_value")
    {
        temperature_value = value;
        temperature_value.value_namespace = name_space;
        temperature_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical_lo")
    {
        critical_lo = value;
        critical_lo.value_namespace = name_space;
        critical_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major_lo")
    {
        major_lo = value;
        major_lo.value_namespace = name_space;
        major_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor_lo")
    {
        minor_lo = value;
        minor_lo.value_namespace = name_space;
        minor_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor_hi")
    {
        minor_hi = value;
        minor_hi.value_namespace = name_space;
        minor_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major_hi")
    {
        major_hi = value;
        major_hi.value_namespace = name_space;
        major_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical_hi")
    {
        critical_hi = value;
        critical_hi.value_namespace = name_space;
        critical_hi.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Temperatures::Location::SensorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor")
    {
        sensor.yfilter = yfilter;
    }
    if(value_path == "sensor_id")
    {
        sensor_id.yfilter = yfilter;
    }
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "temperature_value")
    {
        temperature_value.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "critical_lo")
    {
        critical_lo.yfilter = yfilter;
    }
    if(value_path == "major_lo")
    {
        major_lo.yfilter = yfilter;
    }
    if(value_path == "minor_lo")
    {
        minor_lo.yfilter = yfilter;
    }
    if(value_path == "minor_hi")
    {
        minor_hi.yfilter = yfilter;
    }
    if(value_path == "major_hi")
    {
        major_hi.yfilter = yfilter;
    }
    if(value_path == "critical_hi")
    {
        critical_hi.yfilter = yfilter;
    }
}

bool Environment::Oper::Temperatures::Location::SensorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor" || name == "sensor_id" || name == "alarm" || name == "temperature_value" || name == "value" || name == "critical_lo" || name == "major_lo" || name == "minor_lo" || name == "minor_hi" || name == "major_hi" || name == "critical_hi")
        return true;
    return false;
}

Environment::Oper::Voltages::Voltages()
    :
    location(this, {"location"})
{

    yang_name = "voltages"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Voltages::~Voltages()
{
}

bool Environment::Oper::Voltages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::Oper::Voltages::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::Oper::Voltages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Voltages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voltages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Voltages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Voltages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Oper::Voltages::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Voltages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Voltages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Oper::Voltages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Oper::Voltages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::Oper::Voltages::Location::Location()
    :
    location{YType::str, "location"},
    print_header{YType::boolean, "print_header"},
    loc_header{YType::uint32, "loc_header"}
        ,
    sensor_attributes(this, {"sensor"})
{

    yang_name = "location"; yang_parent_name = "voltages"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Voltages::Location::~Location()
{
}

bool Environment::Oper::Voltages::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_data())
            return true;
    }
    return location.is_set
	|| print_header.is_set
	|| loc_header.is_set;
}

bool Environment::Oper::Voltages::Location::has_operation() const
{
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(print_header.yfilter)
	|| ydk::is_set(loc_header.yfilter);
}

std::string Environment::Oper::Voltages::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/voltages/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Voltages::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Voltages::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());
    if (loc_header.is_set || is_set(loc_header.yfilter)) leaf_name_data.push_back(loc_header.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Voltages::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor_attributes")
    {
        auto ent_ = std::make_shared<Environment::Oper::Voltages::Location::SensorAttributes>();
        ent_->parent = this;
        sensor_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Voltages::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Voltages::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc_header")
    {
        loc_header = value;
        loc_header.value_namespace = name_space;
        loc_header.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Voltages::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
    if(value_path == "loc_header")
    {
        loc_header.yfilter = yfilter;
    }
}

bool Environment::Oper::Voltages::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor_attributes" || name == "location" || name == "print_header" || name == "loc_header")
        return true;
    return false;
}

Environment::Oper::Voltages::Location::SensorAttributes::SensorAttributes()
    :
    sensor{YType::str, "sensor"},
    sensor_id{YType::str, "sensor_id"},
    alarm{YType::str, "alarm"},
    value_{YType::str, "value"},
    temperature_value{YType::int32, "temperature_value"},
    critical_lo{YType::int32, "critical_lo"},
    major_lo{YType::int32, "major_lo"},
    minor_lo{YType::int32, "minor_lo"},
    minor_hi{YType::int32, "minor_hi"},
    major_hi{YType::int32, "major_hi"},
    critical_hi{YType::int32, "critical_hi"}
{

    yang_name = "sensor_attributes"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Oper::Voltages::Location::SensorAttributes::~SensorAttributes()
{
}

bool Environment::Oper::Voltages::Location::SensorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return sensor.is_set
	|| sensor_id.is_set
	|| alarm.is_set
	|| value_.is_set
	|| temperature_value.is_set
	|| critical_lo.is_set
	|| major_lo.is_set
	|| minor_lo.is_set
	|| minor_hi.is_set
	|| major_hi.is_set
	|| critical_hi.is_set;
}

bool Environment::Oper::Voltages::Location::SensorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor.yfilter)
	|| ydk::is_set(sensor_id.yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(temperature_value.yfilter)
	|| ydk::is_set(critical_lo.yfilter)
	|| ydk::is_set(major_lo.yfilter)
	|| ydk::is_set(minor_lo.yfilter)
	|| ydk::is_set(minor_hi.yfilter)
	|| ydk::is_set(major_hi.yfilter)
	|| ydk::is_set(critical_hi.yfilter);
}

std::string Environment::Oper::Voltages::Location::SensorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor_attributes";
    ADD_KEY_TOKEN(sensor, "sensor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Voltages::Location::SensorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor.is_set || is_set(sensor.yfilter)) leaf_name_data.push_back(sensor.get_name_leafdata());
    if (sensor_id.is_set || is_set(sensor_id.yfilter)) leaf_name_data.push_back(sensor_id.get_name_leafdata());
    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (temperature_value.is_set || is_set(temperature_value.yfilter)) leaf_name_data.push_back(temperature_value.get_name_leafdata());
    if (critical_lo.is_set || is_set(critical_lo.yfilter)) leaf_name_data.push_back(critical_lo.get_name_leafdata());
    if (major_lo.is_set || is_set(major_lo.yfilter)) leaf_name_data.push_back(major_lo.get_name_leafdata());
    if (minor_lo.is_set || is_set(minor_lo.yfilter)) leaf_name_data.push_back(minor_lo.get_name_leafdata());
    if (minor_hi.is_set || is_set(minor_hi.yfilter)) leaf_name_data.push_back(minor_hi.get_name_leafdata());
    if (major_hi.is_set || is_set(major_hi.yfilter)) leaf_name_data.push_back(major_hi.get_name_leafdata());
    if (critical_hi.is_set || is_set(critical_hi.yfilter)) leaf_name_data.push_back(critical_hi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Voltages::Location::SensorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Voltages::Location::SensorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Oper::Voltages::Location::SensorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor")
    {
        sensor = value;
        sensor.value_namespace = name_space;
        sensor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor_id")
    {
        sensor_id = value;
        sensor_id.value_namespace = name_space;
        sensor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature_value")
    {
        temperature_value = value;
        temperature_value.value_namespace = name_space;
        temperature_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical_lo")
    {
        critical_lo = value;
        critical_lo.value_namespace = name_space;
        critical_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major_lo")
    {
        major_lo = value;
        major_lo.value_namespace = name_space;
        major_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor_lo")
    {
        minor_lo = value;
        minor_lo.value_namespace = name_space;
        minor_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor_hi")
    {
        minor_hi = value;
        minor_hi.value_namespace = name_space;
        minor_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major_hi")
    {
        major_hi = value;
        major_hi.value_namespace = name_space;
        major_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical_hi")
    {
        critical_hi = value;
        critical_hi.value_namespace = name_space;
        critical_hi.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Voltages::Location::SensorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor")
    {
        sensor.yfilter = yfilter;
    }
    if(value_path == "sensor_id")
    {
        sensor_id.yfilter = yfilter;
    }
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "temperature_value")
    {
        temperature_value.yfilter = yfilter;
    }
    if(value_path == "critical_lo")
    {
        critical_lo.yfilter = yfilter;
    }
    if(value_path == "major_lo")
    {
        major_lo.yfilter = yfilter;
    }
    if(value_path == "minor_lo")
    {
        minor_lo.yfilter = yfilter;
    }
    if(value_path == "minor_hi")
    {
        minor_hi.yfilter = yfilter;
    }
    if(value_path == "major_hi")
    {
        major_hi.yfilter = yfilter;
    }
    if(value_path == "critical_hi")
    {
        critical_hi.yfilter = yfilter;
    }
}

bool Environment::Oper::Voltages::Location::SensorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor" || name == "sensor_id" || name == "alarm" || name == "value" || name == "temperature_value" || name == "critical_lo" || name == "major_lo" || name == "minor_lo" || name == "minor_hi" || name == "major_hi" || name == "critical_hi")
        return true;
    return false;
}

Environment::Oper::Current::Current()
    :
    location(this, {"location"})
{

    yang_name = "current"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Current::~Current()
{
}

bool Environment::Oper::Current::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::Oper::Current::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::Oper::Current::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Current::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Current::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Current::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Oper::Current::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Current::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Current::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Oper::Current::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Oper::Current::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::Oper::Current::Location::Location()
    :
    location{YType::str, "location"},
    print_header{YType::boolean, "print_header"},
    loc_header{YType::uint32, "loc_header"}
        ,
    sensor_attributes(this, {"sensor"})
{

    yang_name = "location"; yang_parent_name = "current"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Current::Location::~Location()
{
}

bool Environment::Oper::Current::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_data())
            return true;
    }
    return location.is_set
	|| print_header.is_set
	|| loc_header.is_set;
}

bool Environment::Oper::Current::Location::has_operation() const
{
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(print_header.yfilter)
	|| ydk::is_set(loc_header.yfilter);
}

std::string Environment::Oper::Current::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/current/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Current::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Current::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());
    if (loc_header.is_set || is_set(loc_header.yfilter)) leaf_name_data.push_back(loc_header.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Current::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor_attributes")
    {
        auto ent_ = std::make_shared<Environment::Oper::Current::Location::SensorAttributes>();
        ent_->parent = this;
        sensor_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Current::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Current::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc_header")
    {
        loc_header = value;
        loc_header.value_namespace = name_space;
        loc_header.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Current::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
    if(value_path == "loc_header")
    {
        loc_header.yfilter = yfilter;
    }
}

bool Environment::Oper::Current::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor_attributes" || name == "location" || name == "print_header" || name == "loc_header")
        return true;
    return false;
}

Environment::Oper::Current::Location::SensorAttributes::SensorAttributes()
    :
    sensor{YType::str, "sensor"},
    sensor_id{YType::str, "sensor_id"},
    alarm{YType::str, "alarm"},
    value_{YType::str, "value"},
    temperature_value{YType::int32, "temperature_value"}
{

    yang_name = "sensor_attributes"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Oper::Current::Location::SensorAttributes::~SensorAttributes()
{
}

bool Environment::Oper::Current::Location::SensorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return sensor.is_set
	|| sensor_id.is_set
	|| alarm.is_set
	|| value_.is_set
	|| temperature_value.is_set;
}

bool Environment::Oper::Current::Location::SensorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor.yfilter)
	|| ydk::is_set(sensor_id.yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(temperature_value.yfilter);
}

std::string Environment::Oper::Current::Location::SensorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor_attributes";
    ADD_KEY_TOKEN(sensor, "sensor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Current::Location::SensorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor.is_set || is_set(sensor.yfilter)) leaf_name_data.push_back(sensor.get_name_leafdata());
    if (sensor_id.is_set || is_set(sensor_id.yfilter)) leaf_name_data.push_back(sensor_id.get_name_leafdata());
    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (temperature_value.is_set || is_set(temperature_value.yfilter)) leaf_name_data.push_back(temperature_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Current::Location::SensorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Current::Location::SensorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Oper::Current::Location::SensorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor")
    {
        sensor = value;
        sensor.value_namespace = name_space;
        sensor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor_id")
    {
        sensor_id = value;
        sensor_id.value_namespace = name_space;
        sensor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature_value")
    {
        temperature_value = value;
        temperature_value.value_namespace = name_space;
        temperature_value.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Current::Location::SensorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor")
    {
        sensor.yfilter = yfilter;
    }
    if(value_path == "sensor_id")
    {
        sensor_id.yfilter = yfilter;
    }
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "temperature_value")
    {
        temperature_value.yfilter = yfilter;
    }
}

bool Environment::Oper::Current::Location::SensorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor" || name == "sensor_id" || name == "alarm" || name == "value" || name == "temperature_value")
        return true;
    return false;
}

Environment::Oper::Fan::Fan()
    :
    location(this, {"location"})
{

    yang_name = "fan"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Fan::~Fan()
{
}

bool Environment::Oper::Fan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::Oper::Fan::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::Oper::Fan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Fan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Fan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Fan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Oper::Fan::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Fan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Fan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Oper::Fan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Oper::Fan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::Oper::Fan::Location::Location()
    :
    location{YType::str, "location"},
    print_header{YType::boolean, "print_header"},
    loc_header{YType::uint32, "loc_header"}
        ,
    fan_attributes(this, {"logical_slot"})
{

    yang_name = "location"; yang_parent_name = "fan"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Fan::Location::~Location()
{
}

bool Environment::Oper::Fan::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_attributes.len(); index++)
    {
        if(fan_attributes[index]->has_data())
            return true;
    }
    return location.is_set
	|| print_header.is_set
	|| loc_header.is_set;
}

bool Environment::Oper::Fan::Location::has_operation() const
{
    for (std::size_t index=0; index<fan_attributes.len(); index++)
    {
        if(fan_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(print_header.yfilter)
	|| ydk::is_set(loc_header.yfilter);
}

std::string Environment::Oper::Fan::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/fan/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Fan::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Fan::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());
    if (loc_header.is_set || is_set(loc_header.yfilter)) leaf_name_data.push_back(loc_header.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Fan::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fan_attributes")
    {
        auto ent_ = std::make_shared<Environment::Oper::Fan::Location::FanAttributes>();
        ent_->parent = this;
        fan_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Fan::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fan_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Fan::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc_header")
    {
        loc_header = value;
        loc_header.value_namespace = name_space;
        loc_header.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Fan::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
    if(value_path == "loc_header")
    {
        loc_header.yfilter = yfilter;
    }
}

bool Environment::Oper::Fan::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan_attributes" || name == "location" || name == "print_header" || name == "loc_header")
        return true;
    return false;
}

Environment::Oper::Fan::Location::FanAttributes::FanAttributes()
    :
    logical_slot{YType::str, "logical_slot"},
    print_fan_header{YType::str, "print_fan_header"},
    location{YType::str, "location"},
    fru_pid{YType::str, "fru_PID"},
    fans_speed{YType::str, "fans_speed"},
    fan_header{YType::uint32, "fan_header"},
    speed_space{YType::uint32, "speed_space"}
{

    yang_name = "fan_attributes"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Oper::Fan::Location::FanAttributes::~FanAttributes()
{
}

bool Environment::Oper::Fan::Location::FanAttributes::has_data() const
{
    if (is_presence_container) return true;
    return logical_slot.is_set
	|| print_fan_header.is_set
	|| location.is_set
	|| fru_pid.is_set
	|| fans_speed.is_set
	|| fan_header.is_set
	|| speed_space.is_set;
}

bool Environment::Oper::Fan::Location::FanAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logical_slot.yfilter)
	|| ydk::is_set(print_fan_header.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(fru_pid.yfilter)
	|| ydk::is_set(fans_speed.yfilter)
	|| ydk::is_set(fan_header.yfilter)
	|| ydk::is_set(speed_space.yfilter);
}

std::string Environment::Oper::Fan::Location::FanAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan_attributes";
    ADD_KEY_TOKEN(logical_slot, "logical_slot");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Fan::Location::FanAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logical_slot.is_set || is_set(logical_slot.yfilter)) leaf_name_data.push_back(logical_slot.get_name_leafdata());
    if (print_fan_header.is_set || is_set(print_fan_header.yfilter)) leaf_name_data.push_back(print_fan_header.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (fru_pid.is_set || is_set(fru_pid.yfilter)) leaf_name_data.push_back(fru_pid.get_name_leafdata());
    if (fans_speed.is_set || is_set(fans_speed.yfilter)) leaf_name_data.push_back(fans_speed.get_name_leafdata());
    if (fan_header.is_set || is_set(fan_header.yfilter)) leaf_name_data.push_back(fan_header.get_name_leafdata());
    if (speed_space.is_set || is_set(speed_space.yfilter)) leaf_name_data.push_back(speed_space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Fan::Location::FanAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Fan::Location::FanAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Oper::Fan::Location::FanAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logical_slot")
    {
        logical_slot = value;
        logical_slot.value_namespace = name_space;
        logical_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_fan_header")
    {
        print_fan_header = value;
        print_fan_header.value_namespace = name_space;
        print_fan_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru_PID")
    {
        fru_pid = value;
        fru_pid.value_namespace = name_space;
        fru_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fans_speed")
    {
        fans_speed = value;
        fans_speed.value_namespace = name_space;
        fans_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fan_header")
    {
        fan_header = value;
        fan_header.value_namespace = name_space;
        fan_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed_space")
    {
        speed_space = value;
        speed_space.value_namespace = name_space;
        speed_space.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Fan::Location::FanAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logical_slot")
    {
        logical_slot.yfilter = yfilter;
    }
    if(value_path == "print_fan_header")
    {
        print_fan_header.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "fru_PID")
    {
        fru_pid.yfilter = yfilter;
    }
    if(value_path == "fans_speed")
    {
        fans_speed.yfilter = yfilter;
    }
    if(value_path == "fan_header")
    {
        fan_header.yfilter = yfilter;
    }
    if(value_path == "speed_space")
    {
        speed_space.yfilter = yfilter;
    }
}

bool Environment::Oper::Fan::Location::FanAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logical_slot" || name == "print_fan_header" || name == "location" || name == "fru_PID" || name == "fans_speed" || name == "fan_header" || name == "speed_space")
        return true;
    return false;
}

Environment::Oper::Power::Power()
    :
    location(this, {"location"})
{

    yang_name = "power"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Power::~Power()
{
}

bool Environment::Oper::Power::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::Oper::Power::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::Oper::Power::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Oper::Power::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Oper::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Oper::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::Oper::Power::Location::Location()
    :
    location{YType::str, "location"}
        ,
    pem_attributes(this, {"pem"})
{

    yang_name = "location"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Power::Location::~Location()
{
}

bool Environment::Oper::Power::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pem_attributes.len(); index++)
    {
        if(pem_attributes[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Environment::Oper::Power::Location::has_operation() const
{
    for (std::size_t index=0; index<pem_attributes.len(); index++)
    {
        if(pem_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Environment::Oper::Power::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/power/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Power::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Power::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Power::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem_attributes")
    {
        auto ent_ = std::make_shared<Environment::Oper::Power::Location::PemAttributes>();
        ent_->parent = this;
        pem_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Power::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pem_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Power::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Power::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Environment::Oper::Power::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem_attributes" || name == "location")
        return true;
    return false;
}

Environment::Oper::Power::Location::PemAttributes::PemAttributes()
    :
    pem{YType::str, "pem"},
    pem_id{YType::str, "pem_id"},
    card_type{YType::str, "card_type"},
    ps_type{YType::str, "ps_type"},
    shelf_num{YType::uint16, "shelf_num"},
    supply_type{YType::str, "supply_type"},
    input_voltage{YType::str, "input_voltage"},
    input_current{YType::str, "input_current"},
    output_voltage{YType::str, "output_voltage"},
    output_current{YType::str, "output_current"},
    status{YType::str, "status"},
    input_power_to_ps{YType::uint32, "input_power_to_ps"},
    input_current_to_ps{YType::str, "input_current_to_ps"},
    output_power_from_ps{YType::uint32, "output_power_from_ps"},
    output_current_from_ps{YType::str, "output_current_from_ps"},
    power_allocated{YType::uint32, "power_allocated"},
    power_consumed{YType::str, "power_consumed"},
    power_status{YType::str, "power_status"},
    confgd_power_redundancy_mode{YType::str, "confgd_power_redundancy_mode"},
    usable_power_capacity{YType::uint32, "usable_power_capacity"},
    protection_power_capacity{YType::uint32, "protection_power_capacity"},
    power_resrv_and_alloc{YType::uint32, "power_resrv_and_alloc"},
    system_power_used{YType::uint32, "system_power_used"},
    system_power_input{YType::uint32, "system_power_input"},
    power_level{YType::uint16, "power_level"},
    output_header{YType::uint16, "output_header"},
    output_footer{YType::uint16, "output_footer"},
    ps_sum_footer{YType::uint16, "ps_sum_footer"}
{

    yang_name = "pem_attributes"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Oper::Power::Location::PemAttributes::~PemAttributes()
{
}

bool Environment::Oper::Power::Location::PemAttributes::has_data() const
{
    if (is_presence_container) return true;
    return pem.is_set
	|| pem_id.is_set
	|| card_type.is_set
	|| ps_type.is_set
	|| shelf_num.is_set
	|| supply_type.is_set
	|| input_voltage.is_set
	|| input_current.is_set
	|| output_voltage.is_set
	|| output_current.is_set
	|| status.is_set
	|| input_power_to_ps.is_set
	|| input_current_to_ps.is_set
	|| output_power_from_ps.is_set
	|| output_current_from_ps.is_set
	|| power_allocated.is_set
	|| power_consumed.is_set
	|| power_status.is_set
	|| confgd_power_redundancy_mode.is_set
	|| usable_power_capacity.is_set
	|| protection_power_capacity.is_set
	|| power_resrv_and_alloc.is_set
	|| system_power_used.is_set
	|| system_power_input.is_set
	|| power_level.is_set
	|| output_header.is_set
	|| output_footer.is_set
	|| ps_sum_footer.is_set;
}

bool Environment::Oper::Power::Location::PemAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pem.yfilter)
	|| ydk::is_set(pem_id.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(ps_type.yfilter)
	|| ydk::is_set(shelf_num.yfilter)
	|| ydk::is_set(supply_type.yfilter)
	|| ydk::is_set(input_voltage.yfilter)
	|| ydk::is_set(input_current.yfilter)
	|| ydk::is_set(output_voltage.yfilter)
	|| ydk::is_set(output_current.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(input_power_to_ps.yfilter)
	|| ydk::is_set(input_current_to_ps.yfilter)
	|| ydk::is_set(output_power_from_ps.yfilter)
	|| ydk::is_set(output_current_from_ps.yfilter)
	|| ydk::is_set(power_allocated.yfilter)
	|| ydk::is_set(power_consumed.yfilter)
	|| ydk::is_set(power_status.yfilter)
	|| ydk::is_set(confgd_power_redundancy_mode.yfilter)
	|| ydk::is_set(usable_power_capacity.yfilter)
	|| ydk::is_set(protection_power_capacity.yfilter)
	|| ydk::is_set(power_resrv_and_alloc.yfilter)
	|| ydk::is_set(system_power_used.yfilter)
	|| ydk::is_set(system_power_input.yfilter)
	|| ydk::is_set(power_level.yfilter)
	|| ydk::is_set(output_header.yfilter)
	|| ydk::is_set(output_footer.yfilter)
	|| ydk::is_set(ps_sum_footer.yfilter);
}

std::string Environment::Oper::Power::Location::PemAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem_attributes";
    ADD_KEY_TOKEN(pem, "pem");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Power::Location::PemAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pem.is_set || is_set(pem.yfilter)) leaf_name_data.push_back(pem.get_name_leafdata());
    if (pem_id.is_set || is_set(pem_id.yfilter)) leaf_name_data.push_back(pem_id.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (ps_type.is_set || is_set(ps_type.yfilter)) leaf_name_data.push_back(ps_type.get_name_leafdata());
    if (shelf_num.is_set || is_set(shelf_num.yfilter)) leaf_name_data.push_back(shelf_num.get_name_leafdata());
    if (supply_type.is_set || is_set(supply_type.yfilter)) leaf_name_data.push_back(supply_type.get_name_leafdata());
    if (input_voltage.is_set || is_set(input_voltage.yfilter)) leaf_name_data.push_back(input_voltage.get_name_leafdata());
    if (input_current.is_set || is_set(input_current.yfilter)) leaf_name_data.push_back(input_current.get_name_leafdata());
    if (output_voltage.is_set || is_set(output_voltage.yfilter)) leaf_name_data.push_back(output_voltage.get_name_leafdata());
    if (output_current.is_set || is_set(output_current.yfilter)) leaf_name_data.push_back(output_current.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (input_power_to_ps.is_set || is_set(input_power_to_ps.yfilter)) leaf_name_data.push_back(input_power_to_ps.get_name_leafdata());
    if (input_current_to_ps.is_set || is_set(input_current_to_ps.yfilter)) leaf_name_data.push_back(input_current_to_ps.get_name_leafdata());
    if (output_power_from_ps.is_set || is_set(output_power_from_ps.yfilter)) leaf_name_data.push_back(output_power_from_ps.get_name_leafdata());
    if (output_current_from_ps.is_set || is_set(output_current_from_ps.yfilter)) leaf_name_data.push_back(output_current_from_ps.get_name_leafdata());
    if (power_allocated.is_set || is_set(power_allocated.yfilter)) leaf_name_data.push_back(power_allocated.get_name_leafdata());
    if (power_consumed.is_set || is_set(power_consumed.yfilter)) leaf_name_data.push_back(power_consumed.get_name_leafdata());
    if (power_status.is_set || is_set(power_status.yfilter)) leaf_name_data.push_back(power_status.get_name_leafdata());
    if (confgd_power_redundancy_mode.is_set || is_set(confgd_power_redundancy_mode.yfilter)) leaf_name_data.push_back(confgd_power_redundancy_mode.get_name_leafdata());
    if (usable_power_capacity.is_set || is_set(usable_power_capacity.yfilter)) leaf_name_data.push_back(usable_power_capacity.get_name_leafdata());
    if (protection_power_capacity.is_set || is_set(protection_power_capacity.yfilter)) leaf_name_data.push_back(protection_power_capacity.get_name_leafdata());
    if (power_resrv_and_alloc.is_set || is_set(power_resrv_and_alloc.yfilter)) leaf_name_data.push_back(power_resrv_and_alloc.get_name_leafdata());
    if (system_power_used.is_set || is_set(system_power_used.yfilter)) leaf_name_data.push_back(system_power_used.get_name_leafdata());
    if (system_power_input.is_set || is_set(system_power_input.yfilter)) leaf_name_data.push_back(system_power_input.get_name_leafdata());
    if (power_level.is_set || is_set(power_level.yfilter)) leaf_name_data.push_back(power_level.get_name_leafdata());
    if (output_header.is_set || is_set(output_header.yfilter)) leaf_name_data.push_back(output_header.get_name_leafdata());
    if (output_footer.is_set || is_set(output_footer.yfilter)) leaf_name_data.push_back(output_footer.get_name_leafdata());
    if (ps_sum_footer.is_set || is_set(ps_sum_footer.yfilter)) leaf_name_data.push_back(ps_sum_footer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Power::Location::PemAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Power::Location::PemAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Oper::Power::Location::PemAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pem")
    {
        pem = value;
        pem.value_namespace = name_space;
        pem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pem_id")
    {
        pem_id = value;
        pem_id.value_namespace = name_space;
        pem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ps_type")
    {
        ps_type = value;
        ps_type.value_namespace = name_space;
        ps_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shelf_num")
    {
        shelf_num = value;
        shelf_num.value_namespace = name_space;
        shelf_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supply_type")
    {
        supply_type = value;
        supply_type.value_namespace = name_space;
        supply_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input_voltage")
    {
        input_voltage = value;
        input_voltage.value_namespace = name_space;
        input_voltage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input_current")
    {
        input_current = value;
        input_current.value_namespace = name_space;
        input_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_voltage")
    {
        output_voltage = value;
        output_voltage.value_namespace = name_space;
        output_voltage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_current")
    {
        output_current = value;
        output_current.value_namespace = name_space;
        output_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input_power_to_ps")
    {
        input_power_to_ps = value;
        input_power_to_ps.value_namespace = name_space;
        input_power_to_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input_current_to_ps")
    {
        input_current_to_ps = value;
        input_current_to_ps.value_namespace = name_space;
        input_current_to_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_power_from_ps")
    {
        output_power_from_ps = value;
        output_power_from_ps.value_namespace = name_space;
        output_power_from_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_current_from_ps")
    {
        output_current_from_ps = value;
        output_current_from_ps.value_namespace = name_space;
        output_current_from_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_allocated")
    {
        power_allocated = value;
        power_allocated.value_namespace = name_space;
        power_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_consumed")
    {
        power_consumed = value;
        power_consumed.value_namespace = name_space;
        power_consumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_status")
    {
        power_status = value;
        power_status.value_namespace = name_space;
        power_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confgd_power_redundancy_mode")
    {
        confgd_power_redundancy_mode = value;
        confgd_power_redundancy_mode.value_namespace = name_space;
        confgd_power_redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable_power_capacity")
    {
        usable_power_capacity = value;
        usable_power_capacity.value_namespace = name_space;
        usable_power_capacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection_power_capacity")
    {
        protection_power_capacity = value;
        protection_power_capacity.value_namespace = name_space;
        protection_power_capacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_resrv_and_alloc")
    {
        power_resrv_and_alloc = value;
        power_resrv_and_alloc.value_namespace = name_space;
        power_resrv_and_alloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_power_used")
    {
        system_power_used = value;
        system_power_used.value_namespace = name_space;
        system_power_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_power_input")
    {
        system_power_input = value;
        system_power_input.value_namespace = name_space;
        system_power_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_level")
    {
        power_level = value;
        power_level.value_namespace = name_space;
        power_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_header")
    {
        output_header = value;
        output_header.value_namespace = name_space;
        output_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_footer")
    {
        output_footer = value;
        output_footer.value_namespace = name_space;
        output_footer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ps_sum_footer")
    {
        ps_sum_footer = value;
        ps_sum_footer.value_namespace = name_space;
        ps_sum_footer.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Power::Location::PemAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pem")
    {
        pem.yfilter = yfilter;
    }
    if(value_path == "pem_id")
    {
        pem_id.yfilter = yfilter;
    }
    if(value_path == "card_type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "ps_type")
    {
        ps_type.yfilter = yfilter;
    }
    if(value_path == "shelf_num")
    {
        shelf_num.yfilter = yfilter;
    }
    if(value_path == "supply_type")
    {
        supply_type.yfilter = yfilter;
    }
    if(value_path == "input_voltage")
    {
        input_voltage.yfilter = yfilter;
    }
    if(value_path == "input_current")
    {
        input_current.yfilter = yfilter;
    }
    if(value_path == "output_voltage")
    {
        output_voltage.yfilter = yfilter;
    }
    if(value_path == "output_current")
    {
        output_current.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "input_power_to_ps")
    {
        input_power_to_ps.yfilter = yfilter;
    }
    if(value_path == "input_current_to_ps")
    {
        input_current_to_ps.yfilter = yfilter;
    }
    if(value_path == "output_power_from_ps")
    {
        output_power_from_ps.yfilter = yfilter;
    }
    if(value_path == "output_current_from_ps")
    {
        output_current_from_ps.yfilter = yfilter;
    }
    if(value_path == "power_allocated")
    {
        power_allocated.yfilter = yfilter;
    }
    if(value_path == "power_consumed")
    {
        power_consumed.yfilter = yfilter;
    }
    if(value_path == "power_status")
    {
        power_status.yfilter = yfilter;
    }
    if(value_path == "confgd_power_redundancy_mode")
    {
        confgd_power_redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "usable_power_capacity")
    {
        usable_power_capacity.yfilter = yfilter;
    }
    if(value_path == "protection_power_capacity")
    {
        protection_power_capacity.yfilter = yfilter;
    }
    if(value_path == "power_resrv_and_alloc")
    {
        power_resrv_and_alloc.yfilter = yfilter;
    }
    if(value_path == "system_power_used")
    {
        system_power_used.yfilter = yfilter;
    }
    if(value_path == "system_power_input")
    {
        system_power_input.yfilter = yfilter;
    }
    if(value_path == "power_level")
    {
        power_level.yfilter = yfilter;
    }
    if(value_path == "output_header")
    {
        output_header.yfilter = yfilter;
    }
    if(value_path == "output_footer")
    {
        output_footer.yfilter = yfilter;
    }
    if(value_path == "ps_sum_footer")
    {
        ps_sum_footer.yfilter = yfilter;
    }
}

bool Environment::Oper::Power::Location::PemAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "pem_id" || name == "card_type" || name == "ps_type" || name == "shelf_num" || name == "supply_type" || name == "input_voltage" || name == "input_current" || name == "output_voltage" || name == "output_current" || name == "status" || name == "input_power_to_ps" || name == "input_current_to_ps" || name == "output_power_from_ps" || name == "output_current_from_ps" || name == "power_allocated" || name == "power_consumed" || name == "power_status" || name == "confgd_power_redundancy_mode" || name == "usable_power_capacity" || name == "protection_power_capacity" || name == "power_resrv_and_alloc" || name == "system_power_used" || name == "system_power_input" || name == "power_level" || name == "output_header" || name == "output_footer" || name == "ps_sum_footer")
        return true;
    return false;
}

Environment::Oper::Altitude::Altitude()
    :
    location(this, {"location"})
{

    yang_name = "altitude"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Altitude::~Altitude()
{
}

bool Environment::Oper::Altitude::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::Oper::Altitude::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::Oper::Altitude::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Altitude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "altitude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Altitude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Altitude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Oper::Altitude::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Altitude::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Altitude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Oper::Altitude::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Oper::Altitude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::Oper::Altitude::Location::Location()
    :
    location{YType::str, "location"}
        ,
    alt_attributes(this, {"sensor"})
{

    yang_name = "location"; yang_parent_name = "altitude"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Oper::Altitude::Location::~Location()
{
}

bool Environment::Oper::Altitude::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alt_attributes.len(); index++)
    {
        if(alt_attributes[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Environment::Oper::Altitude::Location::has_operation() const
{
    for (std::size_t index=0; index<alt_attributes.len(); index++)
    {
        if(alt_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Environment::Oper::Altitude::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/oper/altitude/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Oper::Altitude::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Altitude::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Altitude::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt_attributes")
    {
        auto ent_ = std::make_shared<Environment::Oper::Altitude::Location::AltAttributes>();
        ent_->parent = this;
        alt_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Altitude::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alt_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Oper::Altitude::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Altitude::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Environment::Oper::Altitude::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt_attributes" || name == "location")
        return true;
    return false;
}

Environment::Oper::Altitude::Location::AltAttributes::AltAttributes()
    :
    sensor{YType::str, "sensor"},
    rack{YType::uint32, "rack"},
    sensor_value{YType::str, "sensor_value"},
    source{YType::str, "source"},
    print_header{YType::boolean, "print_header"}
{

    yang_name = "alt_attributes"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Oper::Altitude::Location::AltAttributes::~AltAttributes()
{
}

bool Environment::Oper::Altitude::Location::AltAttributes::has_data() const
{
    if (is_presence_container) return true;
    return sensor.is_set
	|| rack.is_set
	|| sensor_value.is_set
	|| source.is_set
	|| print_header.is_set;
}

bool Environment::Oper::Altitude::Location::AltAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor.yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(sensor_value.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(print_header.yfilter);
}

std::string Environment::Oper::Altitude::Location::AltAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt_attributes";
    ADD_KEY_TOKEN(sensor, "sensor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Oper::Altitude::Location::AltAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor.is_set || is_set(sensor.yfilter)) leaf_name_data.push_back(sensor.get_name_leafdata());
    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (sensor_value.is_set || is_set(sensor_value.yfilter)) leaf_name_data.push_back(sensor_value.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Oper::Altitude::Location::AltAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Oper::Altitude::Location::AltAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Oper::Altitude::Location::AltAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor")
    {
        sensor = value;
        sensor.value_namespace = name_space;
        sensor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor_value")
    {
        sensor_value = value;
        sensor_value.value_namespace = name_space;
        sensor_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Oper::Altitude::Location::AltAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor")
    {
        sensor.yfilter = yfilter;
    }
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "sensor_value")
    {
        sensor_value.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
}

bool Environment::Oper::Altitude::Location::AltAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor" || name == "rack" || name == "sensor_value" || name == "source" || name == "print_header")
        return true;
    return false;
}

Environment::All::All()
    :
    location(this, {"location"})
{

    yang_name = "all"; yang_parent_name = "environment"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::All::~All()
{
}

bool Environment::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::All::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::All::Location::Location()
    :
    location{YType::str, "location"}
        ,
    temperatures(this, {"loc_iden"})
    , voltages(this, {"loc_iden"})
    , current(this, {"loc_iden"})
    , fan(this, {"loc_iden"})
    , power(this, {"loc_iden"})
    , altitude(this, {"loc_iden"})
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::All::Location::~Location()
{
}

bool Environment::All::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<temperatures.len(); index++)
    {
        if(temperatures[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<voltages.len(); index++)
    {
        if(voltages[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<current.len(); index++)
    {
        if(current[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fan.len(); index++)
    {
        if(fan[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<power.len(); index++)
    {
        if(power[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<altitude.len(); index++)
    {
        if(altitude[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Environment::All::Location::has_operation() const
{
    for (std::size_t index=0; index<temperatures.len(); index++)
    {
        if(temperatures[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<voltages.len(); index++)
    {
        if(voltages[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<current.len(); index++)
    {
        if(current[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fan.len(); index++)
    {
        if(fan[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<power.len(); index++)
    {
        if(power[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<altitude.len(); index++)
    {
        if(altitude[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Environment::All::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "temperatures")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Temperatures>();
        ent_->parent = this;
        temperatures.append(ent_);
        return ent_;
    }

    if(child_yang_name == "voltages")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Voltages>();
        ent_->parent = this;
        voltages.append(ent_);
        return ent_;
    }

    if(child_yang_name == "current")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Current>();
        ent_->parent = this;
        current.append(ent_);
        return ent_;
    }

    if(child_yang_name == "fan")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Fan>();
        ent_->parent = this;
        fan.append(ent_);
        return ent_;
    }

    if(child_yang_name == "power")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Power>();
        ent_->parent = this;
        power.append(ent_);
        return ent_;
    }

    if(child_yang_name == "altitude")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Altitude>();
        ent_->parent = this;
        altitude.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : temperatures.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : voltages.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : current.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : fan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : power.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : altitude.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Environment::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "temperatures" || name == "voltages" || name == "current" || name == "fan" || name == "power" || name == "altitude" || name == "location")
        return true;
    return false;
}

Environment::All::Location::Temperatures::Temperatures()
    :
    loc_iden{YType::str, "loc_iden"},
    print_header{YType::boolean, "print_header"}
        ,
    sensor_attributes(this, {"sensor"})
{

    yang_name = "temperatures"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Temperatures::~Temperatures()
{
}

bool Environment::All::Location::Temperatures::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_data())
            return true;
    }
    return loc_iden.is_set
	|| print_header.is_set;
}

bool Environment::All::Location::Temperatures::has_operation() const
{
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_iden.yfilter)
	|| ydk::is_set(print_header.yfilter);
}

std::string Environment::All::Location::Temperatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "temperatures";
    ADD_KEY_TOKEN(loc_iden, "loc_iden");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Temperatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_iden.is_set || is_set(loc_iden.yfilter)) leaf_name_data.push_back(loc_iden.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Temperatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor_attributes")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Temperatures::SensorAttributes>();
        ent_->parent = this;
        sensor_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Temperatures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::All::Location::Temperatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_iden")
    {
        loc_iden = value;
        loc_iden.value_namespace = name_space;
        loc_iden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Temperatures::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_iden")
    {
        loc_iden.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
}

bool Environment::All::Location::Temperatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor_attributes" || name == "loc_iden" || name == "print_header")
        return true;
    return false;
}

Environment::All::Location::Temperatures::SensorAttributes::SensorAttributes()
    :
    sensor{YType::str, "sensor"},
    sensor_id{YType::str, "sensor_id"},
    alarm{YType::str, "alarm"},
    temperature_value{YType::str, "temperature_value"},
    value_{YType::int32, "value"},
    critical_lo{YType::int32, "critical_lo"},
    major_lo{YType::int32, "major_lo"},
    minor_lo{YType::int32, "minor_lo"},
    minor_hi{YType::int32, "minor_hi"},
    major_hi{YType::int32, "major_hi"},
    critical_hi{YType::int32, "critical_hi"}
{

    yang_name = "sensor_attributes"; yang_parent_name = "temperatures"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Temperatures::SensorAttributes::~SensorAttributes()
{
}

bool Environment::All::Location::Temperatures::SensorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return sensor.is_set
	|| sensor_id.is_set
	|| alarm.is_set
	|| temperature_value.is_set
	|| value_.is_set
	|| critical_lo.is_set
	|| major_lo.is_set
	|| minor_lo.is_set
	|| minor_hi.is_set
	|| major_hi.is_set
	|| critical_hi.is_set;
}

bool Environment::All::Location::Temperatures::SensorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor.yfilter)
	|| ydk::is_set(sensor_id.yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(temperature_value.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(critical_lo.yfilter)
	|| ydk::is_set(major_lo.yfilter)
	|| ydk::is_set(minor_lo.yfilter)
	|| ydk::is_set(minor_hi.yfilter)
	|| ydk::is_set(major_hi.yfilter)
	|| ydk::is_set(critical_hi.yfilter);
}

std::string Environment::All::Location::Temperatures::SensorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor_attributes";
    ADD_KEY_TOKEN(sensor, "sensor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Temperatures::SensorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor.is_set || is_set(sensor.yfilter)) leaf_name_data.push_back(sensor.get_name_leafdata());
    if (sensor_id.is_set || is_set(sensor_id.yfilter)) leaf_name_data.push_back(sensor_id.get_name_leafdata());
    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (temperature_value.is_set || is_set(temperature_value.yfilter)) leaf_name_data.push_back(temperature_value.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (critical_lo.is_set || is_set(critical_lo.yfilter)) leaf_name_data.push_back(critical_lo.get_name_leafdata());
    if (major_lo.is_set || is_set(major_lo.yfilter)) leaf_name_data.push_back(major_lo.get_name_leafdata());
    if (minor_lo.is_set || is_set(minor_lo.yfilter)) leaf_name_data.push_back(minor_lo.get_name_leafdata());
    if (minor_hi.is_set || is_set(minor_hi.yfilter)) leaf_name_data.push_back(minor_hi.get_name_leafdata());
    if (major_hi.is_set || is_set(major_hi.yfilter)) leaf_name_data.push_back(major_hi.get_name_leafdata());
    if (critical_hi.is_set || is_set(critical_hi.yfilter)) leaf_name_data.push_back(critical_hi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Temperatures::SensorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Temperatures::SensorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::All::Location::Temperatures::SensorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor")
    {
        sensor = value;
        sensor.value_namespace = name_space;
        sensor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor_id")
    {
        sensor_id = value;
        sensor_id.value_namespace = name_space;
        sensor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature_value")
    {
        temperature_value = value;
        temperature_value.value_namespace = name_space;
        temperature_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical_lo")
    {
        critical_lo = value;
        critical_lo.value_namespace = name_space;
        critical_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major_lo")
    {
        major_lo = value;
        major_lo.value_namespace = name_space;
        major_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor_lo")
    {
        minor_lo = value;
        minor_lo.value_namespace = name_space;
        minor_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor_hi")
    {
        minor_hi = value;
        minor_hi.value_namespace = name_space;
        minor_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major_hi")
    {
        major_hi = value;
        major_hi.value_namespace = name_space;
        major_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical_hi")
    {
        critical_hi = value;
        critical_hi.value_namespace = name_space;
        critical_hi.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Temperatures::SensorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor")
    {
        sensor.yfilter = yfilter;
    }
    if(value_path == "sensor_id")
    {
        sensor_id.yfilter = yfilter;
    }
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "temperature_value")
    {
        temperature_value.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "critical_lo")
    {
        critical_lo.yfilter = yfilter;
    }
    if(value_path == "major_lo")
    {
        major_lo.yfilter = yfilter;
    }
    if(value_path == "minor_lo")
    {
        minor_lo.yfilter = yfilter;
    }
    if(value_path == "minor_hi")
    {
        minor_hi.yfilter = yfilter;
    }
    if(value_path == "major_hi")
    {
        major_hi.yfilter = yfilter;
    }
    if(value_path == "critical_hi")
    {
        critical_hi.yfilter = yfilter;
    }
}

bool Environment::All::Location::Temperatures::SensorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor" || name == "sensor_id" || name == "alarm" || name == "temperature_value" || name == "value" || name == "critical_lo" || name == "major_lo" || name == "minor_lo" || name == "minor_hi" || name == "major_hi" || name == "critical_hi")
        return true;
    return false;
}

Environment::All::Location::Voltages::Voltages()
    :
    loc_iden{YType::str, "loc_iden"},
    print_header{YType::boolean, "print_header"}
        ,
    sensor_attributes(this, {"sensor"})
{

    yang_name = "voltages"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Voltages::~Voltages()
{
}

bool Environment::All::Location::Voltages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_data())
            return true;
    }
    return loc_iden.is_set
	|| print_header.is_set;
}

bool Environment::All::Location::Voltages::has_operation() const
{
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_iden.yfilter)
	|| ydk::is_set(print_header.yfilter);
}

std::string Environment::All::Location::Voltages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voltages";
    ADD_KEY_TOKEN(loc_iden, "loc_iden");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Voltages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_iden.is_set || is_set(loc_iden.yfilter)) leaf_name_data.push_back(loc_iden.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Voltages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor_attributes")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Voltages::SensorAttributes>();
        ent_->parent = this;
        sensor_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Voltages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::All::Location::Voltages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_iden")
    {
        loc_iden = value;
        loc_iden.value_namespace = name_space;
        loc_iden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Voltages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_iden")
    {
        loc_iden.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
}

bool Environment::All::Location::Voltages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor_attributes" || name == "loc_iden" || name == "print_header")
        return true;
    return false;
}

Environment::All::Location::Voltages::SensorAttributes::SensorAttributes()
    :
    sensor{YType::str, "sensor"},
    sensor_id{YType::str, "sensor_id"},
    alarm{YType::str, "alarm"},
    value_{YType::str, "value"},
    temperature_value{YType::int32, "temperature_value"},
    critical_lo{YType::int32, "critical_lo"},
    major_lo{YType::int32, "major_lo"},
    minor_lo{YType::int32, "minor_lo"},
    minor_hi{YType::int32, "minor_hi"},
    major_hi{YType::int32, "major_hi"},
    critical_hi{YType::int32, "critical_hi"}
{

    yang_name = "sensor_attributes"; yang_parent_name = "voltages"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Voltages::SensorAttributes::~SensorAttributes()
{
}

bool Environment::All::Location::Voltages::SensorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return sensor.is_set
	|| sensor_id.is_set
	|| alarm.is_set
	|| value_.is_set
	|| temperature_value.is_set
	|| critical_lo.is_set
	|| major_lo.is_set
	|| minor_lo.is_set
	|| minor_hi.is_set
	|| major_hi.is_set
	|| critical_hi.is_set;
}

bool Environment::All::Location::Voltages::SensorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor.yfilter)
	|| ydk::is_set(sensor_id.yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(temperature_value.yfilter)
	|| ydk::is_set(critical_lo.yfilter)
	|| ydk::is_set(major_lo.yfilter)
	|| ydk::is_set(minor_lo.yfilter)
	|| ydk::is_set(minor_hi.yfilter)
	|| ydk::is_set(major_hi.yfilter)
	|| ydk::is_set(critical_hi.yfilter);
}

std::string Environment::All::Location::Voltages::SensorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor_attributes";
    ADD_KEY_TOKEN(sensor, "sensor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Voltages::SensorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor.is_set || is_set(sensor.yfilter)) leaf_name_data.push_back(sensor.get_name_leafdata());
    if (sensor_id.is_set || is_set(sensor_id.yfilter)) leaf_name_data.push_back(sensor_id.get_name_leafdata());
    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (temperature_value.is_set || is_set(temperature_value.yfilter)) leaf_name_data.push_back(temperature_value.get_name_leafdata());
    if (critical_lo.is_set || is_set(critical_lo.yfilter)) leaf_name_data.push_back(critical_lo.get_name_leafdata());
    if (major_lo.is_set || is_set(major_lo.yfilter)) leaf_name_data.push_back(major_lo.get_name_leafdata());
    if (minor_lo.is_set || is_set(minor_lo.yfilter)) leaf_name_data.push_back(minor_lo.get_name_leafdata());
    if (minor_hi.is_set || is_set(minor_hi.yfilter)) leaf_name_data.push_back(minor_hi.get_name_leafdata());
    if (major_hi.is_set || is_set(major_hi.yfilter)) leaf_name_data.push_back(major_hi.get_name_leafdata());
    if (critical_hi.is_set || is_set(critical_hi.yfilter)) leaf_name_data.push_back(critical_hi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Voltages::SensorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Voltages::SensorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::All::Location::Voltages::SensorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor")
    {
        sensor = value;
        sensor.value_namespace = name_space;
        sensor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor_id")
    {
        sensor_id = value;
        sensor_id.value_namespace = name_space;
        sensor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature_value")
    {
        temperature_value = value;
        temperature_value.value_namespace = name_space;
        temperature_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical_lo")
    {
        critical_lo = value;
        critical_lo.value_namespace = name_space;
        critical_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major_lo")
    {
        major_lo = value;
        major_lo.value_namespace = name_space;
        major_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor_lo")
    {
        minor_lo = value;
        minor_lo.value_namespace = name_space;
        minor_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor_hi")
    {
        minor_hi = value;
        minor_hi.value_namespace = name_space;
        minor_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major_hi")
    {
        major_hi = value;
        major_hi.value_namespace = name_space;
        major_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical_hi")
    {
        critical_hi = value;
        critical_hi.value_namespace = name_space;
        critical_hi.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Voltages::SensorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor")
    {
        sensor.yfilter = yfilter;
    }
    if(value_path == "sensor_id")
    {
        sensor_id.yfilter = yfilter;
    }
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "temperature_value")
    {
        temperature_value.yfilter = yfilter;
    }
    if(value_path == "critical_lo")
    {
        critical_lo.yfilter = yfilter;
    }
    if(value_path == "major_lo")
    {
        major_lo.yfilter = yfilter;
    }
    if(value_path == "minor_lo")
    {
        minor_lo.yfilter = yfilter;
    }
    if(value_path == "minor_hi")
    {
        minor_hi.yfilter = yfilter;
    }
    if(value_path == "major_hi")
    {
        major_hi.yfilter = yfilter;
    }
    if(value_path == "critical_hi")
    {
        critical_hi.yfilter = yfilter;
    }
}

bool Environment::All::Location::Voltages::SensorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor" || name == "sensor_id" || name == "alarm" || name == "value" || name == "temperature_value" || name == "critical_lo" || name == "major_lo" || name == "minor_lo" || name == "minor_hi" || name == "major_hi" || name == "critical_hi")
        return true;
    return false;
}

Environment::All::Location::Current::Current()
    :
    loc_iden{YType::str, "loc_iden"},
    print_header{YType::boolean, "print_header"}
        ,
    sensor_attributes(this, {"sensor"})
{

    yang_name = "current"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Current::~Current()
{
}

bool Environment::All::Location::Current::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_data())
            return true;
    }
    return loc_iden.is_set
	|| print_header.is_set;
}

bool Environment::All::Location::Current::has_operation() const
{
    for (std::size_t index=0; index<sensor_attributes.len(); index++)
    {
        if(sensor_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_iden.yfilter)
	|| ydk::is_set(print_header.yfilter);
}

std::string Environment::All::Location::Current::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current";
    ADD_KEY_TOKEN(loc_iden, "loc_iden");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Current::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_iden.is_set || is_set(loc_iden.yfilter)) leaf_name_data.push_back(loc_iden.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Current::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor_attributes")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Current::SensorAttributes>();
        ent_->parent = this;
        sensor_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Current::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::All::Location::Current::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_iden")
    {
        loc_iden = value;
        loc_iden.value_namespace = name_space;
        loc_iden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Current::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_iden")
    {
        loc_iden.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
}

bool Environment::All::Location::Current::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor_attributes" || name == "loc_iden" || name == "print_header")
        return true;
    return false;
}

Environment::All::Location::Current::SensorAttributes::SensorAttributes()
    :
    sensor{YType::str, "sensor"},
    sensor_id{YType::str, "sensor_id"},
    value_{YType::str, "value"}
{

    yang_name = "sensor_attributes"; yang_parent_name = "current"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Current::SensorAttributes::~SensorAttributes()
{
}

bool Environment::All::Location::Current::SensorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return sensor.is_set
	|| sensor_id.is_set
	|| value_.is_set;
}

bool Environment::All::Location::Current::SensorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor.yfilter)
	|| ydk::is_set(sensor_id.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Environment::All::Location::Current::SensorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor_attributes";
    ADD_KEY_TOKEN(sensor, "sensor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Current::SensorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor.is_set || is_set(sensor.yfilter)) leaf_name_data.push_back(sensor.get_name_leafdata());
    if (sensor_id.is_set || is_set(sensor_id.yfilter)) leaf_name_data.push_back(sensor_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Current::SensorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Current::SensorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::All::Location::Current::SensorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor")
    {
        sensor = value;
        sensor.value_namespace = name_space;
        sensor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor_id")
    {
        sensor_id = value;
        sensor_id.value_namespace = name_space;
        sensor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Current::SensorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor")
    {
        sensor.yfilter = yfilter;
    }
    if(value_path == "sensor_id")
    {
        sensor_id.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Environment::All::Location::Current::SensorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor" || name == "sensor_id" || name == "value")
        return true;
    return false;
}

Environment::All::Location::Fan::Fan()
    :
    loc_iden{YType::str, "loc_iden"}
        ,
    fan_attributes(this, {"logical_slot"})
{

    yang_name = "fan"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Fan::~Fan()
{
}

bool Environment::All::Location::Fan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_attributes.len(); index++)
    {
        if(fan_attributes[index]->has_data())
            return true;
    }
    return loc_iden.is_set;
}

bool Environment::All::Location::Fan::has_operation() const
{
    for (std::size_t index=0; index<fan_attributes.len(); index++)
    {
        if(fan_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_iden.yfilter);
}

std::string Environment::All::Location::Fan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan";
    ADD_KEY_TOKEN(loc_iden, "loc_iden");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Fan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_iden.is_set || is_set(loc_iden.yfilter)) leaf_name_data.push_back(loc_iden.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Fan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fan_attributes")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Fan::FanAttributes>();
        ent_->parent = this;
        fan_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Fan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fan_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::All::Location::Fan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_iden")
    {
        loc_iden = value;
        loc_iden.value_namespace = name_space;
        loc_iden.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Fan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_iden")
    {
        loc_iden.yfilter = yfilter;
    }
}

bool Environment::All::Location::Fan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan_attributes" || name == "loc_iden")
        return true;
    return false;
}

Environment::All::Location::Fan::FanAttributes::FanAttributes()
    :
    logical_slot{YType::str, "logical_slot"},
    print_fan_header{YType::str, "print_fan_header"},
    location{YType::str, "location"},
    fru_pid{YType::str, "fru_PID"},
    fans_speed{YType::str, "fans_speed"},
    fan_header{YType::uint32, "fan_header"},
    speed_space{YType::uint32, "speed_space"}
{

    yang_name = "fan_attributes"; yang_parent_name = "fan"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Fan::FanAttributes::~FanAttributes()
{
}

bool Environment::All::Location::Fan::FanAttributes::has_data() const
{
    if (is_presence_container) return true;
    return logical_slot.is_set
	|| print_fan_header.is_set
	|| location.is_set
	|| fru_pid.is_set
	|| fans_speed.is_set
	|| fan_header.is_set
	|| speed_space.is_set;
}

bool Environment::All::Location::Fan::FanAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logical_slot.yfilter)
	|| ydk::is_set(print_fan_header.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(fru_pid.yfilter)
	|| ydk::is_set(fans_speed.yfilter)
	|| ydk::is_set(fan_header.yfilter)
	|| ydk::is_set(speed_space.yfilter);
}

std::string Environment::All::Location::Fan::FanAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan_attributes";
    ADD_KEY_TOKEN(logical_slot, "logical_slot");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Fan::FanAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logical_slot.is_set || is_set(logical_slot.yfilter)) leaf_name_data.push_back(logical_slot.get_name_leafdata());
    if (print_fan_header.is_set || is_set(print_fan_header.yfilter)) leaf_name_data.push_back(print_fan_header.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (fru_pid.is_set || is_set(fru_pid.yfilter)) leaf_name_data.push_back(fru_pid.get_name_leafdata());
    if (fans_speed.is_set || is_set(fans_speed.yfilter)) leaf_name_data.push_back(fans_speed.get_name_leafdata());
    if (fan_header.is_set || is_set(fan_header.yfilter)) leaf_name_data.push_back(fan_header.get_name_leafdata());
    if (speed_space.is_set || is_set(speed_space.yfilter)) leaf_name_data.push_back(speed_space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Fan::FanAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Fan::FanAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::All::Location::Fan::FanAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logical_slot")
    {
        logical_slot = value;
        logical_slot.value_namespace = name_space;
        logical_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_fan_header")
    {
        print_fan_header = value;
        print_fan_header.value_namespace = name_space;
        print_fan_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru_PID")
    {
        fru_pid = value;
        fru_pid.value_namespace = name_space;
        fru_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fans_speed")
    {
        fans_speed = value;
        fans_speed.value_namespace = name_space;
        fans_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fan_header")
    {
        fan_header = value;
        fan_header.value_namespace = name_space;
        fan_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed_space")
    {
        speed_space = value;
        speed_space.value_namespace = name_space;
        speed_space.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Fan::FanAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logical_slot")
    {
        logical_slot.yfilter = yfilter;
    }
    if(value_path == "print_fan_header")
    {
        print_fan_header.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "fru_PID")
    {
        fru_pid.yfilter = yfilter;
    }
    if(value_path == "fans_speed")
    {
        fans_speed.yfilter = yfilter;
    }
    if(value_path == "fan_header")
    {
        fan_header.yfilter = yfilter;
    }
    if(value_path == "speed_space")
    {
        speed_space.yfilter = yfilter;
    }
}

bool Environment::All::Location::Fan::FanAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logical_slot" || name == "print_fan_header" || name == "location" || name == "fru_PID" || name == "fans_speed" || name == "fan_header" || name == "speed_space")
        return true;
    return false;
}

Environment::All::Location::Power::Power()
    :
    loc_iden{YType::str, "loc_iden"}
        ,
    pem_attributes(this, {"pem"})
{

    yang_name = "power"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Power::~Power()
{
}

bool Environment::All::Location::Power::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pem_attributes.len(); index++)
    {
        if(pem_attributes[index]->has_data())
            return true;
    }
    return loc_iden.is_set;
}

bool Environment::All::Location::Power::has_operation() const
{
    for (std::size_t index=0; index<pem_attributes.len(); index++)
    {
        if(pem_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_iden.yfilter);
}

std::string Environment::All::Location::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power";
    ADD_KEY_TOKEN(loc_iden, "loc_iden");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_iden.is_set || is_set(loc_iden.yfilter)) leaf_name_data.push_back(loc_iden.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem_attributes")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Power::PemAttributes>();
        ent_->parent = this;
        pem_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pem_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::All::Location::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_iden")
    {
        loc_iden = value;
        loc_iden.value_namespace = name_space;
        loc_iden.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_iden")
    {
        loc_iden.yfilter = yfilter;
    }
}

bool Environment::All::Location::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem_attributes" || name == "loc_iden")
        return true;
    return false;
}

Environment::All::Location::Power::PemAttributes::PemAttributes()
    :
    pem{YType::str, "pem"},
    pem_id{YType::str, "pem_id"},
    card_type{YType::str, "card_type"},
    ps_type{YType::str, "ps_type"},
    shelf_num{YType::uint16, "shelf_num"},
    supply_type{YType::str, "supply_type"},
    input_voltage{YType::str, "input_voltage"},
    input_current{YType::str, "input_current"},
    output_voltage{YType::str, "output_voltage"},
    output_current{YType::str, "output_current"},
    status{YType::str, "status"},
    input_power_to_ps{YType::uint32, "input_power_to_ps"},
    input_current_to_ps{YType::str, "input_current_to_ps"},
    output_power_from_ps{YType::uint32, "output_power_from_ps"},
    output_current_from_ps{YType::str, "output_current_from_ps"},
    power_allocated{YType::uint32, "power_allocated"},
    power_consumed{YType::str, "power_consumed"},
    power_status{YType::str, "power_status"},
    confgd_power_redundancy_mode{YType::str, "confgd_power_redundancy_mode"},
    usable_power_capacity{YType::uint32, "usable_power_capacity"},
    protection_power_capacity{YType::uint32, "protection_power_capacity"},
    power_resrv_and_alloc{YType::uint32, "power_resrv_and_alloc"},
    system_power_used{YType::uint32, "system_power_used"},
    system_power_input{YType::uint32, "system_power_input"},
    power_level{YType::uint16, "power_level"},
    output_header{YType::uint16, "output_header"},
    output_footer{YType::uint16, "output_footer"},
    ps_sum_footer{YType::uint16, "ps_sum_footer"}
{

    yang_name = "pem_attributes"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Power::PemAttributes::~PemAttributes()
{
}

bool Environment::All::Location::Power::PemAttributes::has_data() const
{
    if (is_presence_container) return true;
    return pem.is_set
	|| pem_id.is_set
	|| card_type.is_set
	|| ps_type.is_set
	|| shelf_num.is_set
	|| supply_type.is_set
	|| input_voltage.is_set
	|| input_current.is_set
	|| output_voltage.is_set
	|| output_current.is_set
	|| status.is_set
	|| input_power_to_ps.is_set
	|| input_current_to_ps.is_set
	|| output_power_from_ps.is_set
	|| output_current_from_ps.is_set
	|| power_allocated.is_set
	|| power_consumed.is_set
	|| power_status.is_set
	|| confgd_power_redundancy_mode.is_set
	|| usable_power_capacity.is_set
	|| protection_power_capacity.is_set
	|| power_resrv_and_alloc.is_set
	|| system_power_used.is_set
	|| system_power_input.is_set
	|| power_level.is_set
	|| output_header.is_set
	|| output_footer.is_set
	|| ps_sum_footer.is_set;
}

bool Environment::All::Location::Power::PemAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pem.yfilter)
	|| ydk::is_set(pem_id.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(ps_type.yfilter)
	|| ydk::is_set(shelf_num.yfilter)
	|| ydk::is_set(supply_type.yfilter)
	|| ydk::is_set(input_voltage.yfilter)
	|| ydk::is_set(input_current.yfilter)
	|| ydk::is_set(output_voltage.yfilter)
	|| ydk::is_set(output_current.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(input_power_to_ps.yfilter)
	|| ydk::is_set(input_current_to_ps.yfilter)
	|| ydk::is_set(output_power_from_ps.yfilter)
	|| ydk::is_set(output_current_from_ps.yfilter)
	|| ydk::is_set(power_allocated.yfilter)
	|| ydk::is_set(power_consumed.yfilter)
	|| ydk::is_set(power_status.yfilter)
	|| ydk::is_set(confgd_power_redundancy_mode.yfilter)
	|| ydk::is_set(usable_power_capacity.yfilter)
	|| ydk::is_set(protection_power_capacity.yfilter)
	|| ydk::is_set(power_resrv_and_alloc.yfilter)
	|| ydk::is_set(system_power_used.yfilter)
	|| ydk::is_set(system_power_input.yfilter)
	|| ydk::is_set(power_level.yfilter)
	|| ydk::is_set(output_header.yfilter)
	|| ydk::is_set(output_footer.yfilter)
	|| ydk::is_set(ps_sum_footer.yfilter);
}

std::string Environment::All::Location::Power::PemAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem_attributes";
    ADD_KEY_TOKEN(pem, "pem");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Power::PemAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pem.is_set || is_set(pem.yfilter)) leaf_name_data.push_back(pem.get_name_leafdata());
    if (pem_id.is_set || is_set(pem_id.yfilter)) leaf_name_data.push_back(pem_id.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (ps_type.is_set || is_set(ps_type.yfilter)) leaf_name_data.push_back(ps_type.get_name_leafdata());
    if (shelf_num.is_set || is_set(shelf_num.yfilter)) leaf_name_data.push_back(shelf_num.get_name_leafdata());
    if (supply_type.is_set || is_set(supply_type.yfilter)) leaf_name_data.push_back(supply_type.get_name_leafdata());
    if (input_voltage.is_set || is_set(input_voltage.yfilter)) leaf_name_data.push_back(input_voltage.get_name_leafdata());
    if (input_current.is_set || is_set(input_current.yfilter)) leaf_name_data.push_back(input_current.get_name_leafdata());
    if (output_voltage.is_set || is_set(output_voltage.yfilter)) leaf_name_data.push_back(output_voltage.get_name_leafdata());
    if (output_current.is_set || is_set(output_current.yfilter)) leaf_name_data.push_back(output_current.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (input_power_to_ps.is_set || is_set(input_power_to_ps.yfilter)) leaf_name_data.push_back(input_power_to_ps.get_name_leafdata());
    if (input_current_to_ps.is_set || is_set(input_current_to_ps.yfilter)) leaf_name_data.push_back(input_current_to_ps.get_name_leafdata());
    if (output_power_from_ps.is_set || is_set(output_power_from_ps.yfilter)) leaf_name_data.push_back(output_power_from_ps.get_name_leafdata());
    if (output_current_from_ps.is_set || is_set(output_current_from_ps.yfilter)) leaf_name_data.push_back(output_current_from_ps.get_name_leafdata());
    if (power_allocated.is_set || is_set(power_allocated.yfilter)) leaf_name_data.push_back(power_allocated.get_name_leafdata());
    if (power_consumed.is_set || is_set(power_consumed.yfilter)) leaf_name_data.push_back(power_consumed.get_name_leafdata());
    if (power_status.is_set || is_set(power_status.yfilter)) leaf_name_data.push_back(power_status.get_name_leafdata());
    if (confgd_power_redundancy_mode.is_set || is_set(confgd_power_redundancy_mode.yfilter)) leaf_name_data.push_back(confgd_power_redundancy_mode.get_name_leafdata());
    if (usable_power_capacity.is_set || is_set(usable_power_capacity.yfilter)) leaf_name_data.push_back(usable_power_capacity.get_name_leafdata());
    if (protection_power_capacity.is_set || is_set(protection_power_capacity.yfilter)) leaf_name_data.push_back(protection_power_capacity.get_name_leafdata());
    if (power_resrv_and_alloc.is_set || is_set(power_resrv_and_alloc.yfilter)) leaf_name_data.push_back(power_resrv_and_alloc.get_name_leafdata());
    if (system_power_used.is_set || is_set(system_power_used.yfilter)) leaf_name_data.push_back(system_power_used.get_name_leafdata());
    if (system_power_input.is_set || is_set(system_power_input.yfilter)) leaf_name_data.push_back(system_power_input.get_name_leafdata());
    if (power_level.is_set || is_set(power_level.yfilter)) leaf_name_data.push_back(power_level.get_name_leafdata());
    if (output_header.is_set || is_set(output_header.yfilter)) leaf_name_data.push_back(output_header.get_name_leafdata());
    if (output_footer.is_set || is_set(output_footer.yfilter)) leaf_name_data.push_back(output_footer.get_name_leafdata());
    if (ps_sum_footer.is_set || is_set(ps_sum_footer.yfilter)) leaf_name_data.push_back(ps_sum_footer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Power::PemAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Power::PemAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::All::Location::Power::PemAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pem")
    {
        pem = value;
        pem.value_namespace = name_space;
        pem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pem_id")
    {
        pem_id = value;
        pem_id.value_namespace = name_space;
        pem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ps_type")
    {
        ps_type = value;
        ps_type.value_namespace = name_space;
        ps_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shelf_num")
    {
        shelf_num = value;
        shelf_num.value_namespace = name_space;
        shelf_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supply_type")
    {
        supply_type = value;
        supply_type.value_namespace = name_space;
        supply_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input_voltage")
    {
        input_voltage = value;
        input_voltage.value_namespace = name_space;
        input_voltage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input_current")
    {
        input_current = value;
        input_current.value_namespace = name_space;
        input_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_voltage")
    {
        output_voltage = value;
        output_voltage.value_namespace = name_space;
        output_voltage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_current")
    {
        output_current = value;
        output_current.value_namespace = name_space;
        output_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input_power_to_ps")
    {
        input_power_to_ps = value;
        input_power_to_ps.value_namespace = name_space;
        input_power_to_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input_current_to_ps")
    {
        input_current_to_ps = value;
        input_current_to_ps.value_namespace = name_space;
        input_current_to_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_power_from_ps")
    {
        output_power_from_ps = value;
        output_power_from_ps.value_namespace = name_space;
        output_power_from_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_current_from_ps")
    {
        output_current_from_ps = value;
        output_current_from_ps.value_namespace = name_space;
        output_current_from_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_allocated")
    {
        power_allocated = value;
        power_allocated.value_namespace = name_space;
        power_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_consumed")
    {
        power_consumed = value;
        power_consumed.value_namespace = name_space;
        power_consumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_status")
    {
        power_status = value;
        power_status.value_namespace = name_space;
        power_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confgd_power_redundancy_mode")
    {
        confgd_power_redundancy_mode = value;
        confgd_power_redundancy_mode.value_namespace = name_space;
        confgd_power_redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable_power_capacity")
    {
        usable_power_capacity = value;
        usable_power_capacity.value_namespace = name_space;
        usable_power_capacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection_power_capacity")
    {
        protection_power_capacity = value;
        protection_power_capacity.value_namespace = name_space;
        protection_power_capacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_resrv_and_alloc")
    {
        power_resrv_and_alloc = value;
        power_resrv_and_alloc.value_namespace = name_space;
        power_resrv_and_alloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_power_used")
    {
        system_power_used = value;
        system_power_used.value_namespace = name_space;
        system_power_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_power_input")
    {
        system_power_input = value;
        system_power_input.value_namespace = name_space;
        system_power_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power_level")
    {
        power_level = value;
        power_level.value_namespace = name_space;
        power_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_header")
    {
        output_header = value;
        output_header.value_namespace = name_space;
        output_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output_footer")
    {
        output_footer = value;
        output_footer.value_namespace = name_space;
        output_footer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ps_sum_footer")
    {
        ps_sum_footer = value;
        ps_sum_footer.value_namespace = name_space;
        ps_sum_footer.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Power::PemAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pem")
    {
        pem.yfilter = yfilter;
    }
    if(value_path == "pem_id")
    {
        pem_id.yfilter = yfilter;
    }
    if(value_path == "card_type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "ps_type")
    {
        ps_type.yfilter = yfilter;
    }
    if(value_path == "shelf_num")
    {
        shelf_num.yfilter = yfilter;
    }
    if(value_path == "supply_type")
    {
        supply_type.yfilter = yfilter;
    }
    if(value_path == "input_voltage")
    {
        input_voltage.yfilter = yfilter;
    }
    if(value_path == "input_current")
    {
        input_current.yfilter = yfilter;
    }
    if(value_path == "output_voltage")
    {
        output_voltage.yfilter = yfilter;
    }
    if(value_path == "output_current")
    {
        output_current.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "input_power_to_ps")
    {
        input_power_to_ps.yfilter = yfilter;
    }
    if(value_path == "input_current_to_ps")
    {
        input_current_to_ps.yfilter = yfilter;
    }
    if(value_path == "output_power_from_ps")
    {
        output_power_from_ps.yfilter = yfilter;
    }
    if(value_path == "output_current_from_ps")
    {
        output_current_from_ps.yfilter = yfilter;
    }
    if(value_path == "power_allocated")
    {
        power_allocated.yfilter = yfilter;
    }
    if(value_path == "power_consumed")
    {
        power_consumed.yfilter = yfilter;
    }
    if(value_path == "power_status")
    {
        power_status.yfilter = yfilter;
    }
    if(value_path == "confgd_power_redundancy_mode")
    {
        confgd_power_redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "usable_power_capacity")
    {
        usable_power_capacity.yfilter = yfilter;
    }
    if(value_path == "protection_power_capacity")
    {
        protection_power_capacity.yfilter = yfilter;
    }
    if(value_path == "power_resrv_and_alloc")
    {
        power_resrv_and_alloc.yfilter = yfilter;
    }
    if(value_path == "system_power_used")
    {
        system_power_used.yfilter = yfilter;
    }
    if(value_path == "system_power_input")
    {
        system_power_input.yfilter = yfilter;
    }
    if(value_path == "power_level")
    {
        power_level.yfilter = yfilter;
    }
    if(value_path == "output_header")
    {
        output_header.yfilter = yfilter;
    }
    if(value_path == "output_footer")
    {
        output_footer.yfilter = yfilter;
    }
    if(value_path == "ps_sum_footer")
    {
        ps_sum_footer.yfilter = yfilter;
    }
}

bool Environment::All::Location::Power::PemAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "pem_id" || name == "card_type" || name == "ps_type" || name == "shelf_num" || name == "supply_type" || name == "input_voltage" || name == "input_current" || name == "output_voltage" || name == "output_current" || name == "status" || name == "input_power_to_ps" || name == "input_current_to_ps" || name == "output_power_from_ps" || name == "output_current_from_ps" || name == "power_allocated" || name == "power_consumed" || name == "power_status" || name == "confgd_power_redundancy_mode" || name == "usable_power_capacity" || name == "protection_power_capacity" || name == "power_resrv_and_alloc" || name == "system_power_used" || name == "system_power_input" || name == "power_level" || name == "output_header" || name == "output_footer" || name == "ps_sum_footer")
        return true;
    return false;
}

Environment::All::Location::Altitude::Altitude()
    :
    loc_iden{YType::str, "loc_iden"}
        ,
    alt_attributes(this, {"sensor"})
{

    yang_name = "altitude"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Altitude::~Altitude()
{
}

bool Environment::All::Location::Altitude::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alt_attributes.len(); index++)
    {
        if(alt_attributes[index]->has_data())
            return true;
    }
    return loc_iden.is_set;
}

bool Environment::All::Location::Altitude::has_operation() const
{
    for (std::size_t index=0; index<alt_attributes.len(); index++)
    {
        if(alt_attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_iden.yfilter);
}

std::string Environment::All::Location::Altitude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "altitude";
    ADD_KEY_TOKEN(loc_iden, "loc_iden");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Altitude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_iden.is_set || is_set(loc_iden.yfilter)) leaf_name_data.push_back(loc_iden.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Altitude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt_attributes")
    {
        auto ent_ = std::make_shared<Environment::All::Location::Altitude::AltAttributes>();
        ent_->parent = this;
        alt_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Altitude::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alt_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::All::Location::Altitude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_iden")
    {
        loc_iden = value;
        loc_iden.value_namespace = name_space;
        loc_iden.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Altitude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_iden")
    {
        loc_iden.yfilter = yfilter;
    }
}

bool Environment::All::Location::Altitude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt_attributes" || name == "loc_iden")
        return true;
    return false;
}

Environment::All::Location::Altitude::AltAttributes::AltAttributes()
    :
    sensor{YType::str, "sensor"},
    print_header{YType::boolean, "print_header"},
    rack{YType::uint32, "rack"},
    sensor_value{YType::str, "sensor_value"},
    source{YType::str, "source"}
{

    yang_name = "alt_attributes"; yang_parent_name = "altitude"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::All::Location::Altitude::AltAttributes::~AltAttributes()
{
}

bool Environment::All::Location::Altitude::AltAttributes::has_data() const
{
    if (is_presence_container) return true;
    return sensor.is_set
	|| print_header.is_set
	|| rack.is_set
	|| sensor_value.is_set
	|| source.is_set;
}

bool Environment::All::Location::Altitude::AltAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor.yfilter)
	|| ydk::is_set(print_header.yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(sensor_value.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Environment::All::Location::Altitude::AltAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt_attributes";
    ADD_KEY_TOKEN(sensor, "sensor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::All::Location::Altitude::AltAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor.is_set || is_set(sensor.yfilter)) leaf_name_data.push_back(sensor.get_name_leafdata());
    if (print_header.is_set || is_set(print_header.yfilter)) leaf_name_data.push_back(print_header.get_name_leafdata());
    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (sensor_value.is_set || is_set(sensor_value.yfilter)) leaf_name_data.push_back(sensor_value.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::All::Location::Altitude::AltAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::All::Location::Altitude::AltAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::All::Location::Altitude::AltAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor")
    {
        sensor = value;
        sensor.value_namespace = name_space;
        sensor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "print_header")
    {
        print_header = value;
        print_header.value_namespace = name_space;
        print_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor_value")
    {
        sensor_value = value;
        sensor_value.value_namespace = name_space;
        sensor_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::All::Location::Altitude::AltAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor")
    {
        sensor.yfilter = yfilter;
    }
    if(value_path == "print_header")
    {
        print_header.yfilter = yfilter;
    }
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "sensor_value")
    {
        sensor_value.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Environment::All::Location::Altitude::AltAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor" || name == "print_header" || name == "rack" || name == "sensor_value" || name == "source")
        return true;
    return false;
}

Environment::Config::Config()
    :
    raise_fan_speed{YType::uint32, "raise-fan-speed"},
    fan_ctrl_optics{YType::uint32, "fan-ctrl-optics"},
    graceful_shutdown{YType::uint32, "graceful-shutdown"}
        ,
    router(std::make_shared<Environment::Config::Router>())
    , air_filter(std::make_shared<Environment::Config::AirFilter>())
    , fan_ctrl(std::make_shared<Environment::Config::FanCtrl>())
    , temperature(std::make_shared<Environment::Config::Temperature>())
    , monitoring(std::make_shared<Environment::Config::Monitoring>())
{
    router->parent = this;
    air_filter->parent = this;
    fan_ctrl->parent = this;
    temperature->parent = this;
    monitoring->parent = this;

    yang_name = "config"; yang_parent_name = "environment"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::~Config()
{
}

bool Environment::Config::has_data() const
{
    if (is_presence_container) return true;
    return raise_fan_speed.is_set
	|| fan_ctrl_optics.is_set
	|| graceful_shutdown.is_set
	|| (router !=  nullptr && router->has_data())
	|| (air_filter !=  nullptr && air_filter->has_data())
	|| (fan_ctrl !=  nullptr && fan_ctrl->has_data())
	|| (temperature !=  nullptr && temperature->has_data())
	|| (monitoring !=  nullptr && monitoring->has_data());
}

bool Environment::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(raise_fan_speed.yfilter)
	|| ydk::is_set(fan_ctrl_optics.yfilter)
	|| ydk::is_set(graceful_shutdown.yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (air_filter !=  nullptr && air_filter->has_operation())
	|| (fan_ctrl !=  nullptr && fan_ctrl->has_operation())
	|| (temperature !=  nullptr && temperature->has_operation())
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Environment::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (raise_fan_speed.is_set || is_set(raise_fan_speed.yfilter)) leaf_name_data.push_back(raise_fan_speed.get_name_leafdata());
    if (fan_ctrl_optics.is_set || is_set(fan_ctrl_optics.yfilter)) leaf_name_data.push_back(fan_ctrl_optics.get_name_leafdata());
    if (graceful_shutdown.is_set || is_set(graceful_shutdown.yfilter)) leaf_name_data.push_back(graceful_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Environment::Config::Router>();
        }
        return router;
    }

    if(child_yang_name == "air-filter")
    {
        if(air_filter == nullptr)
        {
            air_filter = std::make_shared<Environment::Config::AirFilter>();
        }
        return air_filter;
    }

    if(child_yang_name == "fan-ctrl")
    {
        if(fan_ctrl == nullptr)
        {
            fan_ctrl = std::make_shared<Environment::Config::FanCtrl>();
        }
        return fan_ctrl;
    }

    if(child_yang_name == "temperature")
    {
        if(temperature == nullptr)
        {
            temperature = std::make_shared<Environment::Config::Temperature>();
        }
        return temperature;
    }

    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Environment::Config::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(router != nullptr)
    {
        _children["router"] = router;
    }

    if(air_filter != nullptr)
    {
        _children["air-filter"] = air_filter;
    }

    if(fan_ctrl != nullptr)
    {
        _children["fan-ctrl"] = fan_ctrl;
    }

    if(temperature != nullptr)
    {
        _children["temperature"] = temperature;
    }

    if(monitoring != nullptr)
    {
        _children["monitoring"] = monitoring;
    }

    return _children;
}

void Environment::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "raise-fan-speed")
    {
        raise_fan_speed = value;
        raise_fan_speed.value_namespace = name_space;
        raise_fan_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fan-ctrl-optics")
    {
        fan_ctrl_optics = value;
        fan_ctrl_optics.value_namespace = name_space;
        fan_ctrl_optics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-shutdown")
    {
        graceful_shutdown = value;
        graceful_shutdown.value_namespace = name_space;
        graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "raise-fan-speed")
    {
        raise_fan_speed.yfilter = yfilter;
    }
    if(value_path == "fan-ctrl-optics")
    {
        fan_ctrl_optics.yfilter = yfilter;
    }
    if(value_path == "graceful-shutdown")
    {
        graceful_shutdown.yfilter = yfilter;
    }
}

bool Environment::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "air-filter" || name == "fan-ctrl" || name == "temperature" || name == "monitoring" || name == "raise-fan-speed" || name == "fan-ctrl-optics" || name == "graceful-shutdown")
        return true;
    return false;
}

Environment::Config::Router::Router()
    :
    altitude(std::make_shared<Environment::Config::Router::Altitude>())
{
    altitude->parent = this;

    yang_name = "router"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Router::~Router()
{
}

bool Environment::Config::Router::has_data() const
{
    if (is_presence_container) return true;
    return (altitude !=  nullptr && altitude->has_data());
}

bool Environment::Config::Router::has_operation() const
{
    return is_set(yfilter)
	|| (altitude !=  nullptr && altitude->has_operation());
}

std::string Environment::Config::Router::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "altitude")
    {
        if(altitude == nullptr)
        {
            altitude = std::make_shared<Environment::Config::Router::Altitude>();
        }
        return altitude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(altitude != nullptr)
    {
        _children["altitude"] = altitude;
    }

    return _children;
}

void Environment::Config::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "altitude")
        return true;
    return false;
}

Environment::Config::Router::Altitude::Altitude()
    :
    all(std::make_shared<Environment::Config::Router::Altitude::All>())
    , rack_loc(std::make_shared<Environment::Config::Router::Altitude::RackLoc>())
{
    all->parent = this;
    rack_loc->parent = this;

    yang_name = "altitude"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Router::Altitude::~Altitude()
{
}

bool Environment::Config::Router::Altitude::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (rack_loc !=  nullptr && rack_loc->has_data());
}

bool Environment::Config::Router::Altitude::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string Environment::Config::Router::Altitude::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Router::Altitude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "altitude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Router::Altitude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Router::Altitude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Environment::Config::Router::Altitude::All>();
        }
        return all;
    }

    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<Environment::Config::Router::Altitude::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Router::Altitude::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void Environment::Config::Router::Altitude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::Router::Altitude::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::Router::Altitude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "rack_loc")
        return true;
    return false;
}

Environment::Config::Router::Altitude::All::All()
    :
    num_meters{YType::uint32, "num_meters"}
{

    yang_name = "all"; yang_parent_name = "altitude"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Router::Altitude::All::~All()
{
}

bool Environment::Config::Router::Altitude::All::has_data() const
{
    if (is_presence_container) return true;
    return num_meters.is_set;
}

bool Environment::Config::Router::Altitude::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_meters.yfilter);
}

std::string Environment::Config::Router::Altitude::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/router/altitude/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Router::Altitude::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Router::Altitude::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_meters.is_set || is_set(num_meters.yfilter)) leaf_name_data.push_back(num_meters.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Router::Altitude::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Router::Altitude::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Config::Router::Altitude::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num_meters")
    {
        num_meters = value;
        num_meters.value_namespace = name_space;
        num_meters.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::Router::Altitude::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num_meters")
    {
        num_meters.yfilter = yfilter;
    }
}

bool Environment::Config::Router::Altitude::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num_meters")
        return true;
    return false;
}

Environment::Config::Router::Altitude::RackLoc::RackLoc()
    :
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "altitude"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Router::Altitude::RackLoc::~RackLoc()
{
}

bool Environment::Config::Router::Altitude::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::Config::Router::Altitude::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::Config::Router::Altitude::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/router/altitude/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Router::Altitude::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Router::Altitude::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Router::Altitude::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Config::Router::Altitude::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Router::Altitude::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Config::Router::Altitude::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::Router::Altitude::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::Router::Altitude::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::Config::Router::Altitude::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"},
    num_meters{YType::uint32, "num_meters"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Router::Altitude::RackLoc::Location::~Location()
{
}

bool Environment::Config::Router::Altitude::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set
	|| num_meters.is_set;
}

bool Environment::Config::Router::Altitude::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter)
	|| ydk::is_set(num_meters.yfilter);
}

std::string Environment::Config::Router::Altitude::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/router/altitude/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Router::Altitude::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Router::Altitude::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());
    if (num_meters.is_set || is_set(num_meters.yfilter)) leaf_name_data.push_back(num_meters.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Router::Altitude::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Router::Altitude::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Config::Router::Altitude::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_meters")
    {
        num_meters = value;
        num_meters.value_namespace = name_space;
        num_meters.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::Router::Altitude::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
    if(value_path == "num_meters")
    {
        num_meters.yfilter = yfilter;
    }
}

bool Environment::Config::Router::Altitude::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId" || name == "num_meters")
        return true;
    return false;
}

Environment::Config::AirFilter::AirFilter()
    :
    replaced(std::make_shared<Environment::Config::AirFilter::Replaced>())
{
    replaced->parent = this;

    yang_name = "air-filter"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::AirFilter::~AirFilter()
{
}

bool Environment::Config::AirFilter::has_data() const
{
    if (is_presence_container) return true;
    return (replaced !=  nullptr && replaced->has_data());
}

bool Environment::Config::AirFilter::has_operation() const
{
    return is_set(yfilter)
	|| (replaced !=  nullptr && replaced->has_operation());
}

std::string Environment::Config::AirFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::AirFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "air-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::AirFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::AirFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replaced")
    {
        if(replaced == nullptr)
        {
            replaced = std::make_shared<Environment::Config::AirFilter::Replaced>();
        }
        return replaced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::AirFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replaced != nullptr)
    {
        _children["replaced"] = replaced;
    }

    return _children;
}

void Environment::Config::AirFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::AirFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::AirFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replaced")
        return true;
    return false;
}

Environment::Config::AirFilter::Replaced::Replaced()
    :
    all(std::make_shared<Environment::Config::AirFilter::Replaced::All>())
    , rack_loc(std::make_shared<Environment::Config::AirFilter::Replaced::RackLoc>())
{
    all->parent = this;
    rack_loc->parent = this;

    yang_name = "replaced"; yang_parent_name = "air-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::AirFilter::Replaced::~Replaced()
{
}

bool Environment::Config::AirFilter::Replaced::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (rack_loc !=  nullptr && rack_loc->has_data());
}

bool Environment::Config::AirFilter::Replaced::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string Environment::Config::AirFilter::Replaced::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/air-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::AirFilter::Replaced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replaced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::AirFilter::Replaced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::AirFilter::Replaced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Environment::Config::AirFilter::Replaced::All>();
        }
        return all;
    }

    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<Environment::Config::AirFilter::Replaced::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::AirFilter::Replaced::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void Environment::Config::AirFilter::Replaced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::AirFilter::Replaced::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::AirFilter::Replaced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "rack_loc")
        return true;
    return false;
}

Environment::Config::AirFilter::Replaced::All::All()
    :
    date{YType::str, "date"}
{

    yang_name = "all"; yang_parent_name = "replaced"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::AirFilter::Replaced::All::~All()
{
}

bool Environment::Config::AirFilter::Replaced::All::has_data() const
{
    if (is_presence_container) return true;
    return date.is_set;
}

bool Environment::Config::AirFilter::Replaced::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date.yfilter);
}

std::string Environment::Config::AirFilter::Replaced::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/air-filter/replaced/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::AirFilter::Replaced::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::AirFilter::Replaced::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::AirFilter::Replaced::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::AirFilter::Replaced::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Config::AirFilter::Replaced::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::AirFilter::Replaced::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
}

bool Environment::Config::AirFilter::Replaced::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date")
        return true;
    return false;
}

Environment::Config::AirFilter::Replaced::RackLoc::RackLoc()
    :
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "replaced"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::AirFilter::Replaced::RackLoc::~RackLoc()
{
}

bool Environment::Config::AirFilter::Replaced::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Environment::Config::AirFilter::Replaced::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Environment::Config::AirFilter::Replaced::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/air-filter/replaced/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::AirFilter::Replaced::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::AirFilter::Replaced::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::AirFilter::Replaced::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Config::AirFilter::Replaced::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::AirFilter::Replaced::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Config::AirFilter::Replaced::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::AirFilter::Replaced::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::AirFilter::Replaced::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Environment::Config::AirFilter::Replaced::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"},
    date{YType::str, "date"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::AirFilter::Replaced::RackLoc::Location::~Location()
{
}

bool Environment::Config::AirFilter::Replaced::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set
	|| date.is_set;
}

bool Environment::Config::AirFilter::Replaced::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter)
	|| ydk::is_set(date.yfilter);
}

std::string Environment::Config::AirFilter::Replaced::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/air-filter/replaced/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::AirFilter::Replaced::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::AirFilter::Replaced::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::AirFilter::Replaced::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::AirFilter::Replaced::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Config::AirFilter::Replaced::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::AirFilter::Replaced::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
}

bool Environment::Config::AirFilter::Replaced::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId" || name == "date")
        return true;
    return false;
}

Environment::Config::FanCtrl::FanCtrl()
    :
    disable(std::make_shared<Environment::Config::FanCtrl::Disable>())
{
    disable->parent = this;

    yang_name = "fan-ctrl"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::FanCtrl::~FanCtrl()
{
}

bool Environment::Config::FanCtrl::has_data() const
{
    if (is_presence_container) return true;
    return (disable !=  nullptr && disable->has_data());
}

bool Environment::Config::FanCtrl::has_operation() const
{
    return is_set(yfilter)
	|| (disable !=  nullptr && disable->has_operation());
}

std::string Environment::Config::FanCtrl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::FanCtrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-ctrl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::FanCtrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::FanCtrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Environment::Config::FanCtrl::Disable>();
        }
        return disable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::FanCtrl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    return _children;
}

void Environment::Config::FanCtrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::FanCtrl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::FanCtrl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Environment::Config::FanCtrl::Disable::Disable()
    :
    rack_loc(std::make_shared<Environment::Config::FanCtrl::Disable::RackLoc>())
{
    rack_loc->parent = this;

    yang_name = "disable"; yang_parent_name = "fan-ctrl"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::FanCtrl::Disable::~Disable()
{
}

bool Environment::Config::FanCtrl::Disable::has_data() const
{
    if (is_presence_container) return true;
    return (rack_loc !=  nullptr && rack_loc->has_data());
}

bool Environment::Config::FanCtrl::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string Environment::Config::FanCtrl::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/fan-ctrl/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::FanCtrl::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::FanCtrl::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::FanCtrl::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<Environment::Config::FanCtrl::Disable::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::FanCtrl::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void Environment::Config::FanCtrl::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::FanCtrl::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::FanCtrl::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_loc")
        return true;
    return false;
}

Environment::Config::FanCtrl::Disable::RackLoc::RackLoc()
    :
    all{YType::empty, "all"}
        ,
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::FanCtrl::Disable::RackLoc::~RackLoc()
{
}

bool Environment::Config::FanCtrl::Disable::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return all.is_set;
}

bool Environment::Config::FanCtrl::Disable::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Environment::Config::FanCtrl::Disable::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/fan-ctrl/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::FanCtrl::Disable::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::FanCtrl::Disable::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::FanCtrl::Disable::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Config::FanCtrl::Disable::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::FanCtrl::Disable::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Config::FanCtrl::Disable::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::FanCtrl::Disable::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Environment::Config::FanCtrl::Disable::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "all")
        return true;
    return false;
}

Environment::Config::FanCtrl::Disable::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::FanCtrl::Disable::RackLoc::Location::~Location()
{
}

bool Environment::Config::FanCtrl::Disable::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set;
}

bool Environment::Config::FanCtrl::Disable::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter);
}

std::string Environment::Config::FanCtrl::Disable::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/fan-ctrl/disable/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::FanCtrl::Disable::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::FanCtrl::Disable::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::FanCtrl::Disable::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::FanCtrl::Disable::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Config::FanCtrl::Disable::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::FanCtrl::Disable::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
}

bool Environment::Config::FanCtrl::Disable::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId")
        return true;
    return false;
}

Environment::Config::Temperature::Temperature()
    :
    disable(std::make_shared<Environment::Config::Temperature::Disable>())
{
    disable->parent = this;

    yang_name = "temperature"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Temperature::~Temperature()
{
}

bool Environment::Config::Temperature::has_data() const
{
    if (is_presence_container) return true;
    return (disable !=  nullptr && disable->has_data());
}

bool Environment::Config::Temperature::has_operation() const
{
    return is_set(yfilter)
	|| (disable !=  nullptr && disable->has_operation());
}

std::string Environment::Config::Temperature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Temperature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "temperature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Temperature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Temperature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Environment::Config::Temperature::Disable>();
        }
        return disable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Temperature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    return _children;
}

void Environment::Config::Temperature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::Temperature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::Temperature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Environment::Config::Temperature::Disable::Disable()
    :
    rack_loc(std::make_shared<Environment::Config::Temperature::Disable::RackLoc>())
{
    rack_loc->parent = this;

    yang_name = "disable"; yang_parent_name = "temperature"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Temperature::Disable::~Disable()
{
}

bool Environment::Config::Temperature::Disable::has_data() const
{
    if (is_presence_container) return true;
    return (rack_loc !=  nullptr && rack_loc->has_data());
}

bool Environment::Config::Temperature::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string Environment::Config::Temperature::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/temperature/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Temperature::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Temperature::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Temperature::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<Environment::Config::Temperature::Disable::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Temperature::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void Environment::Config::Temperature::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::Temperature::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::Temperature::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_loc")
        return true;
    return false;
}

Environment::Config::Temperature::Disable::RackLoc::RackLoc()
    :
    all{YType::empty, "all"}
        ,
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Temperature::Disable::RackLoc::~RackLoc()
{
}

bool Environment::Config::Temperature::Disable::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return all.is_set;
}

bool Environment::Config::Temperature::Disable::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Environment::Config::Temperature::Disable::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/temperature/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Temperature::Disable::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Temperature::Disable::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Temperature::Disable::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Config::Temperature::Disable::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Temperature::Disable::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Config::Temperature::Disable::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::Temperature::Disable::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Environment::Config::Temperature::Disable::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "all")
        return true;
    return false;
}

Environment::Config::Temperature::Disable::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Temperature::Disable::RackLoc::Location::~Location()
{
}

bool Environment::Config::Temperature::Disable::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set;
}

bool Environment::Config::Temperature::Disable::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter);
}

std::string Environment::Config::Temperature::Disable::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/temperature/disable/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Temperature::Disable::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Temperature::Disable::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Temperature::Disable::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Temperature::Disable::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Config::Temperature::Disable::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::Temperature::Disable::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
}

bool Environment::Config::Temperature::Disable::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId")
        return true;
    return false;
}

Environment::Config::Monitoring::Monitoring()
    :
    disable(std::make_shared<Environment::Config::Monitoring::Disable>())
{
    disable->parent = this;

    yang_name = "monitoring"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Monitoring::~Monitoring()
{
}

bool Environment::Config::Monitoring::has_data() const
{
    if (is_presence_container) return true;
    return (disable !=  nullptr && disable->has_data());
}

bool Environment::Config::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| (disable !=  nullptr && disable->has_operation());
}

std::string Environment::Config::Monitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Environment::Config::Monitoring::Disable>();
        }
        return disable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    return _children;
}

void Environment::Config::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Environment::Config::Monitoring::Disable::Disable()
    :
    rack_loc(std::make_shared<Environment::Config::Monitoring::Disable::RackLoc>())
{
    rack_loc->parent = this;

    yang_name = "disable"; yang_parent_name = "monitoring"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Monitoring::Disable::~Disable()
{
}

bool Environment::Config::Monitoring::Disable::has_data() const
{
    if (is_presence_container) return true;
    return (rack_loc !=  nullptr && rack_loc->has_data());
}

bool Environment::Config::Monitoring::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string Environment::Config::Monitoring::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/monitoring/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Monitoring::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Monitoring::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Monitoring::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<Environment::Config::Monitoring::Disable::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Monitoring::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void Environment::Config::Monitoring::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Environment::Config::Monitoring::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Environment::Config::Monitoring::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_loc")
        return true;
    return false;
}

Environment::Config::Monitoring::Disable::RackLoc::RackLoc()
    :
    all{YType::empty, "all"}
        ,
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Monitoring::Disable::RackLoc::~RackLoc()
{
}

bool Environment::Config::Monitoring::Disable::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return all.is_set;
}

bool Environment::Config::Monitoring::Disable::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Environment::Config::Monitoring::Disable::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/monitoring/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Monitoring::Disable::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Monitoring::Disable::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Monitoring::Disable::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Config::Monitoring::Disable::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Monitoring::Disable::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Config::Monitoring::Disable::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::Monitoring::Disable::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Environment::Config::Monitoring::Disable::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "all")
        return true;
    return false;
}

Environment::Config::Monitoring::Disable::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Config::Monitoring::Disable::RackLoc::Location::~Location()
{
}

bool Environment::Config::Monitoring::Disable::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set;
}

bool Environment::Config::Monitoring::Disable::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter);
}

std::string Environment::Config::Monitoring::Disable::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/config/monitoring/disable/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Config::Monitoring::Disable::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Config::Monitoring::Disable::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Config::Monitoring::Disable::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Config::Monitoring::Disable::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Config::Monitoring::Disable::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Config::Monitoring::Disable::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
}

bool Environment::Config::Monitoring::Disable::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId")
        return true;
    return false;
}

Environment::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "environment"; is_top_level_class = false; has_list_ancestor = false; 
}

Environment::Trace::~Trace()
{
}

bool Environment::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Environment::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Environment::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:environment/" << get_segment_path();
    return path_buffer.str();
}

std::string Environment::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Environment::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Environment::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Environment::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Trace::Location::~Location()
{
}

bool Environment::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Environment::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Environment::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Environment::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Environment::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Environment::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Trace::Location::AllOptions::~AllOptions()
{
}

bool Environment::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Environment::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Environment::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Environment::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Environment::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Environment::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Environment::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Environment::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Environment::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Environment::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Environment::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Environment::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Environment::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Environment::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Environment::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Environment::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Environment::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

PowerMgmt::PowerMgmt()
    :
    config(std::make_shared<PowerMgmt::Config>())
{
    config->parent = this;

    yang_name = "power-mgmt"; yang_parent_name = "Cisco-IOS-XR-sysadmin-envmon-ui"; is_top_level_class = true; has_list_ancestor = false; 
}

PowerMgmt::~PowerMgmt()
{
}

bool PowerMgmt::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data());
}

bool PowerMgmt::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string PowerMgmt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<PowerMgmt::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    return _children;
}

void PowerMgmt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> PowerMgmt::clone_ptr() const
{
    return std::make_shared<PowerMgmt>();
}

std::string PowerMgmt::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PowerMgmt::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PowerMgmt::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PowerMgmt::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PowerMgmt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

PowerMgmt::Config::Config()
    :
    action(std::make_shared<PowerMgmt::Config::Action>())
    , single_feed_mode(std::make_shared<PowerMgmt::Config::SingleFeedMode>())
    , extended_temp(std::make_shared<PowerMgmt::Config::ExtendedTemp>())
    , redundancy_num_pms(std::make_shared<PowerMgmt::Config::RedundancyNumPms>())
    , progressive(std::make_shared<PowerMgmt::Config::Progressive>())
{
    action->parent = this;
    single_feed_mode->parent = this;
    extended_temp->parent = this;
    redundancy_num_pms->parent = this;
    progressive->parent = this;

    yang_name = "config"; yang_parent_name = "power-mgmt"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::~Config()
{
}

bool PowerMgmt::Config::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data())
	|| (single_feed_mode !=  nullptr && single_feed_mode->has_data())
	|| (extended_temp !=  nullptr && extended_temp->has_data())
	|| (redundancy_num_pms !=  nullptr && redundancy_num_pms->has_data())
	|| (progressive !=  nullptr && progressive->has_data());
}

bool PowerMgmt::Config::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (single_feed_mode !=  nullptr && single_feed_mode->has_operation())
	|| (extended_temp !=  nullptr && extended_temp->has_operation())
	|| (redundancy_num_pms !=  nullptr && redundancy_num_pms->has_operation())
	|| (progressive !=  nullptr && progressive->has_operation());
}

std::string PowerMgmt::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<PowerMgmt::Config::Action>();
        }
        return action;
    }

    if(child_yang_name == "single-feed-mode")
    {
        if(single_feed_mode == nullptr)
        {
            single_feed_mode = std::make_shared<PowerMgmt::Config::SingleFeedMode>();
        }
        return single_feed_mode;
    }

    if(child_yang_name == "extended-temp")
    {
        if(extended_temp == nullptr)
        {
            extended_temp = std::make_shared<PowerMgmt::Config::ExtendedTemp>();
        }
        return extended_temp;
    }

    if(child_yang_name == "redundancy-num-pms")
    {
        if(redundancy_num_pms == nullptr)
        {
            redundancy_num_pms = std::make_shared<PowerMgmt::Config::RedundancyNumPms>();
        }
        return redundancy_num_pms;
    }

    if(child_yang_name == "progressive")
    {
        if(progressive == nullptr)
        {
            progressive = std::make_shared<PowerMgmt::Config::Progressive>();
        }
        return progressive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    if(single_feed_mode != nullptr)
    {
        _children["single-feed-mode"] = single_feed_mode;
    }

    if(extended_temp != nullptr)
    {
        _children["extended-temp"] = extended_temp;
    }

    if(redundancy_num_pms != nullptr)
    {
        _children["redundancy-num-pms"] = redundancy_num_pms;
    }

    if(progressive != nullptr)
    {
        _children["progressive"] = progressive;
    }

    return _children;
}

void PowerMgmt::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "single-feed-mode" || name == "extended-temp" || name == "redundancy-num-pms" || name == "progressive")
        return true;
    return false;
}

PowerMgmt::Config::Action::Action()
    :
    disable(std::make_shared<PowerMgmt::Config::Action::Disable>())
{
    disable->parent = this;

    yang_name = "action"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::Action::~Action()
{
}

bool PowerMgmt::Config::Action::has_data() const
{
    if (is_presence_container) return true;
    return (disable !=  nullptr && disable->has_data());
}

bool PowerMgmt::Config::Action::has_operation() const
{
    return is_set(yfilter)
	|| (disable !=  nullptr && disable->has_operation());
}

std::string PowerMgmt::Config::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<PowerMgmt::Config::Action::Disable>();
        }
        return disable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    return _children;
}

void PowerMgmt::Config::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

PowerMgmt::Config::Action::Disable::Disable()
    :
    rack_loc(std::make_shared<PowerMgmt::Config::Action::Disable::RackLoc>())
{
    rack_loc->parent = this;

    yang_name = "disable"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::Action::Disable::~Disable()
{
}

bool PowerMgmt::Config::Action::Disable::has_data() const
{
    if (is_presence_container) return true;
    return (rack_loc !=  nullptr && rack_loc->has_data());
}

bool PowerMgmt::Config::Action::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string PowerMgmt::Config::Action::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/action/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::Action::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::Action::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::Action::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<PowerMgmt::Config::Action::Disable::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::Action::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void PowerMgmt::Config::Action::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::Action::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::Action::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_loc")
        return true;
    return false;
}

PowerMgmt::Config::Action::Disable::RackLoc::RackLoc()
    :
    all{YType::empty, "all"}
        ,
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::Action::Disable::RackLoc::~RackLoc()
{
}

bool PowerMgmt::Config::Action::Disable::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return all.is_set;
}

bool PowerMgmt::Config::Action::Disable::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string PowerMgmt::Config::Action::Disable::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/action/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::Action::Disable::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::Action::Disable::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::Action::Disable::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<PowerMgmt::Config::Action::Disable::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::Action::Disable::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PowerMgmt::Config::Action::Disable::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::Action::Disable::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::Action::Disable::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "all")
        return true;
    return false;
}

PowerMgmt::Config::Action::Disable::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::Action::Disable::RackLoc::Location::~Location()
{
}

bool PowerMgmt::Config::Action::Disable::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set;
}

bool PowerMgmt::Config::Action::Disable::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter);
}

std::string PowerMgmt::Config::Action::Disable::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/action/disable/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::Action::Disable::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::Action::Disable::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::Action::Disable::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::Action::Disable::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PowerMgmt::Config::Action::Disable::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::Action::Disable::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::Action::Disable::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId")
        return true;
    return false;
}

PowerMgmt::Config::SingleFeedMode::SingleFeedMode()
    :
    enable(std::make_shared<PowerMgmt::Config::SingleFeedMode::Enable>())
{
    enable->parent = this;

    yang_name = "single-feed-mode"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::SingleFeedMode::~SingleFeedMode()
{
}

bool PowerMgmt::Config::SingleFeedMode::has_data() const
{
    if (is_presence_container) return true;
    return (enable !=  nullptr && enable->has_data());
}

bool PowerMgmt::Config::SingleFeedMode::has_operation() const
{
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string PowerMgmt::Config::SingleFeedMode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::SingleFeedMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-feed-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::SingleFeedMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::SingleFeedMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<PowerMgmt::Config::SingleFeedMode::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::SingleFeedMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    return _children;
}

void PowerMgmt::Config::SingleFeedMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::SingleFeedMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::SingleFeedMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

PowerMgmt::Config::SingleFeedMode::Enable::Enable()
    :
    rack_loc(std::make_shared<PowerMgmt::Config::SingleFeedMode::Enable::RackLoc>())
{
    rack_loc->parent = this;

    yang_name = "enable"; yang_parent_name = "single-feed-mode"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::SingleFeedMode::Enable::~Enable()
{
}

bool PowerMgmt::Config::SingleFeedMode::Enable::has_data() const
{
    if (is_presence_container) return true;
    return (rack_loc !=  nullptr && rack_loc->has_data());
}

bool PowerMgmt::Config::SingleFeedMode::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string PowerMgmt::Config::SingleFeedMode::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/single-feed-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::SingleFeedMode::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::SingleFeedMode::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::SingleFeedMode::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<PowerMgmt::Config::SingleFeedMode::Enable::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::SingleFeedMode::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void PowerMgmt::Config::SingleFeedMode::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::SingleFeedMode::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::SingleFeedMode::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_loc")
        return true;
    return false;
}

PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::RackLoc()
    :
    all{YType::empty, "all"}
        ,
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::~RackLoc()
{
}

bool PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return all.is_set;
}

bool PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/single-feed-mode/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "all")
        return true;
    return false;
}

PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::~Location()
{
}

bool PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set;
}

bool PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter);
}

std::string PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/single-feed-mode/enable/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::SingleFeedMode::Enable::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId")
        return true;
    return false;
}

PowerMgmt::Config::ExtendedTemp::ExtendedTemp()
    :
    enable(std::make_shared<PowerMgmt::Config::ExtendedTemp::Enable>())
{
    enable->parent = this;

    yang_name = "extended-temp"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::ExtendedTemp::~ExtendedTemp()
{
}

bool PowerMgmt::Config::ExtendedTemp::has_data() const
{
    if (is_presence_container) return true;
    return (enable !=  nullptr && enable->has_data());
}

bool PowerMgmt::Config::ExtendedTemp::has_operation() const
{
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string PowerMgmt::Config::ExtendedTemp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::ExtendedTemp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-temp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::ExtendedTemp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::ExtendedTemp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<PowerMgmt::Config::ExtendedTemp::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::ExtendedTemp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    return _children;
}

void PowerMgmt::Config::ExtendedTemp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::ExtendedTemp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::ExtendedTemp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

PowerMgmt::Config::ExtendedTemp::Enable::Enable()
    :
    rack_loc(std::make_shared<PowerMgmt::Config::ExtendedTemp::Enable::RackLoc>())
{
    rack_loc->parent = this;

    yang_name = "enable"; yang_parent_name = "extended-temp"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::ExtendedTemp::Enable::~Enable()
{
}

bool PowerMgmt::Config::ExtendedTemp::Enable::has_data() const
{
    if (is_presence_container) return true;
    return (rack_loc !=  nullptr && rack_loc->has_data());
}

bool PowerMgmt::Config::ExtendedTemp::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string PowerMgmt::Config::ExtendedTemp::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/extended-temp/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::ExtendedTemp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::ExtendedTemp::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::ExtendedTemp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<PowerMgmt::Config::ExtendedTemp::Enable::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::ExtendedTemp::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void PowerMgmt::Config::ExtendedTemp::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::ExtendedTemp::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::ExtendedTemp::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_loc")
        return true;
    return false;
}

PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::RackLoc()
    :
    all{YType::empty, "all"}
        ,
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::~RackLoc()
{
}

bool PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return all.is_set;
}

bool PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/extended-temp/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "all")
        return true;
    return false;
}

PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::~Location()
{
}

bool PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set;
}

bool PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter);
}

std::string PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/extended-temp/enable/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::ExtendedTemp::Enable::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId")
        return true;
    return false;
}

PowerMgmt::Config::RedundancyNumPms::RedundancyNumPms()
    :
    all(std::make_shared<PowerMgmt::Config::RedundancyNumPms::All>())
    , rack_loc(std::make_shared<PowerMgmt::Config::RedundancyNumPms::RackLoc>())
{
    all->parent = this;
    rack_loc->parent = this;

    yang_name = "redundancy-num-pms"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::RedundancyNumPms::~RedundancyNumPms()
{
}

bool PowerMgmt::Config::RedundancyNumPms::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (rack_loc !=  nullptr && rack_loc->has_data());
}

bool PowerMgmt::Config::RedundancyNumPms::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (rack_loc !=  nullptr && rack_loc->has_operation());
}

std::string PowerMgmt::Config::RedundancyNumPms::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::RedundancyNumPms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy-num-pms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::RedundancyNumPms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::RedundancyNumPms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<PowerMgmt::Config::RedundancyNumPms::All>();
        }
        return all;
    }

    if(child_yang_name == "rack_loc")
    {
        if(rack_loc == nullptr)
        {
            rack_loc = std::make_shared<PowerMgmt::Config::RedundancyNumPms::RackLoc>();
        }
        return rack_loc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::RedundancyNumPms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(rack_loc != nullptr)
    {
        _children["rack_loc"] = rack_loc;
    }

    return _children;
}

void PowerMgmt::Config::RedundancyNumPms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::RedundancyNumPms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::RedundancyNumPms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "rack_loc")
        return true;
    return false;
}

PowerMgmt::Config::RedundancyNumPms::All::All()
    :
    num_pm{YType::uint32, "num_pm"}
{

    yang_name = "all"; yang_parent_name = "redundancy-num-pms"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::RedundancyNumPms::All::~All()
{
}

bool PowerMgmt::Config::RedundancyNumPms::All::has_data() const
{
    if (is_presence_container) return true;
    return num_pm.is_set;
}

bool PowerMgmt::Config::RedundancyNumPms::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_pm.yfilter);
}

std::string PowerMgmt::Config::RedundancyNumPms::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/redundancy-num-pms/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::RedundancyNumPms::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::RedundancyNumPms::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_pm.is_set || is_set(num_pm.yfilter)) leaf_name_data.push_back(num_pm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::RedundancyNumPms::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::RedundancyNumPms::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PowerMgmt::Config::RedundancyNumPms::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num_pm")
    {
        num_pm = value;
        num_pm.value_namespace = name_space;
        num_pm.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::RedundancyNumPms::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num_pm")
    {
        num_pm.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::RedundancyNumPms::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num_pm")
        return true;
    return false;
}

PowerMgmt::Config::RedundancyNumPms::RackLoc::RackLoc()
    :
    location(this, {"rackid"})
{

    yang_name = "rack_loc"; yang_parent_name = "redundancy-num-pms"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::RedundancyNumPms::RackLoc::~RackLoc()
{
}

bool PowerMgmt::Config::RedundancyNumPms::RackLoc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool PowerMgmt::Config::RedundancyNumPms::RackLoc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PowerMgmt::Config::RedundancyNumPms::RackLoc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/redundancy-num-pms/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::RedundancyNumPms::RackLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::RedundancyNumPms::RackLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::RedundancyNumPms::RackLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<PowerMgmt::Config::RedundancyNumPms::RackLoc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::RedundancyNumPms::RackLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PowerMgmt::Config::RedundancyNumPms::RackLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::RedundancyNumPms::RackLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::RedundancyNumPms::RackLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::Location()
    :
    rackid{YType::enumeration, "rackId"},
    num_pm{YType::uint32, "num_pm"}
{

    yang_name = "location"; yang_parent_name = "rack_loc"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::~Location()
{
}

bool PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::has_data() const
{
    if (is_presence_container) return true;
    return rackid.is_set
	|| num_pm.is_set;
}

bool PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rackid.yfilter)
	|| ydk::is_set(num_pm.yfilter);
}

std::string PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/redundancy-num-pms/rack_loc/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rackid, "rackId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rackid.is_set || is_set(rackid.yfilter)) leaf_name_data.push_back(rackid.get_name_leafdata());
    if (num_pm.is_set || is_set(num_pm.yfilter)) leaf_name_data.push_back(num_pm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rackId")
    {
        rackid = value;
        rackid.value_namespace = name_space;
        rackid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_pm")
    {
        num_pm = value;
        num_pm.value_namespace = name_space;
        num_pm.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rackId")
    {
        rackid.yfilter = yfilter;
    }
    if(value_path == "num_pm")
    {
        num_pm.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::RedundancyNumPms::RackLoc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rackId" || name == "num_pm")
        return true;
    return false;
}

PowerMgmt::Config::Progressive::Progressive()
    :
    enable(this, {"enabled"})
{

    yang_name = "progressive"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::Progressive::~Progressive()
{
}

bool PowerMgmt::Config::Progressive::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<enable.len(); index++)
    {
        if(enable[index]->has_data())
            return true;
    }
    return false;
}

bool PowerMgmt::Config::Progressive::has_operation() const
{
    for (std::size_t index=0; index<enable.len(); index++)
    {
        if(enable[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PowerMgmt::Config::Progressive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::Progressive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "progressive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::Progressive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::Progressive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        auto ent_ = std::make_shared<PowerMgmt::Config::Progressive::Enable>();
        ent_->parent = this;
        enable.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::Progressive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : enable.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PowerMgmt::Config::Progressive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::Progressive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::Progressive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

PowerMgmt::Config::Progressive::Enable::Enable()
    :
    enabled{YType::enumeration, "enabled"},
    syslog_threshold{YType::uint32, "syslog-threshold"},
    shutdown_threshold{YType::uint32, "shutdown-threshold"}
        ,
    priority(std::make_shared<PowerMgmt::Config::Progressive::Enable::Priority>())
{
    priority->parent = this;

    yang_name = "enable"; yang_parent_name = "progressive"; is_top_level_class = false; has_list_ancestor = false; 
}

PowerMgmt::Config::Progressive::Enable::~Enable()
{
}

bool PowerMgmt::Config::Progressive::Enable::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| syslog_threshold.is_set
	|| shutdown_threshold.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool PowerMgmt::Config::Progressive::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(syslog_threshold.yfilter)
	|| ydk::is_set(shutdown_threshold.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string PowerMgmt::Config::Progressive::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-envmon-ui:power-mgmt/config/progressive/" << get_segment_path();
    return path_buffer.str();
}

std::string PowerMgmt::Config::Progressive::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    ADD_KEY_TOKEN(enabled, "enabled");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::Progressive::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (syslog_threshold.is_set || is_set(syslog_threshold.yfilter)) leaf_name_data.push_back(syslog_threshold.get_name_leafdata());
    if (shutdown_threshold.is_set || is_set(shutdown_threshold.yfilter)) leaf_name_data.push_back(shutdown_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::Progressive::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<PowerMgmt::Config::Progressive::Enable::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::Progressive::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void PowerMgmt::Config::Progressive::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog-threshold")
    {
        syslog_threshold = value;
        syslog_threshold.value_namespace = name_space;
        syslog_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold")
    {
        shutdown_threshold = value;
        shutdown_threshold.value_namespace = name_space;
        shutdown_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::Progressive::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "syslog-threshold")
    {
        syslog_threshold.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold")
    {
        shutdown_threshold.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::Progressive::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "enabled" || name == "syslog-threshold" || name == "shutdown-threshold")
        return true;
    return false;
}

PowerMgmt::Config::Progressive::Enable::Priority::Priority()
    :
    location(this, {"loc"})
{

    yang_name = "priority"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = true; 
}

PowerMgmt::Config::Progressive::Enable::Priority::~Priority()
{
}

bool PowerMgmt::Config::Progressive::Enable::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool PowerMgmt::Config::Progressive::Enable::Priority::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PowerMgmt::Config::Progressive::Enable::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::Progressive::Enable::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::Progressive::Enable::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<PowerMgmt::Config::Progressive::Enable::Priority::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::Progressive::Enable::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PowerMgmt::Config::Progressive::Enable::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PowerMgmt::Config::Progressive::Enable::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PowerMgmt::Config::Progressive::Enable::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

PowerMgmt::Config::Progressive::Enable::Priority::Location::Location()
    :
    loc{YType::str, "loc"},
    prior{YType::uint32, "prior"}
{

    yang_name = "location"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

PowerMgmt::Config::Progressive::Enable::Priority::Location::~Location()
{
}

bool PowerMgmt::Config::Progressive::Enable::Priority::Location::has_data() const
{
    if (is_presence_container) return true;
    return loc.is_set
	|| prior.is_set;
}

bool PowerMgmt::Config::Progressive::Enable::Priority::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter)
	|| ydk::is_set(prior.yfilter);
}

std::string PowerMgmt::Config::Progressive::Enable::Priority::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PowerMgmt::Config::Progressive::Enable::Priority::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());
    if (prior.is_set || is_set(prior.yfilter)) leaf_name_data.push_back(prior.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PowerMgmt::Config::Progressive::Enable::Priority::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PowerMgmt::Config::Progressive::Enable::Priority::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PowerMgmt::Config::Progressive::Enable::Priority::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prior")
    {
        prior = value;
        prior.value_namespace = name_space;
        prior.value_namespace_prefix = name_space_prefix;
    }
}

void PowerMgmt::Config::Progressive::Enable::Priority::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
    if(value_path == "prior")
    {
        prior.yfilter = yfilter;
    }
}

bool PowerMgmt::Config::Progressive::Enable::Priority::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc" || name == "prior")
        return true;
    return false;
}

const Enum::YLeaf PowerMgmt::Config::Progressive::Enable::Enabled::enable {0, "enable"};


}
}

