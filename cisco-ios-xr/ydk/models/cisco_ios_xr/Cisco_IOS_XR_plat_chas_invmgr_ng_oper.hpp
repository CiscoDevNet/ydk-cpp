#ifndef _CISCO_IOS_XR_PLAT_CHAS_INVMGR_NG_OPER_
#define _CISCO_IOS_XR_PLAT_CHAS_INVMGR_NG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_plat_chas_invmgr_ng_oper {

class Platform : public ydk::Entity
{
    public:
        Platform();
        ~Platform();

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

        class Racks; //type: Platform::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::Platform::Racks> racks;
        
}; // Platform


class Platform::Racks : public ydk::Entity
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

        class Rack; //type: Platform::Racks::Rack

        ydk::YList rack;
        
}; // Platform::Racks


class Platform::Racks::Rack : public ydk::Entity
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

        ydk::YLeaf rack_name; //type: string
        class Slots; //type: Platform::Racks::Rack::Slots

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::Platform::Racks::Rack::Slots> slots;
        
}; // Platform::Racks::Rack


class Platform::Racks::Rack::Slots : public ydk::Entity
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

        class Slot; //type: Platform::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // Platform::Racks::Rack::Slots


class Platform::Racks::Rack::Slots::Slot : public ydk::Entity
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

        ydk::YLeaf slot_name; //type: string
        class Instances; //type: Platform::Racks::Rack::Slots::Slot::Instances
        class Vm; //type: Platform::Racks::Rack::Slots::Slot::Vm
        class State; //type: Platform::Racks::Rack::Slots::Slot::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::Platform::Racks::Rack::Slots::Slot::Instances> instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::Platform::Racks::Rack::Slots::Slot::Vm> vm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::Platform::Racks::Rack::Slots::Slot::State> state;
        
}; // Platform::Racks::Rack::Slots::Slot


class Platform::Racks::Rack::Slots::Slot::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Platform::Racks::Rack::Slots::Slot::Instances::Instance

        ydk::YList instance;
        
}; // Platform::Racks::Rack::Slots::Slot::Instances


class Platform::Racks::Rack::Slots::Slot::Instances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        class State; //type: Platform::Racks::Rack::Slots::Slot::Instances::Instance::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::Platform::Racks::Rack::Slots::Slot::Instances::Instance::State> state;
        
}; // Platform::Racks::Rack::Slots::Slot::Instances::Instance


class Platform::Racks::Rack::Slots::Slot::Instances::Instance::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_type; //type: string
        ydk::YLeaf card_redundancy_state; //type: CardRedundancyState
        ydk::YLeaf plim; //type: string
        ydk::YLeaf state; //type: NodeState
        ydk::YLeaf is_monitored; //type: boolean
        ydk::YLeaf is_powered; //type: boolean
        ydk::YLeaf is_shutdown; //type: boolean
        ydk::YLeaf admin_state; //type: string

}; // Platform::Racks::Rack::Slots::Slot::Instances::Instance::State


class Platform::Racks::Rack::Slots::Slot::Vm : public ydk::Entity
{
    public:
        Vm();
        ~Vm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf red_role; //type: string
        ydk::YLeaf partner_name; //type: string
        ydk::YLeaf software_status; //type: string
        ydk::YLeaf node_ip; //type: string

}; // Platform::Racks::Rack::Slots::Slot::Vm


class Platform::Racks::Rack::Slots::Slot::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_type; //type: string
        ydk::YLeaf card_redundancy_state; //type: CardRedundancyState
        ydk::YLeaf plim; //type: string
        ydk::YLeaf state; //type: NodeState
        ydk::YLeaf is_monitored; //type: boolean
        ydk::YLeaf is_powered; //type: boolean
        ydk::YLeaf is_shutdown; //type: boolean
        ydk::YLeaf admin_state; //type: string

}; // Platform::Racks::Rack::Slots::Slot::State

class PlatformInventory : public ydk::Entity
{
    public:
        PlatformInventory();
        ~PlatformInventory();

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

        class Racks; //type: PlatformInventory::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks> racks;
        
}; // PlatformInventory


class PlatformInventory::Racks : public ydk::Entity
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

        class Rack; //type: PlatformInventory::Racks::Rack

        ydk::YList rack;
        
}; // PlatformInventory::Racks


class PlatformInventory::Racks::Rack : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Slots; //type: PlatformInventory::Racks::Rack::Slots
        class Attributes; //type: PlatformInventory::Racks::Rack::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots> slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack


class PlatformInventory::Racks::Rack::Slots : public ydk::Entity
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

        class Slot; //type: PlatformInventory::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // PlatformInventory::Racks::Rack::Slots


class PlatformInventory::Racks::Rack::Slots::Slot : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Cards; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards> cards;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot


class PlatformInventory::Racks::Rack::Slots::Slot::Cards : public ydk::Entity
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

        class Card; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card

        ydk::YList card;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class HardwareInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation
        class SubSlots; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots
        class Portses; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses
        class PortSlots; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots
        class HwComponents; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation> hardware_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots> sub_slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses> portses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots> port_slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents> hw_components;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation : public ydk::Entity
{
    public:
        HardwareInformation();
        ~HardwareInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessorInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation
        class MotherboardInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation
        class BootflashInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation
        class DiskInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation> processor_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation> motherboard_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation> bootflash_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation> disk_information;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation : public ydk::Entity
{
    public:
        ProcessorInformation();
        ~ProcessorInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processor_type; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf revision; //type: string

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation : public ydk::Entity
{
    public:
        MotherboardInformation();
        ~MotherboardInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_memory_size; //type: uint64
        ydk::YLeaf nvram_size; //type: uint64
        class Rom; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom
        class Bootflash; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash
        class Processor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom> rom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash> bootflash;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor> processor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom : public ydk::Entity
{
    public:
        Rom();
        ~Rom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf image_name; //type: string
        ydk::YLeaf major_version; //type: uint32
        ydk::YLeaf minor_version; //type: uint32
        ydk::YLeaf micro_image_version; //type: string
        ydk::YLeaf platform_specific; //type: string
        ydk::YLeaf release_type; //type: string

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash : public ydk::Entity
{
    public:
        Bootflash();
        ~Bootflash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf image_name; //type: string
        ydk::YLeaf platform_type; //type: string
        ydk::YLeaf major_version; //type: uint32
        ydk::YLeaf minor_version; //type: uint32
        ydk::YLeaf micro_image_version; //type: string
        ydk::YLeaf platform_specific; //type: string
        ydk::YLeaf release_type; //type: string
        ydk::YLeaf bootflash_type; //type: string
        ydk::YLeaf bootflash_size; //type: uint32
        ydk::YLeaf sector_size; //type: uint32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor : public ydk::Entity
{
    public:
        Processor();
        ~Processor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processor_type; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf revision; //type: string

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation : public ydk::Entity
{
    public:
        BootflashInformation();
        ~BootflashInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf image_name; //type: string
        ydk::YLeaf platform_type; //type: string
        ydk::YLeaf major_version; //type: uint32
        ydk::YLeaf minor_version; //type: uint32
        ydk::YLeaf micro_image_version; //type: string
        ydk::YLeaf platform_specific; //type: string
        ydk::YLeaf release_type; //type: string
        ydk::YLeaf bootflash_type; //type: string
        ydk::YLeaf bootflash_size; //type: uint32
        ydk::YLeaf sector_size; //type: uint32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation : public ydk::Entity
{
    public:
        DiskInformation();
        ~DiskInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disk_name; //type: string
        ydk::YLeaf disk_size; //type: uint32
        ydk::YLeaf sector_size; //type: uint32
        class Disks; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks

        ydk::YList disks;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks : public ydk::Entity
{
    public:
        Disks();
        ~Disks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disk_name; //type: string
        ydk::YLeaf disk_size; //type: uint32
        ydk::YLeaf sector_size; //type: uint32

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots : public ydk::Entity
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

        class SubSlot; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot

        ydk::YList sub_slot;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Module; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module> module;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module : public ydk::Entity
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

        class PortSlots; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots> port_slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots : public ydk::Entity
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

        class PortSlot; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot

        ydk::YList port_slot;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Portses; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses> portses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses : public ydk::Entity
{
    public:
        Portses();
        ~Portses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ports; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports

        ydk::YList ports;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class HwComponents; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents> hw_components;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents : public ydk::Entity
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

        class HwComponent; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent

        ydk::YList hw_component;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses : public ydk::Entity
{
    public:
        Portses();
        ~Portses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ports; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports

        ydk::YList ports;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class HwComponents; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents> hw_components;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents : public ydk::Entity
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

        class HwComponent; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent

        ydk::YList hw_component;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Portses::Ports::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots : public ydk::Entity
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

        class PortSlot; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot

        ydk::YList port_slot;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Portses; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses> portses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses : public ydk::Entity
{
    public:
        Portses();
        ~Portses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ports; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports

        ydk::YList ports;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class HwComponents; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents> hw_components;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents : public ydk::Entity
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

        class HwComponent; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent

        ydk::YList hw_component;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents : public ydk::Entity
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

        class HwComponent; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent

        ydk::YList hw_component;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors> sensors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors : public ydk::Entity
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

        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor

        ydk::YList sensor;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes> attributes;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Slots::Slot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Attributes : public ydk::Entity
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

        class BasicInfo; //type: PlatformInventory::Racks::Rack::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Attributes::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo> fru_info;
        
}; // PlatformInventory::Racks::Rack::Attributes


class PlatformInventory::Racks::Rack::Attributes::BasicInfo : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf is_field_replaceable_unit; //type: boolean

}; // PlatformInventory::Racks::Rack::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Attributes::FruInfo : public ydk::Entity
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
        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_plat_chas_invmgr_ng_oper::PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime> module_up_time;
        
}; // PlatformInventory::Racks::Rack::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime : public ydk::Entity
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

}; // PlatformInventory::Racks::Rack::Attributes::FruInfo::ModuleUpTime

class InvAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_state_invalid;
        static const ydk::Enum::YLeaf admin_up;
        static const ydk::Enum::YLeaf admin_down;

};

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

};

class InvMonitorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unmonitored;
        static const ydk::Enum::YLeaf monitored;

};

class NodeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_present;
        static const ydk::Enum::YLeaf present;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf rommon;
        static const ydk::Enum::YLeaf mbi_boot;
        static const ydk::Enum::YLeaf mbi_run;
        static const ydk::Enum::YLeaf xr_run;
        static const ydk::Enum::YLeaf bring_down;
        static const ydk::Enum::YLeaf xr_fail;
        static const ydk::Enum::YLeaf fdiag_run;
        static const ydk::Enum::YLeaf fdiag_fail;
        static const ydk::Enum::YLeaf power;
        static const ydk::Enum::YLeaf unpower;
        static const ydk::Enum::YLeaf mdr_warm_reload;
        static const ydk::Enum::YLeaf mdr_mbi_run;
        static const ydk::Enum::YLeaf maintenance_mode;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf not_monitor;
        static const ydk::Enum::YLeaf unknown_card;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf missing;
        static const ydk::Enum::YLeaf diag_download;
        static const ydk::Enum::YLeaf diag_not_monitor;
        static const ydk::Enum::YLeaf fabric_diag_not_monitor;
        static const ydk::Enum::YLeaf diag_rp_launch;
        static const ydk::Enum::YLeaf diag_run;
        static const ydk::Enum::YLeaf diag_pass;
        static const ydk::Enum::YLeaf diag_fail;
        static const ydk::Enum::YLeaf diag_timeout;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf spa_boot;
        static const ydk::Enum::YLeaf not_allowed_online;
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf incomp_version;
        static const ydk::Enum::YLeaf fpd_hold;
        static const ydk::Enum::YLeaf xr_preparation;
        static const ydk::Enum::YLeaf sync_ready;
        static const ydk::Enum::YLeaf xr_isolate;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf operational_lock;
        static const ydk::Enum::YLeaf going_down;
        static const ydk::Enum::YLeaf going_offline;
        static const ydk::Enum::YLeaf going_online;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf max;
        static const ydk::Enum::YLeaf unknown;

};

class CardRedundancyState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

};

class InvPowerAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_power_invalid;
        static const ydk::Enum::YLeaf admin_on;
        static const ydk::Enum::YLeaf admin_off;

};


}
}

#endif /* _CISCO_IOS_XR_PLAT_CHAS_INVMGR_NG_OPER_ */

