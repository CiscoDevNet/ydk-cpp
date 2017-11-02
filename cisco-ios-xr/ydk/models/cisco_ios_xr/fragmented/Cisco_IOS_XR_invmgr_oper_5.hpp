#ifndef _CISCO_IOS_XR_INVMGR_OPER_5_
#define _CISCO_IOS_XR_INVMGR_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_invmgr_oper_0.hpp"
#include "Cisco_IOS_XR_invmgr_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_invmgr_oper {


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvBasicBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_done; //type: int32
        ydk::YLeaf vm_node_id; //type: uint32
        ydk::YLeaf vm_done; //type: int32
        ydk::YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::PwgInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvAssetBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvBasicBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_done; //type: int32
        ydk::YLeaf vm_node_id; //type: uint32
        ydk::YLeaf vm_done; //type: int32
        ydk::YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::PwgInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvAssetBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvBasicBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_done; //type: int32
        ydk::YLeaf vm_node_id; //type: uint32
        ydk::YLeaf vm_done; //type: int32
        ydk::YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::PwgInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvAssetBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvBasicBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_done; //type: int32
        ydk::YLeaf vm_node_id; //type: uint32
        ydk::YLeaf vm_done; //type: int32
        ydk::YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::PwgInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvAssetBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvBasicBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_done; //type: int32
        ydk::YLeaf vm_node_id; //type: uint32
        ydk::YLeaf vm_done; //type: int32
        ydk::YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::PwgInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvAssetBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvBasicBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        class Rma; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_done; //type: int32
        ydk::YLeaf vm_node_id; //type: uint32
        ydk::YLeaf vm_done; //type: int32
        ydk::YLeaf node_id; //type: uint32
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo
        class InvBasicBag; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag
        class InvEepromInfo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::PwgInfo


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray> > threshold_array;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvAssetBag


class Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold


}
}

#endif /* _CISCO_IOS_XR_INVMGR_OPER_5_ */

