
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_device_hardware_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_device_hardware_oper {

DeviceHardwareData::DeviceHardwareData()
    :
    device_hardware(nullptr) // presence node
{

    yang_name = "device-hardware-data"; yang_parent_name = "Cisco-IOS-XE-device-hardware-oper"; is_top_level_class = true; has_list_ancestor = false;
}

DeviceHardwareData::~DeviceHardwareData()
{
}

bool DeviceHardwareData::has_data() const
{
    return (device_hardware !=  nullptr && device_hardware->has_data());
}

bool DeviceHardwareData::has_operation() const
{
    return is_set(yfilter)
	|| (device_hardware !=  nullptr && device_hardware->has_operation());
}

std::string DeviceHardwareData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-hardware-oper:device-hardware-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeviceHardwareData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DeviceHardwareData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-hardware")
    {
        if(device_hardware == nullptr)
        {
            device_hardware = std::make_shared<DeviceHardwareData::DeviceHardware>();
        }
        return device_hardware;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeviceHardwareData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(device_hardware != nullptr)
    {
        children["device-hardware"] = device_hardware;
    }

    return children;
}

void DeviceHardwareData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeviceHardwareData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DeviceHardwareData::clone_ptr() const
{
    return std::make_shared<DeviceHardwareData>();
}

std::string DeviceHardwareData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DeviceHardwareData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DeviceHardwareData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeviceHardwareData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DeviceHardwareData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-hardware")
        return true;
    return false;
}

DeviceHardwareData::DeviceHardware::DeviceHardware()
    :
    device_system_data(nullptr) // presence node
{

    yang_name = "device-hardware"; yang_parent_name = "device-hardware-data"; is_top_level_class = false; has_list_ancestor = false;
}

DeviceHardwareData::DeviceHardware::~DeviceHardware()
{
}

bool DeviceHardwareData::DeviceHardware::has_data() const
{
    for (std::size_t index=0; index<device_inventory.size(); index++)
    {
        if(device_inventory[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<device_alarm.size(); index++)
    {
        if(device_alarm[index]->has_data())
            return true;
    }
    return (device_system_data !=  nullptr && device_system_data->has_data());
}

bool DeviceHardwareData::DeviceHardware::has_operation() const
{
    for (std::size_t index=0; index<device_inventory.size(); index++)
    {
        if(device_inventory[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<device_alarm.size(); index++)
    {
        if(device_alarm[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (device_system_data !=  nullptr && device_system_data->has_operation());
}

std::string DeviceHardwareData::DeviceHardware::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-hardware-oper:device-hardware-data/" << get_segment_path();
    return path_buffer.str();
}

std::string DeviceHardwareData::DeviceHardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-hardware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeviceHardwareData::DeviceHardware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DeviceHardwareData::DeviceHardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-inventory")
    {
        auto c = std::make_shared<DeviceHardwareData::DeviceHardware::DeviceInventory>();
        c->parent = this;
        device_inventory.push_back(c);
        return c;
    }

    if(child_yang_name == "device-alarm")
    {
        auto c = std::make_shared<DeviceHardwareData::DeviceHardware::DeviceAlarm>();
        c->parent = this;
        device_alarm.push_back(c);
        return c;
    }

    if(child_yang_name == "device-system-data")
    {
        if(device_system_data == nullptr)
        {
            device_system_data = std::make_shared<DeviceHardwareData::DeviceHardware::DeviceSystemData>();
        }
        return device_system_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeviceHardwareData::DeviceHardware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : device_inventory)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : device_alarm)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(device_system_data != nullptr)
    {
        children["device-system-data"] = device_system_data;
    }

    return children;
}

void DeviceHardwareData::DeviceHardware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeviceHardwareData::DeviceHardware::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DeviceHardwareData::DeviceHardware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-inventory" || name == "device-alarm" || name == "device-system-data")
        return true;
    return false;
}

DeviceHardwareData::DeviceHardware::DeviceInventory::DeviceInventory()
    :
    hw_type{YType::enumeration, "hw-type"},
    hw_dev_index{YType::uint32, "hw-dev-index"},
    version{YType::str, "version"},
    part_number{YType::str, "part-number"},
    serial_number{YType::str, "serial-number"},
    hw_description{YType::str, "hw-description"}
{

    yang_name = "device-inventory"; yang_parent_name = "device-hardware"; is_top_level_class = false; has_list_ancestor = false;
}

DeviceHardwareData::DeviceHardware::DeviceInventory::~DeviceInventory()
{
}

bool DeviceHardwareData::DeviceHardware::DeviceInventory::has_data() const
{
    return hw_type.is_set
	|| hw_dev_index.is_set
	|| version.is_set
	|| part_number.is_set
	|| serial_number.is_set
	|| hw_description.is_set;
}

bool DeviceHardwareData::DeviceHardware::DeviceInventory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_type.yfilter)
	|| ydk::is_set(hw_dev_index.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(hw_description.yfilter);
}

std::string DeviceHardwareData::DeviceHardware::DeviceInventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-hardware-oper:device-hardware-data/device-hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string DeviceHardwareData::DeviceHardware::DeviceInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-inventory" <<"[hw-type='" <<hw_type <<"']" <<"[hw-dev-index='" <<hw_dev_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeviceHardwareData::DeviceHardware::DeviceInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_type.is_set || is_set(hw_type.yfilter)) leaf_name_data.push_back(hw_type.get_name_leafdata());
    if (hw_dev_index.is_set || is_set(hw_dev_index.yfilter)) leaf_name_data.push_back(hw_dev_index.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (hw_description.is_set || is_set(hw_description.yfilter)) leaf_name_data.push_back(hw_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DeviceHardwareData::DeviceHardware::DeviceInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeviceHardwareData::DeviceHardware::DeviceInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DeviceHardwareData::DeviceHardware::DeviceInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-type")
    {
        hw_type = value;
        hw_type.value_namespace = name_space;
        hw_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-dev-index")
    {
        hw_dev_index = value;
        hw_dev_index.value_namespace = name_space;
        hw_dev_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-description")
    {
        hw_description = value;
        hw_description.value_namespace = name_space;
        hw_description.value_namespace_prefix = name_space_prefix;
    }
}

void DeviceHardwareData::DeviceHardware::DeviceInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-type")
    {
        hw_type.yfilter = yfilter;
    }
    if(value_path == "hw-dev-index")
    {
        hw_dev_index.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "hw-description")
    {
        hw_description.yfilter = yfilter;
    }
}

bool DeviceHardwareData::DeviceHardware::DeviceInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-type" || name == "hw-dev-index" || name == "version" || name == "part-number" || name == "serial-number" || name == "hw-description")
        return true;
    return false;
}

DeviceHardwareData::DeviceHardware::DeviceAlarm::DeviceAlarm()
    :
    alarm_id{YType::uint32, "alarm-id"},
    alarm_instance{YType::uint32, "alarm-instance"},
    alarm_name{YType::str, "alarm-name"},
    alarm_category{YType::enumeration, "alarm-category"},
    alarm_time{YType::str, "alarm-time"},
    alarm_description{YType::str, "alarm-description"}
{

    yang_name = "device-alarm"; yang_parent_name = "device-hardware"; is_top_level_class = false; has_list_ancestor = false;
}

DeviceHardwareData::DeviceHardware::DeviceAlarm::~DeviceAlarm()
{
}

bool DeviceHardwareData::DeviceHardware::DeviceAlarm::has_data() const
{
    return alarm_id.is_set
	|| alarm_instance.is_set
	|| alarm_name.is_set
	|| alarm_category.is_set
	|| alarm_time.is_set
	|| alarm_description.is_set;
}

bool DeviceHardwareData::DeviceHardware::DeviceAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_id.yfilter)
	|| ydk::is_set(alarm_instance.yfilter)
	|| ydk::is_set(alarm_name.yfilter)
	|| ydk::is_set(alarm_category.yfilter)
	|| ydk::is_set(alarm_time.yfilter)
	|| ydk::is_set(alarm_description.yfilter);
}

std::string DeviceHardwareData::DeviceHardware::DeviceAlarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-hardware-oper:device-hardware-data/device-hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string DeviceHardwareData::DeviceHardware::DeviceAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-alarm" <<"[alarm-id='" <<alarm_id <<"']" <<"[alarm-instance='" <<alarm_instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeviceHardwareData::DeviceHardware::DeviceAlarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_id.is_set || is_set(alarm_id.yfilter)) leaf_name_data.push_back(alarm_id.get_name_leafdata());
    if (alarm_instance.is_set || is_set(alarm_instance.yfilter)) leaf_name_data.push_back(alarm_instance.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.yfilter)) leaf_name_data.push_back(alarm_name.get_name_leafdata());
    if (alarm_category.is_set || is_set(alarm_category.yfilter)) leaf_name_data.push_back(alarm_category.get_name_leafdata());
    if (alarm_time.is_set || is_set(alarm_time.yfilter)) leaf_name_data.push_back(alarm_time.get_name_leafdata());
    if (alarm_description.is_set || is_set(alarm_description.yfilter)) leaf_name_data.push_back(alarm_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DeviceHardwareData::DeviceHardware::DeviceAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeviceHardwareData::DeviceHardware::DeviceAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DeviceHardwareData::DeviceHardware::DeviceAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-id")
    {
        alarm_id = value;
        alarm_id.value_namespace = name_space;
        alarm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-instance")
    {
        alarm_instance = value;
        alarm_instance.value_namespace = name_space;
        alarm_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
        alarm_name.value_namespace = name_space;
        alarm_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-category")
    {
        alarm_category = value;
        alarm_category.value_namespace = name_space;
        alarm_category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-time")
    {
        alarm_time = value;
        alarm_time.value_namespace = name_space;
        alarm_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-description")
    {
        alarm_description = value;
        alarm_description.value_namespace = name_space;
        alarm_description.value_namespace_prefix = name_space_prefix;
    }
}

void DeviceHardwareData::DeviceHardware::DeviceAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-id")
    {
        alarm_id.yfilter = yfilter;
    }
    if(value_path == "alarm-instance")
    {
        alarm_instance.yfilter = yfilter;
    }
    if(value_path == "alarm-name")
    {
        alarm_name.yfilter = yfilter;
    }
    if(value_path == "alarm-category")
    {
        alarm_category.yfilter = yfilter;
    }
    if(value_path == "alarm-time")
    {
        alarm_time.yfilter = yfilter;
    }
    if(value_path == "alarm-description")
    {
        alarm_description.yfilter = yfilter;
    }
}

bool DeviceHardwareData::DeviceHardware::DeviceAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-id" || name == "alarm-instance" || name == "alarm-name" || name == "alarm-category" || name == "alarm-time" || name == "alarm-description")
        return true;
    return false;
}

DeviceHardwareData::DeviceHardware::DeviceSystemData::DeviceSystemData()
    :
    current_time{YType::str, "current-time"},
    boot_time{YType::str, "boot-time"},
    software_version{YType::str, "software-version"},
    rommon_version{YType::str, "rommon-version"},
    last_reboot_reason{YType::str, "last-reboot-reason"}
{

    yang_name = "device-system-data"; yang_parent_name = "device-hardware"; is_top_level_class = false; has_list_ancestor = false;
}

DeviceHardwareData::DeviceHardware::DeviceSystemData::~DeviceSystemData()
{
}

bool DeviceHardwareData::DeviceHardware::DeviceSystemData::has_data() const
{
    return current_time.is_set
	|| boot_time.is_set
	|| software_version.is_set
	|| rommon_version.is_set
	|| last_reboot_reason.is_set;
}

bool DeviceHardwareData::DeviceHardware::DeviceSystemData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_time.yfilter)
	|| ydk::is_set(boot_time.yfilter)
	|| ydk::is_set(software_version.yfilter)
	|| ydk::is_set(rommon_version.yfilter)
	|| ydk::is_set(last_reboot_reason.yfilter);
}

std::string DeviceHardwareData::DeviceHardware::DeviceSystemData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-hardware-oper:device-hardware-data/device-hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string DeviceHardwareData::DeviceHardware::DeviceSystemData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-system-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeviceHardwareData::DeviceHardware::DeviceSystemData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_time.is_set || is_set(current_time.yfilter)) leaf_name_data.push_back(current_time.get_name_leafdata());
    if (boot_time.is_set || is_set(boot_time.yfilter)) leaf_name_data.push_back(boot_time.get_name_leafdata());
    if (software_version.is_set || is_set(software_version.yfilter)) leaf_name_data.push_back(software_version.get_name_leafdata());
    if (rommon_version.is_set || is_set(rommon_version.yfilter)) leaf_name_data.push_back(rommon_version.get_name_leafdata());
    if (last_reboot_reason.is_set || is_set(last_reboot_reason.yfilter)) leaf_name_data.push_back(last_reboot_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DeviceHardwareData::DeviceHardware::DeviceSystemData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeviceHardwareData::DeviceHardware::DeviceSystemData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DeviceHardwareData::DeviceHardware::DeviceSystemData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-time")
    {
        current_time = value;
        current_time.value_namespace = name_space;
        current_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-time")
    {
        boot_time = value;
        boot_time.value_namespace = name_space;
        boot_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-version")
    {
        software_version = value;
        software_version.value_namespace = name_space;
        software_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rommon-version")
    {
        rommon_version = value;
        rommon_version.value_namespace = name_space;
        rommon_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-reboot-reason")
    {
        last_reboot_reason = value;
        last_reboot_reason.value_namespace = name_space;
        last_reboot_reason.value_namespace_prefix = name_space_prefix;
    }
}

void DeviceHardwareData::DeviceHardware::DeviceSystemData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-time")
    {
        current_time.yfilter = yfilter;
    }
    if(value_path == "boot-time")
    {
        boot_time.yfilter = yfilter;
    }
    if(value_path == "software-version")
    {
        software_version.yfilter = yfilter;
    }
    if(value_path == "rommon-version")
    {
        rommon_version.yfilter = yfilter;
    }
    if(value_path == "last-reboot-reason")
    {
        last_reboot_reason.yfilter = yfilter;
    }
}

bool DeviceHardwareData::DeviceHardware::DeviceSystemData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-time" || name == "boot-time" || name == "software-version" || name == "rommon-version" || name == "last-reboot-reason")
        return true;
    return false;
}

const Enum::YLeaf HwType::hw_type_unknown {0, "hw-type-unknown"};
const Enum::YLeaf HwType::hw_type_chassis {1, "hw-type-chassis"};
const Enum::YLeaf HwType::hw_type_cpu {2, "hw-type-cpu"};
const Enum::YLeaf HwType::hw_type_dram {3, "hw-type-dram"};
const Enum::YLeaf HwType::hw_type_flash {4, "hw-type-flash"};
const Enum::YLeaf HwType::hw_type_emmc {5, "hw-type-emmc"};
const Enum::YLeaf HwType::hw_type_sdcard {6, "hw-type-sdcard"};
const Enum::YLeaf HwType::hw_type_usb {7, "hw-type-usb"};
const Enum::YLeaf HwType::hw_type_pim {8, "hw-type-pim"};
const Enum::YLeaf HwType::hw_type_transceiver {9, "hw-type-transceiver"};
const Enum::YLeaf HwType::hw_type_fantray {10, "hw-type-fantray"};
const Enum::YLeaf HwType::hw_type_pem {11, "hw-type-pem"};

const Enum::YLeaf AlarmSeverity::alarm_severity_critical {0, "alarm-severity-critical"};
const Enum::YLeaf AlarmSeverity::alarm_severity_major {1, "alarm-severity-major"};
const Enum::YLeaf AlarmSeverity::alarm_severity_minor {2, "alarm-severity-minor"};


}
}

