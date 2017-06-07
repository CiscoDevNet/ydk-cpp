
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_plat_chas_invmgr_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_plat_chas_invmgr_oper {

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "card";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    firmware_revision{YType::str, "firmware-revision"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "slot";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    firmware_revision{YType::str, "firmware-revision"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

PlatformInventory::Racks::Rack::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Attributes::BasicInfo>())
	,fru_info(std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "rack";
}

PlatformInventory::Racks::Rack::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Attributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Attributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Attributes::set_value(const std::string & value_path, std::string value)
{
}

PlatformInventory::Racks::Rack::Attributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    firmware_revision{YType::str, "firmware-revision"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"}
{
    yang_name = "basic-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Attributes::BasicInfo::has_data() const
{
    return description.is_set
	|| firmware_revision.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| model_name.is_set
	|| name.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| vendor_type.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(vendor_type.operation);
}

std::string PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Attributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
    	,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange>())
	,module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;

    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::has_data() const
{
    return module_administrative_state.is_set
	|| module_monitor_state.is_set
	|| module_operational_state.is_set
	|| module_power_administrative_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(module_administrative_state.operation)
	|| is_set(module_monitor_state.operation)
	|| is_set(module_operational_state.operation)
	|| is_set(module_power_administrative_state.operation)
	|| is_set(module_reset_reason.operation)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.operation)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.operation)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.operation)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.operation)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.operation)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        children["module-up-time"] = module_up_time;
    }

    return children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
    }
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "module-up-time"; yang_parent_name = "fru-info";
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";

    return path_buffer.str();

}

const EntityPath PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModuleUpTime' in Cisco_IOS_XR_plat_chas_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}


}
}

