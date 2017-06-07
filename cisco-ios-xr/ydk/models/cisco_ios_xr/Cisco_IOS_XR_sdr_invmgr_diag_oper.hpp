#ifndef _CISCO_IOS_XR_SDR_INVMGR_DIAG_OPER_
#define _CISCO_IOS_XR_SDR_INVMGR_DIAG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_sdr_invmgr_diag_oper {

class Diag : public Entity
{
    public:
        Diag();
        ~Diag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Racks; //type: Diag::Racks

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks> racks;
        
}; // Diag


class Diag::Racks : public Entity
{
    public:
        Racks();
        ~Racks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rack; //type: Diag::Racks::Rack

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack> > rack;
        
}; // Diag::Racks


class Diag::Racks::Rack : public Entity
{
    public:
        Rack();
        ~Rack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rack_name; //type: string
        class PowerShelfs; //type: Diag::Racks::Rack::PowerShelfs
        class FanTraies; //type: Diag::Racks::Rack::FanTraies
        class Slots; //type: Diag::Racks::Rack::Slots
        class Chassis; //type: Diag::Racks::Rack::Chassis

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Chassis> chassis;
        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies> fan_traies;
        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs> power_shelfs;
        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots> slots;
        
}; // Diag::Racks::Rack


class Diag::Racks::Rack::PowerShelfs : public Entity
{
    public:
        PowerShelfs();
        ~PowerShelfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PowerShelf; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs::PowerShelf> > power_shelf;
        
}; // Diag::Racks::Rack::PowerShelfs


class Diag::Racks::Rack::PowerShelfs::PowerShelf : public Entity
{
    public:
        PowerShelf();
        ~PowerShelf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf power_shelf_name; //type: string
        class PowerSupplies; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies> power_supplies;
        
}; // Diag::Racks::Rack::PowerShelfs::PowerShelf


class Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies : public Entity
{
    public:
        PowerSupplies();
        ~PowerSupplies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PowerSupply; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply> > power_supply;
        
}; // Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies


class Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply : public Entity
{
    public:
        PowerSupply();
        ~PowerSupply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf power_supply_name; //type: string
        class Information; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information> information;
        
}; // Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply


class Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information : public Entity
{
    public:
        Information();
        ~Information();

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
        class Rma; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma> rma;
        
}; // Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information


class Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma : public Entity
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

}; // Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma


class Diag::Racks::Rack::FanTraies : public Entity
{
    public:
        FanTraies();
        ~FanTraies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FanTray; //type: Diag::Racks::Rack::FanTraies::FanTray

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies::FanTray> > fan_tray;
        
}; // Diag::Racks::Rack::FanTraies


class Diag::Racks::Rack::FanTraies::FanTray : public Entity
{
    public:
        FanTray();
        ~FanTray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fan_tray_name; //type: string
        class Fanses; //type: Diag::Racks::Rack::FanTraies::FanTray::Fanses

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies::FanTray::Fanses> fanses;
        
}; // Diag::Racks::Rack::FanTraies::FanTray


class Diag::Racks::Rack::FanTraies::FanTray::Fanses : public Entity
{
    public:
        Fanses();
        ~Fanses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fans; //type: Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans> > fans;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Fanses


class Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans : public Entity
{
    public:
        Fans();
        ~Fans();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fans_name; //type: string
        class Information; //type: Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information> information;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans


class Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information : public Entity
{
    public:
        Information();
        ~Information();

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
        class Rma; //type: Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma> rma;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information


class Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma : public Entity
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

}; // Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma


class Diag::Racks::Rack::Slots : public Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Slot; //type: Diag::Racks::Rack::Slots::Slot

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot> > slot;
        
}; // Diag::Racks::Rack::Slots


class Diag::Racks::Rack::Slots::Slot : public Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf slot_name; //type: string
        class Instances; //type: Diag::Racks::Rack::Slots::Slot::Instances

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances> instances;
        
}; // Diag::Racks::Rack::Slots::Slot


class Diag::Racks::Rack::Slots::Slot::Instances : public Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Instance; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance> > instance;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances


class Diag::Racks::Rack::Slots::Slot::Instances::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Detail; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail> detail;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_operational_state; //type: string
        class CardInstance; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance> card_instance;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance : public Entity
{
    public:
        CardInstance();
        ~CardInstance();

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
        class Rma; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma> rma;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma : public Entity
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

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma


class Diag::Racks::Rack::Chassis : public Entity
{
    public:
        Chassis();
        ~Chassis();

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
        class Rma; //type: Diag::Racks::Rack::Chassis::Rma

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Chassis::Rma> rma;
        
}; // Diag::Racks::Rack::Chassis


class Diag::Racks::Rack::Chassis::Rma : public Entity
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

}; // Diag::Racks::Rack::Chassis::Rma


}
}

#endif /* _CISCO_IOS_XR_SDR_INVMGR_DIAG_OPER_ */

