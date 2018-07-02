#ifndef _CISCO_IOS_XE_DEVICE_HARDWARE_OPER_
#define _CISCO_IOS_XE_DEVICE_HARDWARE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_device_hardware_oper {

class DeviceHardwareData : public ydk::Entity
{
    public:
        DeviceHardwareData();
        ~DeviceHardwareData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class DeviceHardware; //type: DeviceHardwareData::DeviceHardware

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_device_hardware_oper::DeviceHardwareData::DeviceHardware> device_hardware; // presence node
        
}; // DeviceHardwareData


class DeviceHardwareData::DeviceHardware : public ydk::Entity
{
    public:
        DeviceHardware();
        ~DeviceHardware();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DeviceInventory; //type: DeviceHardwareData::DeviceHardware::DeviceInventory
        class DeviceAlarm; //type: DeviceHardwareData::DeviceHardware::DeviceAlarm
        class DeviceSystemData; //type: DeviceHardwareData::DeviceHardware::DeviceSystemData

        ydk::YList device_inventory;
        ydk::YList device_alarm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_device_hardware_oper::DeviceHardwareData::DeviceHardware::DeviceSystemData> device_system_data; // presence node
        
}; // DeviceHardwareData::DeviceHardware


class DeviceHardwareData::DeviceHardware::DeviceInventory : public ydk::Entity
{
    public:
        DeviceInventory();
        ~DeviceInventory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hw_type; //type: HwType
        ydk::YLeaf hw_dev_index; //type: uint32
        ydk::YLeaf version; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf hw_description; //type: string

}; // DeviceHardwareData::DeviceHardware::DeviceInventory


class DeviceHardwareData::DeviceHardware::DeviceAlarm : public ydk::Entity
{
    public:
        DeviceAlarm();
        ~DeviceAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alarm_id; //type: uint32
        ydk::YLeaf alarm_instance; //type: uint32
        ydk::YLeaf alarm_name; //type: string
        ydk::YLeaf alarm_category; //type: AlarmSeverity
        ydk::YLeaf alarm_time; //type: string
        ydk::YLeaf alarm_description; //type: string

}; // DeviceHardwareData::DeviceHardware::DeviceAlarm


class DeviceHardwareData::DeviceHardware::DeviceSystemData : public ydk::Entity
{
    public:
        DeviceSystemData();
        ~DeviceSystemData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf current_time; //type: string
        ydk::YLeaf boot_time; //type: string
        ydk::YLeaf software_version; //type: string
        ydk::YLeaf rommon_version; //type: string
        ydk::YLeaf last_reboot_reason; //type: string

}; // DeviceHardwareData::DeviceHardware::DeviceSystemData

class AlarmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alarm_severity_critical;
        static const ydk::Enum::YLeaf alarm_severity_major;
        static const ydk::Enum::YLeaf alarm_severity_minor;

};

class HwType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hw_type_unknown;
        static const ydk::Enum::YLeaf hw_type_chassis;
        static const ydk::Enum::YLeaf hw_type_cpu;
        static const ydk::Enum::YLeaf hw_type_dram;
        static const ydk::Enum::YLeaf hw_type_flash;
        static const ydk::Enum::YLeaf hw_type_emmc;
        static const ydk::Enum::YLeaf hw_type_sdcard;
        static const ydk::Enum::YLeaf hw_type_usb;
        static const ydk::Enum::YLeaf hw_type_pim;
        static const ydk::Enum::YLeaf hw_type_transceiver;
        static const ydk::Enum::YLeaf hw_type_fantray;
        static const ydk::Enum::YLeaf hw_type_pem;

};


}
}

#endif /* _CISCO_IOS_XE_DEVICE_HARDWARE_OPER_ */

