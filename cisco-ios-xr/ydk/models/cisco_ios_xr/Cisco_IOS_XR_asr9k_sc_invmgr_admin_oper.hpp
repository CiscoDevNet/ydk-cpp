#ifndef _CISCO_IOS_XR_ASR9K_SC_INVMGR_ADMIN_OPER_
#define _CISCO_IOS_XR_ASR9K_SC_INVMGR_ADMIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper {

class Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

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

        class Racks; //type: Inventory::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks> racks;
        
}; // Inventory


class Inventory::Racks : public ydk::Entity
{
    public:
        Racks();
        ~Racks();

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

        class Rack; //type: Inventory::Racks::Rack

        ydk::YList rack;
        
}; // Inventory::Racks


class Inventory::Racks::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        ydk::YLeaf number; //type: uint32
        class PowerSupplyShelfs; //type: Inventory::Racks::Rack::PowerSupplyShelfs
        class Slots; //type: Inventory::Racks::Rack::Slots
        class FanTrays; //type: Inventory::Racks::Rack::FanTrays
        class PowerSupplyZones; //type: Inventory::Racks::Rack::PowerSupplyZones
        class BasicAttributes; //type: Inventory::Racks::Rack::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::PowerSupplyShelfs> power_supply_shelfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots> slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::FanTrays> fan_trays;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::PowerSupplyZones> power_supply_zones;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack


class Inventory::Racks::Rack::PowerSupplyShelfs : public ydk::Entity
{
    public:
        PowerSupplyShelfs();
        ~PowerSupplyShelfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PowerSupplyShelf; //type: Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf

        ydk::YList power_supply_shelf;
        
}; // Inventory::Racks::Rack::PowerSupplyShelfs


class Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf : public ydk::Entity
{
    public:
        PowerSupplyShelf();
        ~PowerSupplyShelf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class BasicAttributes; //type: Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf


class Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes


class Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots : public ydk::Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slot; //type: Inventory::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // Inventory::Racks::Rack::Slots


class Inventory::Racks::Rack::Slots::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Cards; //type: Inventory::Racks::Rack::Slots::Slot::Cards
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards> cards;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot


class Inventory::Racks::Rack::Slots::Slot::Cards : public ydk::Entity
{
    public:
        Cards();
        ~Cards();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Card; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card

        ydk::YList card;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards


class Inventory::Racks::Rack::Slots::Slot::Cards::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class SubSlots; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots
        class HwComponents; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents
        class PortSlots; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots
        class Sensors; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots> sub_slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents> hw_components;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots> port_slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots : public ydk::Entity
{
    public:
        SubSlots();
        ~SubSlots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubSlot; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot

        ydk::YList sub_slot;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot : public ydk::Entity
{
    public:
        SubSlot();
        ~SubSlot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Module; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module> module;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module : public ydk::Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortSlots; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots
        class Sensors; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots> port_slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots : public ydk::Entity
{
    public:
        PortSlots();
        ~PortSlots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortSlot; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot

        ydk::YList port_slot;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot : public ydk::Entity
{
    public:
        PortSlot();
        ~PortSlot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Port; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors : public ydk::Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sensor; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor

        ydk::YList sensor;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor : public ydk::Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents : public ydk::Entity
{
    public:
        HwComponents();
        ~HwComponents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HwComponent; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent

        ydk::YList hw_component;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent : public ydk::Entity
{
    public:
        HwComponent();
        ~HwComponent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Sensors; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors : public ydk::Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sensor; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor

        ydk::YList sensor;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor : public ydk::Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots : public ydk::Entity
{
    public:
        PortSlots();
        ~PortSlots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortSlot; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot

        ydk::YList port_slot;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot : public ydk::Entity
{
    public:
        PortSlot();
        ~PortSlot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Port; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors : public ydk::Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sensor; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor

        ydk::YList sensor;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor : public ydk::Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo
        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo : public ydk::Entity
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

        ydk::YLeaf module_administrative_state; //type: InvAdminState
        ydk::YLeaf module_power_administrative_state; //type: InvPowerAdminState
        ydk::YLeaf module_operational_state; //type: InvCardState
        ydk::YLeaf module_monitor_state; //type: InvMonitorState
        ydk::YLeaf module_reset_reason; //type: InvResetReason
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::ModuleUpTime : public ydk::Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

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

}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::ModuleUpTime


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::FanTrays : public ydk::Entity
{
    public:
        FanTrays();
        ~FanTrays();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FanTray; //type: Inventory::Racks::Rack::FanTrays::FanTray

        ydk::YList fan_tray;
        
}; // Inventory::Racks::Rack::FanTrays


class Inventory::Racks::Rack::FanTrays::FanTray : public ydk::Entity
{
    public:
        FanTray();
        ~FanTray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class BasicAttributes; //type: Inventory::Racks::Rack::FanTrays::FanTray::BasicAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::FanTrays::FanTray::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::FanTrays::FanTray


class Inventory::Racks::Rack::FanTrays::FanTray::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::FanTrays::FanTray::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::FanTrays::FanTray::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::FanTrays::FanTray::BasicAttributes


class Inventory::Racks::Rack::FanTrays::FanTray::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::FanTrays::FanTray::BasicAttributes::BasicInfo


class Inventory::Racks::Rack::PowerSupplyZones : public ydk::Entity
{
    public:
        PowerSupplyZones();
        ~PowerSupplyZones();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PowerSupplyZone; //type: Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone

        ydk::YList power_supply_zone;
        
}; // Inventory::Racks::Rack::PowerSupplyZones


class Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone : public ydk::Entity
{
    public:
        PowerSupplyZone();
        ~PowerSupplyZone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class PowerSupplyZoneAttributes; //type: Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes> power_supply_zone_attributes;
        
}; // Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone


class Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes : public ydk::Entity
{
    public:
        PowerSupplyZoneAttributes();
        ~PowerSupplyZoneAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PowerSupplyGroupInfo; //type: Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo> power_supply_group_info;
        
}; // Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes


class Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo : public ydk::Entity
{
    public:
        PowerSupplyGroupInfo();
        ~PowerSupplyGroupInfo();

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

}; // Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo


class Inventory::Racks::Rack::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::BasicAttributes::BasicInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory::Racks::Rack::BasicAttributes::BasicInfo> basic_info;
        
}; // Inventory::Racks::Rack::BasicAttributes


class Inventory::Racks::Rack::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

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

}; // Inventory::Racks::Rack::BasicAttributes::BasicInfo

class InvResetReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf module_reset_reason_unknown;
        static const ydk::Enum::YLeaf module_reset_reason_powerup;
        static const ydk::Enum::YLeaf module_reset_reason_user_shutdown;
        static const ydk::Enum::YLeaf module_reset_reason_user_reload;
        static const ydk::Enum::YLeaf module_reset_reason_auto_reload;
        static const ydk::Enum::YLeaf module_reset_reason_environment;
        static const ydk::Enum::YLeaf module_reset_reason_user_unpower;

        static int get_enum_value(const std::string & name) {
            if (name == "module-reset-reason-unknown") return 0;
            if (name == "module-reset-reason-powerup") return 1;
            if (name == "module-reset-reason-user-shutdown") return 2;
            if (name == "module-reset-reason-user-reload") return 3;
            if (name == "module-reset-reason-auto-reload") return 4;
            if (name == "module-reset-reason-environment") return 5;
            if (name == "module-reset-reason-user-unpower") return 6;
            return -1;
        }
};

class InvAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_state_invalid;
        static const ydk::Enum::YLeaf admin_up;
        static const ydk::Enum::YLeaf admin_down;

        static int get_enum_value(const std::string & name) {
            if (name == "admin-state-invalid") return 0;
            if (name == "admin-up") return 1;
            if (name == "admin-down") return 2;
            return -1;
        }
};

class InvMonitorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unmonitored;
        static const ydk::Enum::YLeaf monitored;

        static int get_enum_value(const std::string & name) {
            if (name == "unmonitored") return 0;
            if (name == "monitored") return 1;
            return -1;
        }
};

class InvPowerAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_power_invalid;
        static const ydk::Enum::YLeaf admin_on;
        static const ydk::Enum::YLeaf admin_off;

        static int get_enum_value(const std::string & name) {
            if (name == "admin-power-invalid") return 0;
            if (name == "admin-on") return 2;
            if (name == "admin-off") return 3;
            return -1;
        }
};

class InvCardState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inv_card_not_present;
        static const ydk::Enum::YLeaf inv_card_present;
        static const ydk::Enum::YLeaf inv_card_reset;
        static const ydk::Enum::YLeaf inv_card_booting;
        static const ydk::Enum::YLeaf inv_card_mbi_booting;
        static const ydk::Enum::YLeaf inv_card_running_mbi;
        static const ydk::Enum::YLeaf inv_card_running_ena;
        static const ydk::Enum::YLeaf inv_card_bring_down;
        static const ydk::Enum::YLeaf inv_card_ena_failure;
        static const ydk::Enum::YLeaf inv_card_f_diag_run;
        static const ydk::Enum::YLeaf inv_card_f_diag_failure;
        static const ydk::Enum::YLeaf inv_card_powered;
        static const ydk::Enum::YLeaf inv_card_unpowered;
        static const ydk::Enum::YLeaf inv_card_mdr;
        static const ydk::Enum::YLeaf inv_card_mdr_running_mbi;
        static const ydk::Enum::YLeaf inv_card_main_t_mode;
        static const ydk::Enum::YLeaf inv_card_admin_down;
        static const ydk::Enum::YLeaf inv_card_no_mon;
        static const ydk::Enum::YLeaf inv_card_unknown;
        static const ydk::Enum::YLeaf inv_card_failed;
        static const ydk::Enum::YLeaf inv_card_ok;
        static const ydk::Enum::YLeaf inv_card_missing;
        static const ydk::Enum::YLeaf inv_card_field_diag_downloading;
        static const ydk::Enum::YLeaf inv_card_field_diag_unmonitor;
        static const ydk::Enum::YLeaf inv_card_fabric_field_diag_unmonitor;
        static const ydk::Enum::YLeaf inv_card_field_diag_rp_launching;
        static const ydk::Enum::YLeaf inv_card_field_diag_running;
        static const ydk::Enum::YLeaf inv_card_field_diag_pass;
        static const ydk::Enum::YLeaf inv_card_field_diag_fail;
        static const ydk::Enum::YLeaf inv_card_field_diag_timeout;
        static const ydk::Enum::YLeaf inv_card_disabled;
        static const ydk::Enum::YLeaf inv_card_spa_booting;
        static const ydk::Enum::YLeaf inv_card_not_allowed_online;
        static const ydk::Enum::YLeaf inv_card_stopped;
        static const ydk::Enum::YLeaf inv_card_incompatible_fw_ver;
        static const ydk::Enum::YLeaf inv_card_fpd_hold;
        static const ydk::Enum::YLeaf inv_card_node_prep;
        static const ydk::Enum::YLeaf inv_card_updating_fpd;
        static const ydk::Enum::YLeaf inv_card_num_states;

        static int get_enum_value(const std::string & name) {
            if (name == "inv-card-not-present") return 0;
            if (name == "inv-card-present") return 1;
            if (name == "inv-card-reset") return 2;
            if (name == "inv-card-booting") return 3;
            if (name == "inv-card-mbi-booting") return 4;
            if (name == "inv-card-running-mbi") return 5;
            if (name == "inv-card-running-ena") return 6;
            if (name == "inv-card-bring-down") return 7;
            if (name == "inv-card-ena-failure") return 8;
            if (name == "inv-card-f-diag-run") return 9;
            if (name == "inv-card-f-diag-failure") return 10;
            if (name == "inv-card-powered") return 11;
            if (name == "inv-card-unpowered") return 12;
            if (name == "inv-card-mdr") return 13;
            if (name == "inv-card-mdr-running-mbi") return 14;
            if (name == "inv-card-main-t-mode") return 15;
            if (name == "inv-card-admin-down") return 16;
            if (name == "inv-card-no-mon") return 17;
            if (name == "inv-card-unknown") return 18;
            if (name == "inv-card-failed") return 19;
            if (name == "inv-card-ok") return 20;
            if (name == "inv-card-missing") return 21;
            if (name == "inv-card-field-diag-downloading") return 22;
            if (name == "inv-card-field-diag-unmonitor") return 23;
            if (name == "inv-card-fabric-field-diag-unmonitor") return 24;
            if (name == "inv-card-field-diag-rp-launching") return 25;
            if (name == "inv-card-field-diag-running") return 26;
            if (name == "inv-card-field-diag-pass") return 27;
            if (name == "inv-card-field-diag-fail") return 28;
            if (name == "inv-card-field-diag-timeout") return 29;
            if (name == "inv-card-disabled") return 30;
            if (name == "inv-card-spa-booting") return 31;
            if (name == "inv-card-not-allowed-online") return 32;
            if (name == "inv-card-stopped") return 33;
            if (name == "inv-card-incompatible-fw-ver") return 34;
            if (name == "inv-card-fpd-hold") return 35;
            if (name == "inv-card-node-prep") return 36;
            if (name == "inv-card-updating-fpd") return 37;
            if (name == "inv-card-num-states") return 38;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_SC_INVMGR_ADMIN_OPER_ */

