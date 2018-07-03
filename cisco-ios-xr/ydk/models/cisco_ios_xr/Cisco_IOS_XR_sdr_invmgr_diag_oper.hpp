#ifndef _CISCO_IOS_XR_SDR_INVMGR_DIAG_OPER_
#define _CISCO_IOS_XR_SDR_INVMGR_DIAG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sdr_invmgr_diag_oper {

class Diag : public ydk::Entity
{
    public:
        Diag();
        ~Diag();

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

        class Racks; //type: Diag::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks> racks;
        
}; // Diag


class Diag::Racks : public ydk::Entity
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

        class Rack; //type: Diag::Racks::Rack

        ydk::YList rack;
        
}; // Diag::Racks


class Diag::Racks::Rack : public ydk::Entity
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
        class PowerShelfs; //type: Diag::Racks::Rack::PowerShelfs
        class FanTraies; //type: Diag::Racks::Rack::FanTraies
        class Slots; //type: Diag::Racks::Rack::Slots
        class Chassis; //type: Diag::Racks::Rack::Chassis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs> power_shelfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies> fan_traies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots> slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Chassis> chassis;
        
}; // Diag::Racks::Rack


class Diag::Racks::Rack::PowerShelfs : public ydk::Entity
{
    public:
        PowerShelfs();
        ~PowerShelfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PowerShelf; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf

        ydk::YList power_shelf;
        
}; // Diag::Racks::Rack::PowerShelfs


class Diag::Racks::Rack::PowerShelfs::PowerShelf : public ydk::Entity
{
    public:
        PowerShelf();
        ~PowerShelf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_shelf_name; //type: string
        class PowerSupplies; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies> power_supplies;
        
}; // Diag::Racks::Rack::PowerShelfs::PowerShelf


class Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies : public ydk::Entity
{
    public:
        PowerSupplies();
        ~PowerSupplies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PowerSupply; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply

        ydk::YList power_supply;
        
}; // Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies


class Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply : public ydk::Entity
{
    public:
        PowerSupply();
        ~PowerSupply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_supply_name; //type: string
        class Information; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information> information;
        
}; // Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply


class Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

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
        class Rma; //type: Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma> rma;
        
}; // Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information


class Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma : public ydk::Entity
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

}; // Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma


class Diag::Racks::Rack::FanTraies : public ydk::Entity
{
    public:
        FanTraies();
        ~FanTraies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FanTray; //type: Diag::Racks::Rack::FanTraies::FanTray

        ydk::YList fan_tray;
        
}; // Diag::Racks::Rack::FanTraies


class Diag::Racks::Rack::FanTraies::FanTray : public ydk::Entity
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

        ydk::YLeaf fan_tray_name; //type: string
        class Fanses; //type: Diag::Racks::Rack::FanTraies::FanTray::Fanses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies::FanTray::Fanses> fanses;
        
}; // Diag::Racks::Rack::FanTraies::FanTray


class Diag::Racks::Rack::FanTraies::FanTray::Fanses : public ydk::Entity
{
    public:
        Fanses();
        ~Fanses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fans; //type: Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans

        ydk::YList fans;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Fanses


class Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans : public ydk::Entity
{
    public:
        Fans();
        ~Fans();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fans_name; //type: string
        class Information; //type: Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information> information;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans


class Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

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
        class Rma; //type: Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma> rma;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information


class Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma : public ydk::Entity
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

}; // Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma


class Diag::Racks::Rack::Slots : public ydk::Entity
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

        class Slot; //type: Diag::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // Diag::Racks::Rack::Slots


class Diag::Racks::Rack::Slots::Slot : public ydk::Entity
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
        class Instances; //type: Diag::Racks::Rack::Slots::Slot::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances> instances;
        
}; // Diag::Racks::Rack::Slots::Slot


class Diag::Racks::Rack::Slots::Slot::Instances : public ydk::Entity
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

        class Instance; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance

        ydk::YList instance;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances


class Diag::Racks::Rack::Slots::Slot::Instances::Instance : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Detail; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail> detail;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_operational_state; //type: string
        class CardInstance; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance> card_instance;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance : public ydk::Entity
{
    public:
        CardInstance();
        ~CardInstance();

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
        class Rma; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma> rma;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma : public ydk::Entity
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

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma


class Diag::Racks::Rack::Chassis : public ydk::Entity
{
    public:
        Chassis();
        ~Chassis();

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
        class Rma; //type: Diag::Racks::Rack::Chassis::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag::Racks::Rack::Chassis::Rma> rma;
        
}; // Diag::Racks::Rack::Chassis


class Diag::Racks::Rack::Chassis::Rma : public ydk::Entity
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

}; // Diag::Racks::Rack::Chassis::Rma


}
}

#endif /* _CISCO_IOS_XR_SDR_INVMGR_DIAG_OPER_ */

