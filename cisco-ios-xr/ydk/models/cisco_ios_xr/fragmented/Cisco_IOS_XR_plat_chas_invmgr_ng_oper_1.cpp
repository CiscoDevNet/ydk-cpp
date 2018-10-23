
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_plat_chas_invmgr_ng_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_plat_chas_invmgr_ng_oper {

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
        ,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
    , module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return module_administrative_state.is_set
	|| module_power_administrative_state.is_set
	|| module_operational_state.is_set
	|| module_monitor_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_operational_state_change != nullptr)
    {
        _children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        _children["module-up-time"] = module_up_time;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-power-administrative-state" || name == "module-operational-state" || name == "module-monitor-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "module-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo>())
    , fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "port-slot"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        _children["fru-info"] = fru_info;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::BasicInfo()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    model_name{YType::str, "model-name"},
    hardware_revision{YType::str, "hardware-revision"},
    serial_number{YType::str, "serial-number"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"}
{

    yang_name = "basic-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| model_name.is_set
	|| hardware_revision.is_set
	|| serial_number.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| vendor_type.is_set
	|| is_field_replaceable_unit.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "model-name" || name == "hardware-revision" || name == "serial-number" || name == "firmware-revision" || name == "software-revision" || name == "vendor-type" || name == "is-field-replaceable-unit")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
        ,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>())
    , module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return module_administrative_state.is_set
	|| module_power_administrative_state.is_set
	|| module_operational_state.is_set
	|| module_monitor_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_operational_state_change != nullptr)
    {
        _children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        _children["module-up-time"] = module_up_time;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-power-administrative-state" || name == "module-operational-state" || name == "module-monitor-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "module-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponents()
    :
    hw_component(this, {"name"})
{

    yang_name = "hw-components"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::~HwComponents()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hw_component.len(); index++)
    {
        if(hw_component[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_operation() const
{
    for (std::size_t index=0; index<hw_component.len(); index++)
    {
        if(hw_component[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-components";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-component")
    {
        auto ent_ = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent>();
        ent_->parent = this;
        hw_component.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hw_component.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-component")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::HwComponent()
    :
    name{YType::str, "name"}
        ,
    sensors(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>())
    , attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes>())
{
    sensors->parent = this;
    attributes->parent = this;

    yang_name = "hw-component"; yang_parent_name = "hw-components"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::~HwComponent()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (sensors !=  nullptr && sensors->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sensors !=  nullptr && sensors->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-component";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>();
        }
        return sensors;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sensors != nullptr)
    {
        _children["sensors"] = sensors;
    }

    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensors" || name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensors()
    :
    sensor(this, {"name"})
{

    yang_name = "sensors"; yang_parent_name = "hw-component"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor")
    {
        auto ent_ = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor>();
        ent_->parent = this;
        sensor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
        ,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>())
    , fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "sensor"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        _children["fru-info"] = fru_info;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    model_name{YType::str, "model-name"},
    hardware_revision{YType::str, "hardware-revision"},
    serial_number{YType::str, "serial-number"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"}
{

    yang_name = "basic-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| model_name.is_set
	|| hardware_revision.is_set
	|| serial_number.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| vendor_type.is_set
	|| is_field_replaceable_unit.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "model-name" || name == "hardware-revision" || name == "serial-number" || name == "firmware-revision" || name == "software-revision" || name == "vendor-type" || name == "is-field-replaceable-unit")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
        ,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
    , module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return module_administrative_state.is_set
	|| module_power_administrative_state.is_set
	|| module_operational_state.is_set
	|| module_monitor_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_operational_state_change != nullptr)
    {
        _children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        _children["module-up-time"] = module_up_time;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-power-administrative-state" || name == "module-operational-state" || name == "module-monitor-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "module-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo>())
    , fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "hw-component"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        _children["fru-info"] = fru_info;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::BasicInfo()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    model_name{YType::str, "model-name"},
    hardware_revision{YType::str, "hardware-revision"},
    serial_number{YType::str, "serial-number"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"}
{

    yang_name = "basic-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| model_name.is_set
	|| hardware_revision.is_set
	|| serial_number.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| vendor_type.is_set
	|| is_field_replaceable_unit.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "model-name" || name == "hardware-revision" || name == "serial-number" || name == "firmware-revision" || name == "software-revision" || name == "vendor-type" || name == "is-field-replaceable-unit")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
        ,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>())
    , module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return module_administrative_state.is_set
	|| module_power_administrative_state.is_set
	|| module_operational_state.is_set
	|| module_monitor_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_operational_state_change != nullptr)
    {
        _children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        _children["module-up-time"] = module_up_time;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-power-administrative-state" || name == "module-operational-state" || name == "module-monitor-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "module-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensors()
    :
    sensor(this, {"name"})
{

    yang_name = "sensors"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::~Sensors()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor")
    {
        auto ent_ = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor>();
        ent_->parent = this;
        sensor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Sensor()
    :
    name{YType::str, "name"}
        ,
    attributes(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes>())
{
    attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::~Sensor()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo>())
    , fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "sensor"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        _children["fru-info"] = fru_info;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::BasicInfo()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    model_name{YType::str, "model-name"},
    hardware_revision{YType::str, "hardware-revision"},
    serial_number{YType::str, "serial-number"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"}
{

    yang_name = "basic-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| model_name.is_set
	|| hardware_revision.is_set
	|| serial_number.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| vendor_type.is_set
	|| is_field_replaceable_unit.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "model-name" || name == "hardware-revision" || name == "serial-number" || name == "firmware-revision" || name == "software-revision" || name == "vendor-type" || name == "is-field-replaceable-unit")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
        ,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>())
    , module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return module_administrative_state.is_set
	|| module_power_administrative_state.is_set
	|| module_operational_state.is_set
	|| module_monitor_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "module-up-time")
    {
        if(module_up_time == nullptr)
        {
            module_up_time = std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime>();
        }
        return module_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_operational_state_change != nullptr)
    {
        _children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        _children["module-up-time"] = module_up_time;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-power-administrative-state" || name == "module-operational-state" || name == "module-monitor-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "module-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo>())
    , fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        _children["fru-info"] = fru_info;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::BasicInfo()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    model_name{YType::str, "model-name"},
    hardware_revision{YType::str, "hardware-revision"},
    serial_number{YType::str, "serial-number"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"}
{

    yang_name = "basic-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| model_name.is_set
	|| hardware_revision.is_set
	|| serial_number.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| vendor_type.is_set
	|| is_field_replaceable_unit.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "model-name" || name == "hardware-revision" || name == "serial-number" || name == "firmware-revision" || name == "software-revision" || name == "vendor-type" || name == "is-field-replaceable-unit")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
        ,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange>())
    , module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return module_administrative_state.is_set
	|| module_power_administrative_state.is_set
	|| module_operational_state.is_set
	|| module_monitor_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_operational_state_change != nullptr)
    {
        _children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        _children["module-up-time"] = module_up_time;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-power-administrative-state" || name == "module-operational-state" || name == "module-monitor-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "module-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo>())
    , fru_info(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        _children["fru-info"] = fru_info;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::BasicInfo()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    model_name{YType::str, "model-name"},
    hardware_revision{YType::str, "hardware-revision"},
    serial_number{YType::str, "serial-number"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"}
{

    yang_name = "basic-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| model_name.is_set
	|| hardware_revision.is_set
	|| serial_number.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| vendor_type.is_set
	|| is_field_replaceable_unit.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "model-name" || name == "hardware-revision" || name == "serial-number" || name == "firmware-revision" || name == "software-revision" || name == "vendor-type" || name == "is-field-replaceable-unit")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
        ,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange>())
    , module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return module_administrative_state.is_set
	|| module_power_administrative_state.is_set
	|| module_operational_state.is_set
	|| module_monitor_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_operational_state_change != nullptr)
    {
        _children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        _children["module-up-time"] = module_up_time;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-power-administrative-state" || name == "module-operational-state" || name == "module-monitor-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "module-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Attributes::Attributes()
    :
    basic_info(std::make_shared<PlatformInventory::Racks::Rack::Attributes::BasicInfo>())
    , fru_info(std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Attributes::~Attributes()
{
}

bool PlatformInventory::Racks::Rack::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool PlatformInventory::Racks::Rack::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string PlatformInventory::Racks::Rack::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        _children["fru-info"] = fru_info;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformInventory::Racks::Rack::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformInventory::Racks::Rack::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Attributes::BasicInfo::BasicInfo()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    model_name{YType::str, "model-name"},
    hardware_revision{YType::str, "hardware-revision"},
    serial_number{YType::str, "serial-number"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    vendor_type{YType::str, "vendor-type"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"}
{

    yang_name = "basic-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Attributes::BasicInfo::~BasicInfo()
{
}

bool PlatformInventory::Racks::Rack::Attributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| model_name.is_set
	|| hardware_revision.is_set
	|| serial_number.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| vendor_type.is_set
	|| is_field_replaceable_unit.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter);
}

std::string PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Attributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Attributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Attributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Attributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "model-name" || name == "hardware-revision" || name == "serial-number" || name == "firmware-revision" || name == "software-revision" || name == "vendor-type" || name == "is-field-replaceable-unit")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::FruInfo()
    :
    module_administrative_state{YType::enumeration, "module-administrative-state"},
    module_power_administrative_state{YType::enumeration, "module-power-administrative-state"},
    module_operational_state{YType::enumeration, "module-operational-state"},
    module_monitor_state{YType::enumeration, "module-monitor-state"},
    module_reset_reason{YType::enumeration, "module-reset-reason"}
        ,
    last_operational_state_change(std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange>())
    , module_up_time(std::make_shared<PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime>())
{
    last_operational_state_change->parent = this;
    module_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::~FruInfo()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return module_administrative_state.is_set
	|| module_power_administrative_state.is_set
	|| module_operational_state.is_set
	|| module_monitor_state.is_set
	|| module_reset_reason.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (module_up_time !=  nullptr && module_up_time->has_data());
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_administrative_state.yfilter)
	|| ydk::is_set(module_power_administrative_state.yfilter)
	|| ydk::is_set(module_operational_state.yfilter)
	|| ydk::is_set(module_monitor_state.yfilter)
	|| ydk::is_set(module_reset_reason.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (module_up_time !=  nullptr && module_up_time->has_operation());
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_administrative_state.is_set || is_set(module_administrative_state.yfilter)) leaf_name_data.push_back(module_administrative_state.get_name_leafdata());
    if (module_power_administrative_state.is_set || is_set(module_power_administrative_state.yfilter)) leaf_name_data.push_back(module_power_administrative_state.get_name_leafdata());
    if (module_operational_state.is_set || is_set(module_operational_state.yfilter)) leaf_name_data.push_back(module_operational_state.get_name_leafdata());
    if (module_monitor_state.is_set || is_set(module_monitor_state.yfilter)) leaf_name_data.push_back(module_monitor_state.get_name_leafdata());
    if (module_reset_reason.is_set || is_set(module_reset_reason.yfilter)) leaf_name_data.push_back(module_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_operational_state_change != nullptr)
    {
        _children["last-operational-state-change"] = last_operational_state_change;
    }

    if(module_up_time != nullptr)
    {
        _children["module-up-time"] = module_up_time;
    }

    return _children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state = value;
        module_administrative_state.value_namespace = name_space;
        module_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state = value;
        module_power_administrative_state.value_namespace = name_space;
        module_power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state = value;
        module_operational_state.value_namespace = name_space;
        module_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state = value;
        module_monitor_state.value_namespace = name_space;
        module_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason = value;
        module_reset_reason.value_namespace = name_space;
        module_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-administrative-state")
    {
        module_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-power-administrative-state")
    {
        module_power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "module-operational-state")
    {
        module_operational_state.yfilter = yfilter;
    }
    if(value_path == "module-monitor-state")
    {
        module_monitor_state.yfilter = yfilter;
    }
    if(value_path == "module-reset-reason")
    {
        module_reset_reason.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "module-up-time" || name == "module-administrative-state" || name == "module-power-administrative-state" || name == "module-operational-state" || name == "module-monitor-state" || name == "module-reset-reason")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::ModuleUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "module-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::~ModuleUpTime()
{
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}


}
}

