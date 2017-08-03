#ifndef _CISCO_IOS_XR_ASR9K_SC_INVMGR_OPER_
#define _CISCO_IOS_XR_ASR9K_SC_INVMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_sc_invmgr_oper {

class Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks> racks;
        
}; // Inventory


class Inventory::Racks : public ydk::Entity
{
    public:
        Racks();
        ~Racks();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rack; //type: Inventory::Racks::Rack

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack> > rack;
        
}; // Inventory::Racks


class Inventory::Racks::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class Slots; //type: Inventory::Racks::Rack::Slots

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots> slots;
        
}; // Inventory::Racks::Rack


class Inventory::Racks::Rack::Slots : public ydk::Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slot; //type: Inventory::Racks::Rack::Slots::Slot

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot> > slot;
        
}; // Inventory::Racks::Rack::Slots


class Inventory::Racks::Rack::Slots::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class Cards; //type: Inventory::Racks::Rack::Slots::Slot::Cards
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes> basic_attributes;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards> cards;
        
}; // Inventory::Racks::Rack::Slots::Slot


class Inventory::Racks::Rack::Slots::Slot::Cards : public ydk::Entity
{
    public:
        Cards();
        ~Cards();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Card; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card> > card;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards


class Inventory::Racks::Rack::Slots::Slot::Cards::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class SubSlots; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots
        class HwComponents; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents
        class Sensors; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors
        class PortSlots; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes> basic_attributes;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents> hw_components;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots> port_slots;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors> sensors;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots> sub_slots;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots : public ydk::Entity
{
    public:
        SubSlots();
        ~SubSlots();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubSlot; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot> > sub_slot;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot : public ydk::Entity
{
    public:
        SubSlot();
        ~SubSlot();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class Module; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes> basic_attributes;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module> module;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module : public ydk::Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sensors; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors
        class PortSlots; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes> basic_attributes;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots> port_slots;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors> sensors;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors : public ydk::Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sensor; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor> > sensor;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor : public ydk::Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots : public ydk::Entity
{
    public:
        PortSlots();
        ~PortSlots();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortSlot; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot> > port_slot;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot : public ydk::Entity
{
    public:
        PortSlot();
        ~PortSlot();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class Port; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes> basic_attributes;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port> port;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents : public ydk::Entity
{
    public:
        HwComponents();
        ~HwComponents();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HwComponent; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent> > hw_component;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent : public ydk::Entity
{
    public:
        HwComponent();
        ~HwComponent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class Sensors; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes> basic_attributes;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors> sensors;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors : public ydk::Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sensor; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor> > sensor;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor : public ydk::Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors : public ydk::Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sensor; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor> > sensor;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor : public ydk::Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots : public ydk::Entity
{
    public:
        PortSlots();
        ~PortSlots();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortSlot; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot> > port_slot;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot : public ydk::Entity
{
    public:
        PortSlot();
        ~PortSlot();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class Port; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port
        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes> basic_attributes;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port> port;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicAttributes; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes> basic_attributes;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes : public ydk::Entity
{
    public:
        BasicAttributes();
        ~BasicAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BasicInfo; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo
        class FruInfo; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo> fru_info;
        
}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime

        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
        std::shared_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        
}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime

class CardResetReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reset_unknown;
        static const ydk::Enum::YLeaf power_up;
        static const ydk::Enum::YLeaf parity_error;
        static const ydk::Enum::YLeaf clear_config_reset;
        static const ydk::Enum::YLeaf manual_reset;
        static const ydk::Enum::YLeaf watch_dog_timeout_reset;
        static const ydk::Enum::YLeaf resource_overflow_reset;
        static const ydk::Enum::YLeaf missing_task_reset;
        static const ydk::Enum::YLeaf low_voltage_reset;
        static const ydk::Enum::YLeaf controller_reset;
        static const ydk::Enum::YLeaf system_reset;
        static const ydk::Enum::YLeaf switchover_reset;
        static const ydk::Enum::YLeaf upgrade_reset;
        static const ydk::Enum::YLeaf downgrade_reset;
        static const ydk::Enum::YLeaf cache_error_reset;
        static const ydk::Enum::YLeaf device_driver_reset;
        static const ydk::Enum::YLeaf software_exception_reset;
        static const ydk::Enum::YLeaf restore_config_reset;
        static const ydk::Enum::YLeaf abort_rev_reset;
        static const ydk::Enum::YLeaf burn_boot_reset;
        static const ydk::Enum::YLeaf standby_cd_healthier_reset;
        static const ydk::Enum::YLeaf non_native_config_clear_reset;
        static const ydk::Enum::YLeaf memory_protection_error_reset;
        static const ydk::Enum::YLeaf card_reset_reason_max;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_SC_INVMGR_OPER_ */

