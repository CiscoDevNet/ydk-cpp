#ifndef _CISCO_IOS_XR_INVMGR_OPER_3_
#define _CISCO_IOS_XR_INVMGR_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_invmgr_oper_0.hpp"
#include "Cisco_IOS_XR_invmgr_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_invmgr_oper {


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi : public Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo : public Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo : public Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_administrative_state; //type: int32
        YLeaf power_administrative_state; //type: int32
        YLeaf card_operational_state; //type: int32
        YLeaf card_monitor_state; //type: int32
        YLeaf card_reset_reason; //type: CardResetReasonEnum
        YLeaf power_current_measurement; //type: int32
        YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::CardUpTime : public Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvBasicBag : public Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf vendor_type; //type: string
        YLeaf name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf chip_hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf manufacturer_name; //type: string
        YLeaf model_name; //type: string
        YLeaf asset_id_str; //type: string
        YLeaf asset_identification; //type: int32
        YLeaf is_field_replaceable_unit; //type: boolean
        YLeaf manufacturer_asset_tags; //type: int32
        YLeaf composite_class_code; //type: int32
        YLeaf memory_size; //type: int32
        YLeaf environmental_monitor_path; //type: string
        YLeaf alias; //type: string
        YLeaf group_flag; //type: boolean
        YLeaf new_deviation_number; //type: int32
        YLeaf physical_layer_interface_module_type; //type: int32
        YLeaf unrecognized_fru; //type: boolean
        YLeaf redundancystate; //type: int32
        YLeaf ceport; //type: boolean
        YLeaf xr_scoped; //type: boolean
        YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo : public Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inv_card_type; //type: uint8
        YLeaf opaque_data; //type: string
        YLeaf opaque_data_size; //type: uint32
        YLeaf has_eeprom; //type: uint32
        YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom : public Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf idprom_format_rev; //type: string
        YLeaf controller_family; //type: string
        YLeaf controller_type; //type: string
        YLeaf vid; //type: string
        YLeaf hwid; //type: string
        YLeaf pid; //type: string
        YLeaf udi_description; //type: string
        YLeaf udi_name; //type: string
        YLeaf clei; //type: string
        YLeaf eci; //type: string
        YLeaf top_assem_part_num; //type: string
        YLeaf top_assem_vid; //type: string
        YLeaf pca_num; //type: string
        YLeaf pcavid; //type: string
        YLeaf chassis_sid; //type: string
        YLeaf dev_num1; //type: string
        YLeaf dev_num2; //type: string
        YLeaf dev_num3; //type: string
        YLeaf dev_num4; //type: string
        YLeaf dev_num5; //type: string
        YLeaf dev_num6; //type: string
        YLeaf dev_num7; //type: string
        YLeaf manu_test_data; //type: string
        YLeaf asset_id; //type: string
        YLeaf asset_alias; //type: string
        YLeaf base_mac_address1; //type: string
        YLeaf mac_add_blk_size1; //type: string
        YLeaf base_mac_address2; //type: string
        YLeaf mac_add_blk_size2; //type: string
        YLeaf base_mac_address3; //type: string
        YLeaf mac_add_blk_size3; //type: string
        YLeaf base_mac_address4; //type: string
        YLeaf mac_add_blk_size4; //type: string
        YLeaf pcb_serial_num; //type: string
        YLeaf power_supply_type; //type: string
        YLeaf power_consumption; //type: string
        YLeaf block_signature; //type: string
        YLeaf block_version; //type: string
        YLeaf block_length; //type: string
        YLeaf block_checksum; //type: string
        YLeaf eeprom_size; //type: string
        YLeaf block_count; //type: string
        YLeaf fru_major_type; //type: string
        YLeaf fru_minor_type; //type: string
        YLeaf oem_string; //type: string
        YLeaf product_id; //type: string
        YLeaf serial_number; //type: string
        YLeaf part_number; //type: string
        YLeaf part_revision; //type: string
        YLeaf mfg_deviation; //type: string
        YLeaf hw_version; //type: string
        YLeaf mfg_bits; //type: string
        YLeaf engineer_use; //type: string
        YLeaf snmpoid; //type: string
        YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma : public Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test_history; //type: string
        YLeaf rma_number; //type: string
        YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_done; //type: int32
        YLeaf vm_node_id; //type: uint32
        YLeaf vm_done; //type: int32
        YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo> fru_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo> inv_eeprom_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfo : public Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf field_validity_bitmap; //type: uint32
        YLeaf device_description; //type: string
        YLeaf units; //type: string
        YLeaf device_id; //type: uint32
        YLeaf value_; //type: uint32
        YLeaf alarm_type; //type: uint32
        YLeaf data_type; //type: uint32
        YLeaf scale; //type: uint32
        YLeaf precision; //type: uint32
        YLeaf status; //type: uint32
        YLeaf age_time_stamp; //type: uint32
        YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::PwgInfo : public Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf power_group_redundancy_mode; //type: int32
        YLeaf power_group_power_units; //type: string
        YLeaf power_group_available_current; //type: int32
        YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml : public Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf units; //type: UnitEnum
        YLeaf value_; //type: string
        YLeaf data_type; //type: SensorDataEnum
        YLeaf status; //type: SensorStatusEnum
        YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: ThresholdSeverityEnum
        YLeaf threshold_relation; //type: ThresholdRelationEnum
        YLeaf threshold_value; //type: int32
        YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvAssetBag : public Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf part_number; //type: string
        YLeaf manufacturer_assembly_number; //type: string
        YLeaf manufacturer_assembly_revision; //type: string
        YLeaf manufacturer_firmware_identifier; //type: string
        YLeaf manufacturer_software_identifier; //type: string
        YLeaf manufacturer_common_language_equipment_identifier; //type: string
        YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo : public Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi : public Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi : public Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi : public Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo : public Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo : public Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_administrative_state; //type: int32
        YLeaf power_administrative_state; //type: int32
        YLeaf card_operational_state; //type: int32
        YLeaf card_monitor_state; //type: int32
        YLeaf card_reset_reason; //type: CardResetReasonEnum
        YLeaf power_current_measurement; //type: int32
        YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::CardUpTime : public Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvBasicBag : public Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf vendor_type; //type: string
        YLeaf name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf chip_hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf manufacturer_name; //type: string
        YLeaf model_name; //type: string
        YLeaf asset_id_str; //type: string
        YLeaf asset_identification; //type: int32
        YLeaf is_field_replaceable_unit; //type: boolean
        YLeaf manufacturer_asset_tags; //type: int32
        YLeaf composite_class_code; //type: int32
        YLeaf memory_size; //type: int32
        YLeaf environmental_monitor_path; //type: string
        YLeaf alias; //type: string
        YLeaf group_flag; //type: boolean
        YLeaf new_deviation_number; //type: int32
        YLeaf physical_layer_interface_module_type; //type: int32
        YLeaf unrecognized_fru; //type: boolean
        YLeaf redundancystate; //type: int32
        YLeaf ceport; //type: boolean
        YLeaf xr_scoped; //type: boolean
        YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo : public Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inv_card_type; //type: uint8
        YLeaf opaque_data; //type: string
        YLeaf opaque_data_size; //type: uint32
        YLeaf has_eeprom; //type: uint32
        YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom : public Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf idprom_format_rev; //type: string
        YLeaf controller_family; //type: string
        YLeaf controller_type; //type: string
        YLeaf vid; //type: string
        YLeaf hwid; //type: string
        YLeaf pid; //type: string
        YLeaf udi_description; //type: string
        YLeaf udi_name; //type: string
        YLeaf clei; //type: string
        YLeaf eci; //type: string
        YLeaf top_assem_part_num; //type: string
        YLeaf top_assem_vid; //type: string
        YLeaf pca_num; //type: string
        YLeaf pcavid; //type: string
        YLeaf chassis_sid; //type: string
        YLeaf dev_num1; //type: string
        YLeaf dev_num2; //type: string
        YLeaf dev_num3; //type: string
        YLeaf dev_num4; //type: string
        YLeaf dev_num5; //type: string
        YLeaf dev_num6; //type: string
        YLeaf dev_num7; //type: string
        YLeaf manu_test_data; //type: string
        YLeaf asset_id; //type: string
        YLeaf asset_alias; //type: string
        YLeaf base_mac_address1; //type: string
        YLeaf mac_add_blk_size1; //type: string
        YLeaf base_mac_address2; //type: string
        YLeaf mac_add_blk_size2; //type: string
        YLeaf base_mac_address3; //type: string
        YLeaf mac_add_blk_size3; //type: string
        YLeaf base_mac_address4; //type: string
        YLeaf mac_add_blk_size4; //type: string
        YLeaf pcb_serial_num; //type: string
        YLeaf power_supply_type; //type: string
        YLeaf power_consumption; //type: string
        YLeaf block_signature; //type: string
        YLeaf block_version; //type: string
        YLeaf block_length; //type: string
        YLeaf block_checksum; //type: string
        YLeaf eeprom_size; //type: string
        YLeaf block_count; //type: string
        YLeaf fru_major_type; //type: string
        YLeaf fru_minor_type; //type: string
        YLeaf oem_string; //type: string
        YLeaf product_id; //type: string
        YLeaf serial_number; //type: string
        YLeaf part_number; //type: string
        YLeaf part_revision; //type: string
        YLeaf mfg_deviation; //type: string
        YLeaf hw_version; //type: string
        YLeaf mfg_bits; //type: string
        YLeaf engineer_use; //type: string
        YLeaf snmpoid; //type: string
        YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma : public Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test_history; //type: string
        YLeaf rma_number; //type: string
        YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_done; //type: int32
        YLeaf vm_node_id; //type: uint32
        YLeaf vm_done; //type: int32
        YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo> fru_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo> inv_eeprom_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfo : public Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf field_validity_bitmap; //type: uint32
        YLeaf device_description; //type: string
        YLeaf units; //type: string
        YLeaf device_id; //type: uint32
        YLeaf value_; //type: uint32
        YLeaf alarm_type; //type: uint32
        YLeaf data_type; //type: uint32
        YLeaf scale; //type: uint32
        YLeaf precision; //type: uint32
        YLeaf status; //type: uint32
        YLeaf age_time_stamp; //type: uint32
        YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::PwgInfo : public Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf power_group_redundancy_mode; //type: int32
        YLeaf power_group_power_units; //type: string
        YLeaf power_group_available_current; //type: int32
        YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml : public Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf units; //type: UnitEnum
        YLeaf value_; //type: string
        YLeaf data_type; //type: SensorDataEnum
        YLeaf status; //type: SensorStatusEnum
        YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: ThresholdSeverityEnum
        YLeaf threshold_relation; //type: ThresholdRelationEnum
        YLeaf threshold_value; //type: int32
        YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvAssetBag : public Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf part_number; //type: string
        YLeaf manufacturer_assembly_number; //type: string
        YLeaf manufacturer_assembly_revision; //type: string
        YLeaf manufacturer_firmware_identifier; //type: string
        YLeaf manufacturer_software_identifier; //type: string
        YLeaf manufacturer_common_language_equipment_identifier; //type: string
        YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo : public Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi : public Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi : public Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi : public Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo : public Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo : public Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_administrative_state; //type: int32
        YLeaf power_administrative_state; //type: int32
        YLeaf card_operational_state; //type: int32
        YLeaf card_monitor_state; //type: int32
        YLeaf card_reset_reason; //type: CardResetReasonEnum
        YLeaf power_current_measurement; //type: int32
        YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::CardUpTime : public Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvBasicBag : public Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf vendor_type; //type: string
        YLeaf name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf chip_hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf manufacturer_name; //type: string
        YLeaf model_name; //type: string
        YLeaf asset_id_str; //type: string
        YLeaf asset_identification; //type: int32
        YLeaf is_field_replaceable_unit; //type: boolean
        YLeaf manufacturer_asset_tags; //type: int32
        YLeaf composite_class_code; //type: int32
        YLeaf memory_size; //type: int32
        YLeaf environmental_monitor_path; //type: string
        YLeaf alias; //type: string
        YLeaf group_flag; //type: boolean
        YLeaf new_deviation_number; //type: int32
        YLeaf physical_layer_interface_module_type; //type: int32
        YLeaf unrecognized_fru; //type: boolean
        YLeaf redundancystate; //type: int32
        YLeaf ceport; //type: boolean
        YLeaf xr_scoped; //type: boolean
        YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo : public Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inv_card_type; //type: uint8
        YLeaf opaque_data; //type: string
        YLeaf opaque_data_size; //type: uint32
        YLeaf has_eeprom; //type: uint32
        YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom : public Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf idprom_format_rev; //type: string
        YLeaf controller_family; //type: string
        YLeaf controller_type; //type: string
        YLeaf vid; //type: string
        YLeaf hwid; //type: string
        YLeaf pid; //type: string
        YLeaf udi_description; //type: string
        YLeaf udi_name; //type: string
        YLeaf clei; //type: string
        YLeaf eci; //type: string
        YLeaf top_assem_part_num; //type: string
        YLeaf top_assem_vid; //type: string
        YLeaf pca_num; //type: string
        YLeaf pcavid; //type: string
        YLeaf chassis_sid; //type: string
        YLeaf dev_num1; //type: string
        YLeaf dev_num2; //type: string
        YLeaf dev_num3; //type: string
        YLeaf dev_num4; //type: string
        YLeaf dev_num5; //type: string
        YLeaf dev_num6; //type: string
        YLeaf dev_num7; //type: string
        YLeaf manu_test_data; //type: string
        YLeaf asset_id; //type: string
        YLeaf asset_alias; //type: string
        YLeaf base_mac_address1; //type: string
        YLeaf mac_add_blk_size1; //type: string
        YLeaf base_mac_address2; //type: string
        YLeaf mac_add_blk_size2; //type: string
        YLeaf base_mac_address3; //type: string
        YLeaf mac_add_blk_size3; //type: string
        YLeaf base_mac_address4; //type: string
        YLeaf mac_add_blk_size4; //type: string
        YLeaf pcb_serial_num; //type: string
        YLeaf power_supply_type; //type: string
        YLeaf power_consumption; //type: string
        YLeaf block_signature; //type: string
        YLeaf block_version; //type: string
        YLeaf block_length; //type: string
        YLeaf block_checksum; //type: string
        YLeaf eeprom_size; //type: string
        YLeaf block_count; //type: string
        YLeaf fru_major_type; //type: string
        YLeaf fru_minor_type; //type: string
        YLeaf oem_string; //type: string
        YLeaf product_id; //type: string
        YLeaf serial_number; //type: string
        YLeaf part_number; //type: string
        YLeaf part_revision; //type: string
        YLeaf mfg_deviation; //type: string
        YLeaf hw_version; //type: string
        YLeaf mfg_bits; //type: string
        YLeaf engineer_use; //type: string
        YLeaf snmpoid; //type: string
        YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom::Rma : public Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test_history; //type: string
        YLeaf rma_number; //type: string
        YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_done; //type: int32
        YLeaf vm_node_id; //type: uint32
        YLeaf vm_done; //type: int32
        YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo> fru_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo> inv_eeprom_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfo : public Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf field_validity_bitmap; //type: uint32
        YLeaf device_description; //type: string
        YLeaf units; //type: string
        YLeaf device_id; //type: uint32
        YLeaf value_; //type: uint32
        YLeaf alarm_type; //type: uint32
        YLeaf data_type; //type: uint32
        YLeaf scale; //type: uint32
        YLeaf precision; //type: uint32
        YLeaf status; //type: uint32
        YLeaf age_time_stamp; //type: uint32
        YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::PwgInfo : public Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf power_group_redundancy_mode; //type: int32
        YLeaf power_group_power_units; //type: string
        YLeaf power_group_available_current; //type: int32
        YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml : public Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf units; //type: UnitEnum
        YLeaf value_; //type: string
        YLeaf data_type; //type: SensorDataEnum
        YLeaf status; //type: SensorStatusEnum
        YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: ThresholdSeverityEnum
        YLeaf threshold_relation; //type: ThresholdRelationEnum
        YLeaf threshold_value; //type: int32
        YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvAssetBag : public Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf part_number; //type: string
        YLeaf manufacturer_assembly_number; //type: string
        YLeaf manufacturer_assembly_revision; //type: string
        YLeaf manufacturer_firmware_identifier; //type: string
        YLeaf manufacturer_software_identifier; //type: string
        YLeaf manufacturer_common_language_equipment_identifier; //type: string
        YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo : public Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi : public Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi : public Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi : public Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo : public Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo : public Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_administrative_state; //type: int32
        YLeaf power_administrative_state; //type: int32
        YLeaf card_operational_state; //type: int32
        YLeaf card_monitor_state; //type: int32
        YLeaf card_reset_reason; //type: CardResetReasonEnum
        YLeaf power_current_measurement; //type: int32
        YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::CardUpTime : public Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvBasicBag : public Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf vendor_type; //type: string
        YLeaf name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf chip_hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf manufacturer_name; //type: string
        YLeaf model_name; //type: string
        YLeaf asset_id_str; //type: string
        YLeaf asset_identification; //type: int32
        YLeaf is_field_replaceable_unit; //type: boolean
        YLeaf manufacturer_asset_tags; //type: int32
        YLeaf composite_class_code; //type: int32
        YLeaf memory_size; //type: int32
        YLeaf environmental_monitor_path; //type: string
        YLeaf alias; //type: string
        YLeaf group_flag; //type: boolean
        YLeaf new_deviation_number; //type: int32
        YLeaf physical_layer_interface_module_type; //type: int32
        YLeaf unrecognized_fru; //type: boolean
        YLeaf redundancystate; //type: int32
        YLeaf ceport; //type: boolean
        YLeaf xr_scoped; //type: boolean
        YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo : public Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inv_card_type; //type: uint8
        YLeaf opaque_data; //type: string
        YLeaf opaque_data_size; //type: uint32
        YLeaf has_eeprom; //type: uint32
        YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom : public Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf idprom_format_rev; //type: string
        YLeaf controller_family; //type: string
        YLeaf controller_type; //type: string
        YLeaf vid; //type: string
        YLeaf hwid; //type: string
        YLeaf pid; //type: string
        YLeaf udi_description; //type: string
        YLeaf udi_name; //type: string
        YLeaf clei; //type: string
        YLeaf eci; //type: string
        YLeaf top_assem_part_num; //type: string
        YLeaf top_assem_vid; //type: string
        YLeaf pca_num; //type: string
        YLeaf pcavid; //type: string
        YLeaf chassis_sid; //type: string
        YLeaf dev_num1; //type: string
        YLeaf dev_num2; //type: string
        YLeaf dev_num3; //type: string
        YLeaf dev_num4; //type: string
        YLeaf dev_num5; //type: string
        YLeaf dev_num6; //type: string
        YLeaf dev_num7; //type: string
        YLeaf manu_test_data; //type: string
        YLeaf asset_id; //type: string
        YLeaf asset_alias; //type: string
        YLeaf base_mac_address1; //type: string
        YLeaf mac_add_blk_size1; //type: string
        YLeaf base_mac_address2; //type: string
        YLeaf mac_add_blk_size2; //type: string
        YLeaf base_mac_address3; //type: string
        YLeaf mac_add_blk_size3; //type: string
        YLeaf base_mac_address4; //type: string
        YLeaf mac_add_blk_size4; //type: string
        YLeaf pcb_serial_num; //type: string
        YLeaf power_supply_type; //type: string
        YLeaf power_consumption; //type: string
        YLeaf block_signature; //type: string
        YLeaf block_version; //type: string
        YLeaf block_length; //type: string
        YLeaf block_checksum; //type: string
        YLeaf eeprom_size; //type: string
        YLeaf block_count; //type: string
        YLeaf fru_major_type; //type: string
        YLeaf fru_minor_type; //type: string
        YLeaf oem_string; //type: string
        YLeaf product_id; //type: string
        YLeaf serial_number; //type: string
        YLeaf part_number; //type: string
        YLeaf part_revision; //type: string
        YLeaf mfg_deviation; //type: string
        YLeaf hw_version; //type: string
        YLeaf mfg_bits; //type: string
        YLeaf engineer_use; //type: string
        YLeaf snmpoid; //type: string
        YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom::Rma : public Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test_history; //type: string
        YLeaf rma_number; //type: string
        YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_done; //type: int32
        YLeaf vm_node_id; //type: uint32
        YLeaf vm_done; //type: int32
        YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo> fru_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo> inv_eeprom_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfo : public Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf field_validity_bitmap; //type: uint32
        YLeaf device_description; //type: string
        YLeaf units; //type: string
        YLeaf device_id; //type: uint32
        YLeaf value_; //type: uint32
        YLeaf alarm_type; //type: uint32
        YLeaf data_type; //type: uint32
        YLeaf scale; //type: uint32
        YLeaf precision; //type: uint32
        YLeaf status; //type: uint32
        YLeaf age_time_stamp; //type: uint32
        YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::PwgInfo : public Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf power_group_redundancy_mode; //type: int32
        YLeaf power_group_power_units; //type: string
        YLeaf power_group_available_current; //type: int32
        YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml : public Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf units; //type: UnitEnum
        YLeaf value_; //type: string
        YLeaf data_type; //type: SensorDataEnum
        YLeaf status; //type: SensorStatusEnum
        YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: ThresholdSeverityEnum
        YLeaf threshold_relation; //type: ThresholdRelationEnum
        YLeaf threshold_value; //type: int32
        YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvAssetBag : public Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf part_number; //type: string
        YLeaf manufacturer_assembly_number; //type: string
        YLeaf manufacturer_assembly_revision; //type: string
        YLeaf manufacturer_firmware_identifier; //type: string
        YLeaf manufacturer_software_identifier; //type: string
        YLeaf manufacturer_common_language_equipment_identifier; //type: string
        YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo : public Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi : public Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi : public Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi : public Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo : public Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo : public Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_administrative_state; //type: int32
        YLeaf power_administrative_state; //type: int32
        YLeaf card_operational_state; //type: int32
        YLeaf card_monitor_state; //type: int32
        YLeaf card_reset_reason; //type: CardResetReasonEnum
        YLeaf power_current_measurement; //type: int32
        YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime : public Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag : public Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf vendor_type; //type: string
        YLeaf name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf chip_hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf manufacturer_name; //type: string
        YLeaf model_name; //type: string
        YLeaf asset_id_str; //type: string
        YLeaf asset_identification; //type: int32
        YLeaf is_field_replaceable_unit; //type: boolean
        YLeaf manufacturer_asset_tags; //type: int32
        YLeaf composite_class_code; //type: int32
        YLeaf memory_size; //type: int32
        YLeaf environmental_monitor_path; //type: string
        YLeaf alias; //type: string
        YLeaf group_flag; //type: boolean
        YLeaf new_deviation_number; //type: int32
        YLeaf physical_layer_interface_module_type; //type: int32
        YLeaf unrecognized_fru; //type: boolean
        YLeaf redundancystate; //type: int32
        YLeaf ceport; //type: boolean
        YLeaf xr_scoped; //type: boolean
        YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo : public Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inv_card_type; //type: uint8
        YLeaf opaque_data; //type: string
        YLeaf opaque_data_size; //type: uint32
        YLeaf has_eeprom; //type: uint32
        YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom : public Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf idprom_format_rev; //type: string
        YLeaf controller_family; //type: string
        YLeaf controller_type; //type: string
        YLeaf vid; //type: string
        YLeaf hwid; //type: string
        YLeaf pid; //type: string
        YLeaf udi_description; //type: string
        YLeaf udi_name; //type: string
        YLeaf clei; //type: string
        YLeaf eci; //type: string
        YLeaf top_assem_part_num; //type: string
        YLeaf top_assem_vid; //type: string
        YLeaf pca_num; //type: string
        YLeaf pcavid; //type: string
        YLeaf chassis_sid; //type: string
        YLeaf dev_num1; //type: string
        YLeaf dev_num2; //type: string
        YLeaf dev_num3; //type: string
        YLeaf dev_num4; //type: string
        YLeaf dev_num5; //type: string
        YLeaf dev_num6; //type: string
        YLeaf dev_num7; //type: string
        YLeaf manu_test_data; //type: string
        YLeaf asset_id; //type: string
        YLeaf asset_alias; //type: string
        YLeaf base_mac_address1; //type: string
        YLeaf mac_add_blk_size1; //type: string
        YLeaf base_mac_address2; //type: string
        YLeaf mac_add_blk_size2; //type: string
        YLeaf base_mac_address3; //type: string
        YLeaf mac_add_blk_size3; //type: string
        YLeaf base_mac_address4; //type: string
        YLeaf mac_add_blk_size4; //type: string
        YLeaf pcb_serial_num; //type: string
        YLeaf power_supply_type; //type: string
        YLeaf power_consumption; //type: string
        YLeaf block_signature; //type: string
        YLeaf block_version; //type: string
        YLeaf block_length; //type: string
        YLeaf block_checksum; //type: string
        YLeaf eeprom_size; //type: string
        YLeaf block_count; //type: string
        YLeaf fru_major_type; //type: string
        YLeaf fru_minor_type; //type: string
        YLeaf oem_string; //type: string
        YLeaf product_id; //type: string
        YLeaf serial_number; //type: string
        YLeaf part_number; //type: string
        YLeaf part_revision; //type: string
        YLeaf mfg_deviation; //type: string
        YLeaf hw_version; //type: string
        YLeaf mfg_bits; //type: string
        YLeaf engineer_use; //type: string
        YLeaf snmpoid; //type: string
        YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma : public Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test_history; //type: string
        YLeaf rma_number; //type: string
        YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_done; //type: int32
        YLeaf vm_node_id; //type: uint32
        YLeaf vm_done; //type: int32
        YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo> fru_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo> inv_eeprom_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo : public Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf field_validity_bitmap; //type: uint32
        YLeaf device_description; //type: string
        YLeaf units; //type: string
        YLeaf device_id; //type: uint32
        YLeaf value_; //type: uint32
        YLeaf alarm_type; //type: uint32
        YLeaf data_type; //type: uint32
        YLeaf scale; //type: uint32
        YLeaf precision; //type: uint32
        YLeaf status; //type: uint32
        YLeaf age_time_stamp; //type: uint32
        YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo : public Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf power_group_redundancy_mode; //type: int32
        YLeaf power_group_power_units; //type: string
        YLeaf power_group_available_current; //type: int32
        YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml : public Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf units; //type: UnitEnum
        YLeaf value_; //type: string
        YLeaf data_type; //type: SensorDataEnum
        YLeaf status; //type: SensorStatusEnum
        YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: ThresholdSeverityEnum
        YLeaf threshold_relation; //type: ThresholdRelationEnum
        YLeaf threshold_value; //type: int32
        YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag : public Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf part_number; //type: string
        YLeaf manufacturer_assembly_number; //type: string
        YLeaf manufacturer_assembly_revision; //type: string
        YLeaf manufacturer_firmware_identifier; //type: string
        YLeaf manufacturer_software_identifier; //type: string
        YLeaf manufacturer_common_language_equipment_identifier; //type: string
        YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo : public Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi : public Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi : public Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi : public Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo : public Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo : public Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag : public Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_administrative_state; //type: int32
        YLeaf power_administrative_state; //type: int32
        YLeaf card_operational_state; //type: int32
        YLeaf card_monitor_state; //type: int32
        YLeaf card_reset_reason; //type: CardResetReasonEnum
        YLeaf power_current_measurement; //type: int32
        YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime : public Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag : public Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf vendor_type; //type: string
        YLeaf name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf chip_hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf manufacturer_name; //type: string
        YLeaf model_name; //type: string
        YLeaf asset_id_str; //type: string
        YLeaf asset_identification; //type: int32
        YLeaf is_field_replaceable_unit; //type: boolean
        YLeaf manufacturer_asset_tags; //type: int32
        YLeaf composite_class_code; //type: int32
        YLeaf memory_size; //type: int32
        YLeaf environmental_monitor_path; //type: string
        YLeaf alias; //type: string
        YLeaf group_flag; //type: boolean
        YLeaf new_deviation_number; //type: int32
        YLeaf physical_layer_interface_module_type; //type: int32
        YLeaf unrecognized_fru; //type: boolean
        YLeaf redundancystate; //type: int32
        YLeaf ceport; //type: boolean
        YLeaf xr_scoped; //type: boolean
        YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo : public Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inv_card_type; //type: uint8
        YLeaf opaque_data; //type: string
        YLeaf opaque_data_size; //type: uint32
        YLeaf has_eeprom; //type: uint32
        YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom : public Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf idprom_format_rev; //type: string
        YLeaf controller_family; //type: string
        YLeaf controller_type; //type: string
        YLeaf vid; //type: string
        YLeaf hwid; //type: string
        YLeaf pid; //type: string
        YLeaf udi_description; //type: string
        YLeaf udi_name; //type: string
        YLeaf clei; //type: string
        YLeaf eci; //type: string
        YLeaf top_assem_part_num; //type: string
        YLeaf top_assem_vid; //type: string
        YLeaf pca_num; //type: string
        YLeaf pcavid; //type: string
        YLeaf chassis_sid; //type: string
        YLeaf dev_num1; //type: string
        YLeaf dev_num2; //type: string
        YLeaf dev_num3; //type: string
        YLeaf dev_num4; //type: string
        YLeaf dev_num5; //type: string
        YLeaf dev_num6; //type: string
        YLeaf dev_num7; //type: string
        YLeaf manu_test_data; //type: string
        YLeaf asset_id; //type: string
        YLeaf asset_alias; //type: string
        YLeaf base_mac_address1; //type: string
        YLeaf mac_add_blk_size1; //type: string
        YLeaf base_mac_address2; //type: string
        YLeaf mac_add_blk_size2; //type: string
        YLeaf base_mac_address3; //type: string
        YLeaf mac_add_blk_size3; //type: string
        YLeaf base_mac_address4; //type: string
        YLeaf mac_add_blk_size4; //type: string
        YLeaf pcb_serial_num; //type: string
        YLeaf power_supply_type; //type: string
        YLeaf power_consumption; //type: string
        YLeaf block_signature; //type: string
        YLeaf block_version; //type: string
        YLeaf block_length; //type: string
        YLeaf block_checksum; //type: string
        YLeaf eeprom_size; //type: string
        YLeaf block_count; //type: string
        YLeaf fru_major_type; //type: string
        YLeaf fru_minor_type; //type: string
        YLeaf oem_string; //type: string
        YLeaf product_id; //type: string
        YLeaf serial_number; //type: string
        YLeaf part_number; //type: string
        YLeaf part_revision; //type: string
        YLeaf mfg_deviation; //type: string
        YLeaf hw_version; //type: string
        YLeaf mfg_bits; //type: string
        YLeaf engineer_use; //type: string
        YLeaf snmpoid; //type: string
        YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma : public Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test_history; //type: string
        YLeaf rma_number; //type: string
        YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf module_done; //type: int32
        YLeaf vm_node_id; //type: uint32
        YLeaf vm_done; //type: int32
        YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo

        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo> fru_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo> inv_eeprom_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo : public Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf field_validity_bitmap; //type: uint32
        YLeaf device_description; //type: string
        YLeaf units; //type: string
        YLeaf device_id; //type: uint32
        YLeaf value_; //type: uint32
        YLeaf alarm_type; //type: uint32
        YLeaf data_type; //type: uint32
        YLeaf scale; //type: uint32
        YLeaf precision; //type: uint32
        YLeaf status; //type: uint32
        YLeaf age_time_stamp; //type: uint32
        YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo


}
}

#endif /* _CISCO_IOS_XR_INVMGR_OPER_3_ */

