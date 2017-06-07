
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_sc_envmon_admin_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_sc_envmon_admin_oper {

EnvironmentalMonitoring::EnvironmentalMonitoring()
    :
    racks(std::make_shared<EnvironmentalMonitoring::Racks>())
{
    racks->parent = this;

    yang_name = "environmental-monitoring"; yang_parent_name = "Cisco-IOS-XR-asr9k-sc-envmon-admin-oper";
}

EnvironmentalMonitoring::~EnvironmentalMonitoring()
{
}

bool EnvironmentalMonitoring::has_data() const
{
    return (racks !=  nullptr && racks->has_data());
}

bool EnvironmentalMonitoring::has_operation() const
{
    return is_set(operation)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string EnvironmentalMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-envmon-admin-oper:environmental-monitoring";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EnvironmentalMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<EnvironmentalMonitoring::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void EnvironmentalMonitoring::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> EnvironmentalMonitoring::clone_ptr() const
{
    return std::make_shared<EnvironmentalMonitoring>();
}

std::string EnvironmentalMonitoring::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EnvironmentalMonitoring::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EnvironmentalMonitoring::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EnvironmentalMonitoring::Racks::Racks()
{
    yang_name = "racks"; yang_parent_name = "environmental-monitoring";
}

EnvironmentalMonitoring::Racks::~Racks()
{
}

bool EnvironmentalMonitoring::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool EnvironmentalMonitoring::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EnvironmentalMonitoring::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-sc-envmon-admin-oper:environmental-monitoring/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EnvironmentalMonitoring::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::set_value(const std::string & value_path, std::string value)
{
}

EnvironmentalMonitoring::Racks::Rack::Rack()
    :
    rack{YType::int32, "rack"}
    	,
    slots(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks";
}

EnvironmentalMonitoring::Racks::Rack::~Rack()
{
}

bool EnvironmentalMonitoring::Racks::Rack::has_data() const
{
    return rack.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool EnvironmentalMonitoring::Racks::Rack::has_operation() const
{
    return is_set(operation)
	|| is_set(rack.operation)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string EnvironmentalMonitoring::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack='" <<rack <<"']";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-sc-envmon-admin-oper:environmental-monitoring/racks/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.operation)) leaf_name_data.push_back(rack.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rack")
    {
        rack = value;
    }
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slots()
{
    yang_name = "slots"; yang_parent_name = "rack";
}

EnvironmentalMonitoring::Racks::Rack::Slots::~Slots()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slots' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::set_value(const std::string & value_path, std::string value)
{
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Slot()
    :
    slot{YType::str, "slot"}
    	,
    modules(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules>())
{
    modules->parent = this;

    yang_name = "slot"; yang_parent_name = "slots";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::~Slot()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::has_data() const
{
    return slot.is_set
	|| (modules !=  nullptr && modules->has_data());
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(operation)
	|| is_set(slot.operation)
	|| (modules !=  nullptr && modules->has_operation());
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot='" <<slot <<"']";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slot' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modules")
    {
        if(modules == nullptr)
        {
            modules = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules>();
        }
        return modules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(modules != nullptr)
    {
        children["modules"] = modules;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot")
    {
        slot = value;
    }
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Modules()
{
    yang_name = "modules"; yang_parent_name = "slot";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::~Modules()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::has_data() const
{
    for (std::size_t index=0; index<module.size(); index++)
    {
        if(module[index]->has_data())
            return true;
    }
    return false;
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::has_operation() const
{
    for (std::size_t index=0; index<module.size(); index++)
    {
        if(module[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modules";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modules' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module")
    {
        for(auto const & c : module)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module>();
        c->parent = this;
        module.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : module)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::set_value(const std::string & value_path, std::string value)
{
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Module()
    :
    module{YType::str, "module"}
    	,
    power(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power>())
	,sensor_types(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes>())
{
    power->parent = this;

    sensor_types->parent = this;

    yang_name = "module"; yang_parent_name = "modules";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::~Module()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::has_data() const
{
    return module.is_set
	|| (power !=  nullptr && power->has_data())
	|| (sensor_types !=  nullptr && sensor_types->has_data());
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::has_operation() const
{
    return is_set(operation)
	|| is_set(module.operation)
	|| (power !=  nullptr && power->has_operation())
	|| (sensor_types !=  nullptr && sensor_types->has_operation());
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module" <<"[module='" <<module <<"']";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Module' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power>();
        }
        return power;
    }

    if(child_yang_name == "sensor-types")
    {
        if(sensor_types == nullptr)
        {
            sensor_types = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes>();
        }
        return sensor_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(power != nullptr)
    {
        children["power"] = power;
    }

    if(sensor_types != nullptr)
    {
        children["sensor-types"] = sensor_types;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module")
    {
        module = value;
    }
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorTypes()
{
    yang_name = "sensor-types"; yang_parent_name = "module";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::~SensorTypes()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::has_data() const
{
    for (std::size_t index=0; index<sensor_type.size(); index++)
    {
        if(sensor_type[index]->has_data())
            return true;
    }
    return false;
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::has_operation() const
{
    for (std::size_t index=0; index<sensor_type.size(); index++)
    {
        if(sensor_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-types";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SensorTypes' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-type")
    {
        for(auto const & c : sensor_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType>();
        c->parent = this;
        sensor_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::set_value(const std::string & value_path, std::string value)
{
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorType()
    :
    type{YType::str, "type"}
    	,
    sensor_names(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames>())
{
    sensor_names->parent = this;

    yang_name = "sensor-type"; yang_parent_name = "sensor-types";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::~SensorType()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::has_data() const
{
    return type.is_set
	|| (sensor_names !=  nullptr && sensor_names->has_data());
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sensor_names !=  nullptr && sensor_names->has_operation());
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-type" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SensorType' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-names")
    {
        if(sensor_names == nullptr)
        {
            sensor_names = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames>();
        }
        return sensor_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sensor_names != nullptr)
    {
        children["sensor-names"] = sensor_names;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorNames()
{
    yang_name = "sensor-names"; yang_parent_name = "sensor-type";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::~SensorNames()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::has_data() const
{
    for (std::size_t index=0; index<sensor_name.size(); index++)
    {
        if(sensor_name[index]->has_data())
            return true;
    }
    return false;
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::has_operation() const
{
    for (std::size_t index=0; index<sensor_name.size(); index++)
    {
        if(sensor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-names";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SensorNames' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-name")
    {
        for(auto const & c : sensor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName>();
        c->parent = this;
        sensor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::set_value(const std::string & value_path, std::string value)
{
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::SensorName()
    :
    name{YType::str, "name"},
    value_brief{YType::int32, "value-brief"}
    	,
    thresholds(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds>())
	,value_detailed(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed>())
{
    thresholds->parent = this;

    value_detailed->parent = this;

    yang_name = "sensor-name"; yang_parent_name = "sensor-names";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::~SensorName()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::has_data() const
{
    return name.is_set
	|| value_brief.is_set
	|| (thresholds !=  nullptr && thresholds->has_data())
	|| (value_detailed !=  nullptr && value_detailed->has_data());
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(value_brief.operation)
	|| (thresholds !=  nullptr && thresholds->has_operation())
	|| (value_detailed !=  nullptr && value_detailed->has_operation());
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SensorName' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_brief.is_set || is_set(value_brief.operation)) leaf_name_data.push_back(value_brief.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        if(thresholds == nullptr)
        {
            thresholds = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds>();
        }
        return thresholds;
    }

    if(child_yang_name == "value-detailed")
    {
        if(value_detailed == nullptr)
        {
            value_detailed = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed>();
        }
        return value_detailed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresholds != nullptr)
    {
        children["thresholds"] = thresholds;
    }

    if(value_detailed != nullptr)
    {
        children["value-detailed"] = value_detailed;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "value-brief")
    {
        value_brief = value;
    }
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Thresholds()
{
    yang_name = "thresholds"; yang_parent_name = "sensor-name";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::~Thresholds()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::has_data() const
{
    for (std::size_t index=0; index<threshold.size(); index++)
    {
        if(threshold[index]->has_data())
            return true;
    }
    return false;
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::has_operation() const
{
    for (std::size_t index=0; index<threshold.size(); index++)
    {
        if(threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Thresholds' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        for(auto const & c : threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold>();
        c->parent = this;
        threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::set_value(const std::string & value_path, std::string value)
{
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::Threshold()
    :
    type{YType::str, "type"},
    trap{YType::boolean, "trap"},
    value_brief{YType::int32, "value-brief"}
    	,
    value_detailed(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed>())
{
    value_detailed->parent = this;

    yang_name = "threshold"; yang_parent_name = "thresholds";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::~Threshold()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::has_data() const
{
    return type.is_set
	|| trap.is_set
	|| value_brief.is_set
	|| (value_detailed !=  nullptr && value_detailed->has_data());
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(trap.operation)
	|| is_set(value_brief.operation)
	|| (value_detailed !=  nullptr && value_detailed->has_operation());
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());
    if (value_brief.is_set || is_set(value_brief.operation)) leaf_name_data.push_back(value_brief.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value-detailed")
    {
        if(value_detailed == nullptr)
        {
            value_detailed = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed>();
        }
        return value_detailed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(value_detailed != nullptr)
    {
        children["value-detailed"] = value_detailed;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
    if(value_path == "value-brief")
    {
        value_brief = value;
    }
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::ValueDetailed()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "value-detailed"; yang_parent_name = "threshold";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::~ValueDetailed()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value-detailed";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ValueDetailed' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::ValueDetailed()
    :
    age_time_stamp{YType::uint32, "age-time-stamp"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    device_description{YType::str, "device-description"},
    device_id{YType::uint32, "device-id"},
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    precision{YType::uint32, "precision"},
    scale{YType::uint32, "scale"},
    status{YType::uint32, "status"},
    units{YType::str, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::uint32, "value"}
{
    yang_name = "value-detailed"; yang_parent_name = "sensor-name";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::~ValueDetailed()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::has_data() const
{
    return age_time_stamp.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| device_description.is_set
	|| device_id.is_set
	|| field_validity_bitmap.is_set
	|| precision.is_set
	|| scale.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set;
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::has_operation() const
{
    return is_set(operation)
	|| is_set(age_time_stamp.operation)
	|| is_set(alarm_type.operation)
	|| is_set(data_type.operation)
	|| is_set(device_description.operation)
	|| is_set(device_id.operation)
	|| is_set(field_validity_bitmap.operation)
	|| is_set(precision.operation)
	|| is_set(scale.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation);
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value-detailed";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ValueDetailed' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time_stamp.is_set || is_set(age_time_stamp.operation)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.operation)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.operation)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.operation)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (precision.is_set || is_set(precision.operation)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (scale.is_set || is_set(scale.operation)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "device-description")
    {
        device_description = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
    }
    if(value_path == "precision")
    {
        precision = value;
    }
    if(value_path == "scale")
    {
        scale = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::Power()
    :
    power_bag(std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag>())
{
    power_bag->parent = this;

    yang_name = "power"; yang_parent_name = "module";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::~Power()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::has_data() const
{
    return (power_bag !=  nullptr && power_bag->has_data());
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::has_operation() const
{
    return is_set(operation)
	|| (power_bag !=  nullptr && power_bag->has_operation());
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Power' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power-bag")
    {
        if(power_bag == nullptr)
        {
            power_bag = std::make_shared<EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag>();
        }
        return power_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(power_bag != nullptr)
    {
        children["power-bag"] = power_bag;
    }

    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::set_value(const std::string & value_path, std::string value)
{
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::PowerBag()
    :
    power_accuracy{YType::uint32, "power-accuracy"},
    power_admin_state{YType::uint32, "power-admin-state"},
    power_current_type{YType::uint32, "power-current-type"},
    power_max_value{YType::int32, "power-max-value"},
    power_measure_caliber{YType::uint32, "power-measure-caliber"},
    power_oper_state{YType::uint32, "power-oper-state"},
    power_origin{YType::uint32, "power-origin"},
    power_state_enter_reason{YType::str, "power-state-enter-reason"},
    power_unit_multiplier{YType::uint32, "power-unit-multiplier"},
    power_value{YType::int32, "power-value"}
{
    yang_name = "power-bag"; yang_parent_name = "power";
}

EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::~PowerBag()
{
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::has_data() const
{
    return power_accuracy.is_set
	|| power_admin_state.is_set
	|| power_current_type.is_set
	|| power_max_value.is_set
	|| power_measure_caliber.is_set
	|| power_oper_state.is_set
	|| power_origin.is_set
	|| power_state_enter_reason.is_set
	|| power_unit_multiplier.is_set
	|| power_value.is_set;
}

bool EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::has_operation() const
{
    return is_set(operation)
	|| is_set(power_accuracy.operation)
	|| is_set(power_admin_state.operation)
	|| is_set(power_current_type.operation)
	|| is_set(power_max_value.operation)
	|| is_set(power_measure_caliber.operation)
	|| is_set(power_oper_state.operation)
	|| is_set(power_origin.operation)
	|| is_set(power_state_enter_reason.operation)
	|| is_set(power_unit_multiplier.operation)
	|| is_set(power_value.operation);
}

std::string EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-bag";

    return path_buffer.str();

}

const EntityPath EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PowerBag' in Cisco_IOS_XR_asr9k_sc_envmon_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_accuracy.is_set || is_set(power_accuracy.operation)) leaf_name_data.push_back(power_accuracy.get_name_leafdata());
    if (power_admin_state.is_set || is_set(power_admin_state.operation)) leaf_name_data.push_back(power_admin_state.get_name_leafdata());
    if (power_current_type.is_set || is_set(power_current_type.operation)) leaf_name_data.push_back(power_current_type.get_name_leafdata());
    if (power_max_value.is_set || is_set(power_max_value.operation)) leaf_name_data.push_back(power_max_value.get_name_leafdata());
    if (power_measure_caliber.is_set || is_set(power_measure_caliber.operation)) leaf_name_data.push_back(power_measure_caliber.get_name_leafdata());
    if (power_oper_state.is_set || is_set(power_oper_state.operation)) leaf_name_data.push_back(power_oper_state.get_name_leafdata());
    if (power_origin.is_set || is_set(power_origin.operation)) leaf_name_data.push_back(power_origin.get_name_leafdata());
    if (power_state_enter_reason.is_set || is_set(power_state_enter_reason.operation)) leaf_name_data.push_back(power_state_enter_reason.get_name_leafdata());
    if (power_unit_multiplier.is_set || is_set(power_unit_multiplier.operation)) leaf_name_data.push_back(power_unit_multiplier.get_name_leafdata());
    if (power_value.is_set || is_set(power_value.operation)) leaf_name_data.push_back(power_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-accuracy")
    {
        power_accuracy = value;
    }
    if(value_path == "power-admin-state")
    {
        power_admin_state = value;
    }
    if(value_path == "power-current-type")
    {
        power_current_type = value;
    }
    if(value_path == "power-max-value")
    {
        power_max_value = value;
    }
    if(value_path == "power-measure-caliber")
    {
        power_measure_caliber = value;
    }
    if(value_path == "power-oper-state")
    {
        power_oper_state = value;
    }
    if(value_path == "power-origin")
    {
        power_origin = value;
    }
    if(value_path == "power-state-enter-reason")
    {
        power_state_enter_reason = value;
    }
    if(value_path == "power-unit-multiplier")
    {
        power_unit_multiplier = value;
    }
    if(value_path == "power-value")
    {
        power_value = value;
    }
}


}
}

