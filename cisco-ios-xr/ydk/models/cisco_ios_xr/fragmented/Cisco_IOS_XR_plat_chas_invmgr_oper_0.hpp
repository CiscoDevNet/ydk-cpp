#ifndef _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_0_
#define _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_plat_chas_invmgr_oper {

class Platform : public Entity
{
    public:
        Platform();
        ~Platform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Racks; //type: Platform::Racks

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks> racks;


}; // Platform


class Platform::Racks : public Entity
{
    public:
        Racks();
        ~Racks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rack; //type: Platform::Racks::Rack

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks::Rack> > rack;


}; // Platform::Racks


class Platform::Racks::Rack : public Entity
{
    public:
        Rack();
        ~Rack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rack_name; //type: string

        class Slots; //type: Platform::Racks::Rack::Slots

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks::Rack::Slots> slots;


}; // Platform::Racks::Rack


class Platform::Racks::Rack::Slots : public Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Slot; //type: Platform::Racks::Rack::Slots::Slot

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks::Rack::Slots::Slot> > slot;


}; // Platform::Racks::Rack::Slots


class Platform::Racks::Rack::Slots::Slot : public Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slot_name; //type: string

        class Instances; //type: Platform::Racks::Rack::Slots::Slot::Instances
        class Vm; //type: Platform::Racks::Rack::Slots::Slot::Vm
        class State; //type: Platform::Racks::Rack::Slots::Slot::State

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks::Rack::Slots::Slot::Instances> instances;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks::Rack::Slots::Slot::State> state;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks::Rack::Slots::Slot::Vm> vm;


}; // Platform::Racks::Rack::Slots::Slot


class Platform::Racks::Rack::Slots::Slot::Instances : public Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Instance; //type: Platform::Racks::Rack::Slots::Slot::Instances::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks::Rack::Slots::Slot::Instances::Instance> > instance;


}; // Platform::Racks::Rack::Slots::Slot::Instances


class Platform::Racks::Rack::Slots::Slot::Instances::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string

        class State; //type: Platform::Racks::Rack::Slots::Slot::Instances::Instance::State

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform::Racks::Rack::Slots::Slot::Instances::Instance::State> state;


}; // Platform::Racks::Rack::Slots::Slot::Instances::Instance


class Platform::Racks::Rack::Slots::Slot::Instances::Instance::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf card_type; //type: string
        YLeaf card_redundancy_state; //type: CardRedundancyStateEnum
        YLeaf plim; //type: string
        YLeaf state; //type: NodeStateEnum
        YLeaf is_monitored; //type: boolean
        YLeaf is_powered; //type: boolean
        YLeaf is_shutdown; //type: boolean
        YLeaf admin_state; //type: string



}; // Platform::Racks::Rack::Slots::Slot::Instances::Instance::State


class Platform::Racks::Rack::Slots::Slot::Vm : public Entity
{
    public:
        Vm();
        ~Vm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_descriptiton; //type: string
        YLeaf red_role; //type: string
        YLeaf partner_name; //type: string
        YLeaf software_status; //type: string
        YLeaf node_ip; //type: string



}; // Platform::Racks::Rack::Slots::Slot::Vm


class Platform::Racks::Rack::Slots::Slot::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf card_type; //type: string
        YLeaf card_redundancy_state; //type: CardRedundancyStateEnum
        YLeaf plim; //type: string
        YLeaf state; //type: NodeStateEnum
        YLeaf is_monitored; //type: boolean
        YLeaf is_powered; //type: boolean
        YLeaf is_shutdown; //type: boolean
        YLeaf admin_state; //type: string



}; // Platform::Racks::Rack::Slots::Slot::State

class PlatformInventory : public Entity
{
    public:
        PlatformInventory();
        ~PlatformInventory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Racks; //type: PlatformInventory::Racks

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks> racks;


}; // PlatformInventory


class PlatformInventory::Racks : public Entity
{
    public:
        Racks();
        ~Racks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rack; //type: PlatformInventory::Racks::Rack

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack> > rack;


}; // PlatformInventory::Racks


class PlatformInventory::Racks::Rack : public Entity
{
    public:
        Rack();
        ~Rack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Slots; //type: PlatformInventory::Racks::Rack::Slots
        class Attributes; //type: PlatformInventory::Racks::Rack::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots> slots;


}; // PlatformInventory::Racks::Rack


class PlatformInventory::Racks::Rack::Slots : public Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Slot; //type: PlatformInventory::Racks::Rack::Slots::Slot

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot> > slot;


}; // PlatformInventory::Racks::Rack::Slots


class PlatformInventory::Racks::Rack::Slots::Slot : public Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Cards; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards> cards;


}; // PlatformInventory::Racks::Rack::Slots::Slot


class PlatformInventory::Racks::Rack::Slots::Slot::Cards : public Entity
{
    public:
        Cards();
        ~Cards();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Card; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card> > card;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card : public Entity
{
    public:
        Card();
        ~Card();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class HardwareInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation
        class SubSlots; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots
        class PortSlots; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots
        class HwComponents; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation> hardware_information;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents> hw_components;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots> port_slots;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors> sensors;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots> sub_slots;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation : public Entity
{
    public:
        HardwareInformation();
        ~HardwareInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProcessorInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation
        class MotherboardInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation
        class BootflashInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation
        class DiskInformation; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation> bootflash_information;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation> disk_information;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation> motherboard_information;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation> processor_information;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation : public Entity
{
    public:
        ProcessorInformation();
        ~ProcessorInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processor_type; //type: string
        YLeaf speed; //type: string
        YLeaf revision; //type: string



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::ProcessorInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation : public Entity
{
    public:
        MotherboardInformation();
        ~MotherboardInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf main_memory_size; //type: uint64
        YLeaf nvram_size; //type: uint64

        class Rom; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom
        class Bootflash; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash
        class Processor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash> bootflash;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor> processor;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom> rom;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom : public Entity
{
    public:
        Rom();
        ~Rom();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf image_name; //type: string
        YLeaf major_version; //type: uint32
        YLeaf minor_version; //type: uint32
        YLeaf micro_image_version; //type: string
        YLeaf platform_specific; //type: string
        YLeaf release_type; //type: string



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Rom


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash : public Entity
{
    public:
        Bootflash();
        ~Bootflash();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf image_name; //type: string
        YLeaf platform_type; //type: string
        YLeaf major_version; //type: uint32
        YLeaf minor_version; //type: uint32
        YLeaf micro_image_version; //type: string
        YLeaf platform_specific; //type: string
        YLeaf release_type; //type: string
        YLeaf bootflash_type; //type: string
        YLeaf bootflash_size; //type: uint32
        YLeaf sector_size; //type: uint32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Bootflash


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor : public Entity
{
    public:
        Processor();
        ~Processor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processor_type; //type: string
        YLeaf speed; //type: string
        YLeaf revision; //type: string



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::MotherboardInformation::Processor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation : public Entity
{
    public:
        BootflashInformation();
        ~BootflashInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf image_name; //type: string
        YLeaf platform_type; //type: string
        YLeaf major_version; //type: uint32
        YLeaf minor_version; //type: uint32
        YLeaf micro_image_version; //type: string
        YLeaf platform_specific; //type: string
        YLeaf release_type; //type: string
        YLeaf bootflash_type; //type: string
        YLeaf bootflash_size; //type: uint32
        YLeaf sector_size; //type: uint32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::BootflashInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation : public Entity
{
    public:
        DiskInformation();
        ~DiskInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disk_name; //type: string
        YLeaf disk_size; //type: uint32
        YLeaf sector_size; //type: uint32

        class Disks; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks> > disks;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks : public Entity
{
    public:
        Disks();
        ~Disks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disk_name; //type: string
        YLeaf disk_size; //type: uint32
        YLeaf sector_size; //type: uint32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HardwareInformation::DiskInformation::Disks


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots : public Entity
{
    public:
        SubSlots();
        ~SubSlots();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SubSlot; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot> > sub_slot;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot : public Entity
{
    public:
        SubSlot();
        ~SubSlot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Module; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module> module;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module : public Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PortSlots; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots> port_slots;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors> sensors;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots : public Entity
{
    public:
        PortSlots();
        ~PortSlots();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PortSlot; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot> > port_slot;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot : public Entity
{
    public:
        PortSlot();
        ~PortSlot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Portses; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses> portses;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors> sensors;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses : public Entity
{
    public:
        Portses();
        ~Portses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ports; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports> > ports;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports : public Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class HwComponents; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents> hw_components;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors> sensors;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents : public Entity
{
    public:
        HwComponents();
        ~HwComponents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HwComponent; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent> > hw_component;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent : public Entity
{
    public:
        HwComponent();
        ~HwComponent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors> sensors;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots : public Entity
{
    public:
        PortSlots();
        ~PortSlots();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PortSlot; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot> > port_slot;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot : public Entity
{
    public:
        PortSlot();
        ~PortSlot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Portses; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses> portses;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors> sensors;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses : public Entity
{
    public:
        Portses();
        ~Portses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ports; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports> > ports;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports : public Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class HwComponents; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents
        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents> hw_components;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors> sensors;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents : public Entity
{
    public:
        HwComponents();
        ~HwComponents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HwComponent; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent> > hw_component;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent : public Entity
{
    public:
        HwComponent();
        ~HwComponent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors> sensors;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Portses::Ports::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents : public Entity
{
    public:
        HwComponents();
        ~HwComponents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HwComponent; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent> > hw_component;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent : public Entity
{
    public:
        HwComponent();
        ~HwComponent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Sensors; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors
        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors> sensors;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::LastOperationalStateChange


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime : public Entity
{
    public:
        ModuleUpTime();
        ~ModuleUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Attributes::FruInfo::ModuleUpTime


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors : public Entity
{
    public:
        Sensors();
        ~Sensors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sensor; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor

        std::vector<std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor> > sensor;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Attributes; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes> attributes;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BasicInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo
        class FruInfo; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo> basic_info;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo> fru_info;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo : public Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf model_name; //type: string
        YLeaf hardware_revision; //type: string
        YLeaf serial_number; //type: string
        YLeaf firmware_revision; //type: string
        YLeaf software_revision; //type: string
        YLeaf vendor_type; //type: string
        YLeaf is_field_replaceable_unit; //type: boolean



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::BasicInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo : public Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf module_administrative_state; //type: InvAdminStateEnum
        YLeaf module_power_administrative_state; //type: InvPowerAdminStateEnum
        YLeaf module_operational_state; //type: InvCardStateEnum
        YLeaf module_monitor_state; //type: InvMonitorStateEnum
        YLeaf module_reset_reason; //type: InvResetReasonEnum

        class LastOperationalStateChange; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange
        class ModuleUpTime; //type: PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime

        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::ModuleUpTime> module_up_time;


}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo


class PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange : public Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_in_seconds; //type: int32
        YLeaf time_in_nano_seconds; //type: int32



}; // PlatformInventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Attributes::FruInfo::LastOperationalStateChange

class InvAdminStateEnum : public Enum
{
    public:
        static const Enum::YLeaf admin_state_invalid;
        static const Enum::YLeaf admin_up;
        static const Enum::YLeaf admin_down;

};

class InvResetReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf module_reset_reason_unknown;
        static const Enum::YLeaf module_reset_reason_powerup;
        static const Enum::YLeaf module_reset_reason_user_shutdown;
        static const Enum::YLeaf module_reset_reason_user_reload;
        static const Enum::YLeaf module_reset_reason_auto_reload;
        static const Enum::YLeaf module_reset_reason_environment;
        static const Enum::YLeaf module_reset_reason_user_unpower;

};

class InvCardStateEnum : public Enum
{
    public:
        static const Enum::YLeaf inv_card_not_present;
        static const Enum::YLeaf inv_card_present;
        static const Enum::YLeaf inv_card_reset;
        static const Enum::YLeaf inv_card_booting;
        static const Enum::YLeaf inv_card_mbi_booting;
        static const Enum::YLeaf inv_card_running_mbi;
        static const Enum::YLeaf inv_card_running_ena;
        static const Enum::YLeaf inv_card_bring_down;
        static const Enum::YLeaf inv_card_ena_failure;
        static const Enum::YLeaf inv_card_f_diag_run;
        static const Enum::YLeaf inv_card_f_diag_failure;
        static const Enum::YLeaf inv_card_powered;
        static const Enum::YLeaf inv_card_unpowered;
        static const Enum::YLeaf inv_card_mdr;
        static const Enum::YLeaf inv_card_mdr_running_mbi;
        static const Enum::YLeaf inv_card_main_t_mode;
        static const Enum::YLeaf inv_card_admin_down;
        static const Enum::YLeaf inv_card_no_mon;
        static const Enum::YLeaf inv_card_unknown;
        static const Enum::YLeaf inv_card_failed;
        static const Enum::YLeaf inv_card_ok;
        static const Enum::YLeaf inv_card_missing;
        static const Enum::YLeaf inv_card_field_diag_downloading;
        static const Enum::YLeaf inv_card_field_diag_unmonitor;
        static const Enum::YLeaf inv_card_fabric_field_diag_unmonitor;
        static const Enum::YLeaf inv_card_field_diag_rp_launching;
        static const Enum::YLeaf inv_card_field_diag_running;
        static const Enum::YLeaf inv_card_field_diag_pass;
        static const Enum::YLeaf inv_card_field_diag_fail;
        static const Enum::YLeaf inv_card_field_diag_timeout;
        static const Enum::YLeaf inv_card_disabled;
        static const Enum::YLeaf inv_card_spa_booting;
        static const Enum::YLeaf inv_card_not_allowed_online;
        static const Enum::YLeaf inv_card_stopped;
        static const Enum::YLeaf inv_card_incompatible_fw_ver;
        static const Enum::YLeaf inv_card_fpd_hold;
        static const Enum::YLeaf inv_card_node_prep;
        static const Enum::YLeaf inv_card_updating_fpd;
        static const Enum::YLeaf inv_card_num_states;

};

class InvMonitorStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unmonitored;
        static const Enum::YLeaf monitored;

};

class NodeStateEnum : public Enum
{
    public:
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf present;
        static const Enum::YLeaf reset;
        static const Enum::YLeaf rommon;
        static const Enum::YLeaf mbi_boot;
        static const Enum::YLeaf mbi_run;
        static const Enum::YLeaf xr_run;
        static const Enum::YLeaf bring_down;
        static const Enum::YLeaf xr_fail;
        static const Enum::YLeaf fdiag_run;
        static const Enum::YLeaf fdiag_fail;
        static const Enum::YLeaf power;
        static const Enum::YLeaf unpower;
        static const Enum::YLeaf mdr_warm_reload;
        static const Enum::YLeaf mdr_mbi_run;
        static const Enum::YLeaf maintenance_mode;
        static const Enum::YLeaf admin_down;
        static const Enum::YLeaf not_monitor;
        static const Enum::YLeaf unknown_card;
        static const Enum::YLeaf failed;
        static const Enum::YLeaf ok;
        static const Enum::YLeaf missing;
        static const Enum::YLeaf diag_download;
        static const Enum::YLeaf diag_not_monitor;
        static const Enum::YLeaf fabric_diag_not_monitor;
        static const Enum::YLeaf diag_rp_launch;
        static const Enum::YLeaf diag_run;
        static const Enum::YLeaf diag_pass;
        static const Enum::YLeaf diag_fail;
        static const Enum::YLeaf diag_timeout;
        static const Enum::YLeaf disable;
        static const Enum::YLeaf spa_boot;
        static const Enum::YLeaf not_allowed_online;
        static const Enum::YLeaf stop;
        static const Enum::YLeaf incomp_version;
        static const Enum::YLeaf fpd_hold;
        static const Enum::YLeaf xr_preparation;
        static const Enum::YLeaf sync_ready;
        static const Enum::YLeaf xr_isolate;
        static const Enum::YLeaf ready;
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf operational;
        static const Enum::YLeaf operational_lock;
        static const Enum::YLeaf going_down;
        static const Enum::YLeaf going_offline;
        static const Enum::YLeaf going_online;
        static const Enum::YLeaf offline;
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf max;
        static const Enum::YLeaf unknown;

};

class CardRedundancyStateEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf standby;

};

class InvPowerAdminStateEnum : public Enum
{
    public:
        static const Enum::YLeaf admin_power_invalid;
        static const Enum::YLeaf admin_on;
        static const Enum::YLeaf admin_off;

};


}
}

#endif /* _CISCO_IOS_XR_PLAT_CHAS_INVMGR_OPER_0_ */

