
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_sdr_invmgr_diag_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_sdr_invmgr_diag_oper {

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::Rma()
    :
    	rma_history{YType::str, "rma-history"},
	 rma_number{YType::str, "rma-number"},
	 test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "information";
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::~Rma()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::get_children()
{
    return children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Information()
    :
    	asset_alias{YType::str, "asset-alias"},
	 asset_id{YType::str, "asset-id"},
	 base_mac_address1{YType::str, "base-mac-address1"},
	 base_mac_address2{YType::str, "base-mac-address2"},
	 base_mac_address3{YType::str, "base-mac-address3"},
	 base_mac_address4{YType::str, "base-mac-address4"},
	 block_checksum{YType::str, "block-checksum"},
	 block_count{YType::str, "block-count"},
	 block_length{YType::str, "block-length"},
	 block_signature{YType::str, "block-signature"},
	 block_version{YType::str, "block-version"},
	 chassis_sid{YType::str, "chassis-sid"},
	 clei{YType::str, "clei"},
	 controller_family{YType::str, "controller-family"},
	 controller_type{YType::str, "controller-type"},
	 description{YType::str, "description"},
	 dev_num1{YType::str, "dev-num1"},
	 dev_num2{YType::str, "dev-num2"},
	 dev_num3{YType::str, "dev-num3"},
	 dev_num4{YType::str, "dev-num4"},
	 dev_num5{YType::str, "dev-num5"},
	 dev_num6{YType::str, "dev-num6"},
	 dev_num7{YType::str, "dev-num7"},
	 eci{YType::str, "eci"},
	 eeprom_size{YType::str, "eeprom-size"},
	 engineer_use{YType::str, "engineer-use"},
	 fru_major_type{YType::str, "fru-major-type"},
	 fru_minor_type{YType::str, "fru-minor-type"},
	 hw_version{YType::str, "hw-version"},
	 hwid{YType::str, "hwid"},
	 idprom_format_rev{YType::str, "idprom-format-rev"},
	 mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
	 mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
	 mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
	 mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
	 manu_test_data{YType::str, "manu-test-data"},
	 mfg_bits{YType::str, "mfg-bits"},
	 mfg_deviation{YType::str, "mfg-deviation"},
	 oem_string{YType::str, "oem-string"},
	 part_number{YType::str, "part-number"},
	 part_revision{YType::str, "part-revision"},
	 pca_num{YType::str, "pca-num"},
	 pcavid{YType::str, "pcavid"},
	 pcb_serial_num{YType::str, "pcb-serial-num"},
	 pid{YType::str, "pid"},
	 power_consumption{YType::str, "power-consumption"},
	 power_supply_type{YType::str, "power-supply-type"},
	 product_id{YType::str, "product-id"},
	 rma_code{YType::str, "rma-code"},
	 serial_number{YType::str, "serial-number"},
	 snmpoid{YType::str, "snmpoid"},
	 top_assem_part_num{YType::str, "top-assem-part-num"},
	 top_assem_vid{YType::str, "top-assem-vid"},
	 udi_description{YType::str, "udi-description"},
	 udi_name{YType::str, "udi-name"},
	 vid{YType::str, "vid"}
    	,
    rma(std::make_unique<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma>())
{
    rma->parent = this;
    children["rma"] = rma.get();

    yang_name = "information"; yang_parent_name = "power-supply";
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::~Information()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && is_set(rma->operation));
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rma")
    {
        if(rma != nullptr)
        {
            children["rma"] = rma.get();
        }
        else
        {
            rma = std::make_unique<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma>();
            rma->parent = this;
            children["rma"] = rma.get();
        }
        return children.at("rma");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::get_children()
{
    if(children.find("rma") == children.end())
    {
        if(rma != nullptr)
        {
            children["rma"] = rma.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::PowerSupply()
    :
    	power_supply_name{YType::str, "power-supply-name"}
    	,
    information(std::make_unique<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information>())
{
    information->parent = this;
    children["information"] = information.get();

    yang_name = "power-supply"; yang_parent_name = "power-supplies";
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::~PowerSupply()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::has_data() const
{
    return power_supply_name.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::has_operation() const
{
    return is_set(operation)
	|| is_set(power_supply_name.operation)
	|| (information !=  nullptr && is_set(information->operation));
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply" <<"[power-supply-name='" <<power_supply_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_supply_name.is_set || is_set(power_supply_name.operation)) leaf_name_data.push_back(power_supply_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "information")
    {
        if(information != nullptr)
        {
            children["information"] = information.get();
        }
        else
        {
            information = std::make_unique<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information>();
            information->parent = this;
            children["information"] = information.get();
        }
        return children.at("information");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::get_children()
{
    if(children.find("information") == children.end())
    {
        if(information != nullptr)
        {
            children["information"] = information.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-supply-name")
    {
        power_supply_name = value;
    }
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupplies()
{
    yang_name = "power-supplies"; yang_parent_name = "power-shelf";
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::~PowerSupplies()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::has_data() const
{
    for (std::size_t index=0; index<power_supply.size(); index++)
    {
        if(power_supply[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::has_operation() const
{
    for (std::size_t index=0; index<power_supply.size(); index++)
    {
        if(power_supply[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supplies";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "power-supply")
    {
        for(auto const & c : power_supply)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply>();
        c->parent = this;
        power_supply.push_back(std::move(c));
        children[segment_path] = power_supply.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::get_children()
{
    for (auto const & c : power_supply)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::set_value(const std::string & value_path, std::string value)
{
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerShelf()
    :
    	power_shelf_name{YType::str, "power-shelf-name"}
    	,
    power_supplies(std::make_unique<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies>())
{
    power_supplies->parent = this;
    children["power-supplies"] = power_supplies.get();

    yang_name = "power-shelf"; yang_parent_name = "power-shelfs";
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::~PowerShelf()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::has_data() const
{
    return power_shelf_name.is_set
	|| (power_supplies !=  nullptr && power_supplies->has_data());
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::has_operation() const
{
    return is_set(operation)
	|| is_set(power_shelf_name.operation)
	|| (power_supplies !=  nullptr && is_set(power_supplies->operation));
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-shelf" <<"[power-shelf-name='" <<power_shelf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::PowerShelfs::PowerShelf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_shelf_name.is_set || is_set(power_shelf_name.operation)) leaf_name_data.push_back(power_shelf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::PowerShelfs::PowerShelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "power-supplies")
    {
        if(power_supplies != nullptr)
        {
            children["power-supplies"] = power_supplies.get();
        }
        else
        {
            power_supplies = std::make_unique<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies>();
            power_supplies->parent = this;
            children["power-supplies"] = power_supplies.get();
        }
        return children.at("power-supplies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::PowerShelfs::PowerShelf::get_children()
{
    if(children.find("power-supplies") == children.end())
    {
        if(power_supplies != nullptr)
        {
            children["power-supplies"] = power_supplies.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-shelf-name")
    {
        power_shelf_name = value;
    }
}

Diag::Racks::Rack::PowerShelfs::PowerShelfs()
{
    yang_name = "power-shelfs"; yang_parent_name = "rack";
}

Diag::Racks::Rack::PowerShelfs::~PowerShelfs()
{
}

bool Diag::Racks::Rack::PowerShelfs::has_data() const
{
    for (std::size_t index=0; index<power_shelf.size(); index++)
    {
        if(power_shelf[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::PowerShelfs::has_operation() const
{
    for (std::size_t index=0; index<power_shelf.size(); index++)
    {
        if(power_shelf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Diag::Racks::Rack::PowerShelfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-shelfs";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::PowerShelfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::PowerShelfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "power-shelf")
    {
        for(auto const & c : power_shelf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Diag::Racks::Rack::PowerShelfs::PowerShelf>();
        c->parent = this;
        power_shelf.push_back(std::move(c));
        children[segment_path] = power_shelf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::PowerShelfs::get_children()
{
    for (auto const & c : power_shelf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::PowerShelfs::set_value(const std::string & value_path, std::string value)
{
}

Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::Rma()
    :
    	rma_history{YType::str, "rma-history"},
	 rma_number{YType::str, "rma-number"},
	 test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "information";
}

Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::~Rma()
{
}

bool Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::get_children()
{
    return children;
}

void Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Information()
    :
    	asset_alias{YType::str, "asset-alias"},
	 asset_id{YType::str, "asset-id"},
	 base_mac_address1{YType::str, "base-mac-address1"},
	 base_mac_address2{YType::str, "base-mac-address2"},
	 base_mac_address3{YType::str, "base-mac-address3"},
	 base_mac_address4{YType::str, "base-mac-address4"},
	 block_checksum{YType::str, "block-checksum"},
	 block_count{YType::str, "block-count"},
	 block_length{YType::str, "block-length"},
	 block_signature{YType::str, "block-signature"},
	 block_version{YType::str, "block-version"},
	 chassis_sid{YType::str, "chassis-sid"},
	 clei{YType::str, "clei"},
	 controller_family{YType::str, "controller-family"},
	 controller_type{YType::str, "controller-type"},
	 description{YType::str, "description"},
	 dev_num1{YType::str, "dev-num1"},
	 dev_num2{YType::str, "dev-num2"},
	 dev_num3{YType::str, "dev-num3"},
	 dev_num4{YType::str, "dev-num4"},
	 dev_num5{YType::str, "dev-num5"},
	 dev_num6{YType::str, "dev-num6"},
	 dev_num7{YType::str, "dev-num7"},
	 eci{YType::str, "eci"},
	 eeprom_size{YType::str, "eeprom-size"},
	 engineer_use{YType::str, "engineer-use"},
	 fru_major_type{YType::str, "fru-major-type"},
	 fru_minor_type{YType::str, "fru-minor-type"},
	 hw_version{YType::str, "hw-version"},
	 hwid{YType::str, "hwid"},
	 idprom_format_rev{YType::str, "idprom-format-rev"},
	 mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
	 mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
	 mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
	 mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
	 manu_test_data{YType::str, "manu-test-data"},
	 mfg_bits{YType::str, "mfg-bits"},
	 mfg_deviation{YType::str, "mfg-deviation"},
	 oem_string{YType::str, "oem-string"},
	 part_number{YType::str, "part-number"},
	 part_revision{YType::str, "part-revision"},
	 pca_num{YType::str, "pca-num"},
	 pcavid{YType::str, "pcavid"},
	 pcb_serial_num{YType::str, "pcb-serial-num"},
	 pid{YType::str, "pid"},
	 power_consumption{YType::str, "power-consumption"},
	 power_supply_type{YType::str, "power-supply-type"},
	 product_id{YType::str, "product-id"},
	 rma_code{YType::str, "rma-code"},
	 serial_number{YType::str, "serial-number"},
	 snmpoid{YType::str, "snmpoid"},
	 top_assem_part_num{YType::str, "top-assem-part-num"},
	 top_assem_vid{YType::str, "top-assem-vid"},
	 udi_description{YType::str, "udi-description"},
	 udi_name{YType::str, "udi-name"},
	 vid{YType::str, "vid"}
    	,
    rma(std::make_unique<Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma>())
{
    rma->parent = this;
    children["rma"] = rma.get();

    yang_name = "information"; yang_parent_name = "fans";
}

Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::~Information()
{
}

bool Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && is_set(rma->operation));
}

std::string Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rma")
    {
        if(rma != nullptr)
        {
            children["rma"] = rma.get();
        }
        else
        {
            rma = std::make_unique<Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::Rma>();
            rma->parent = this;
            children["rma"] = rma.get();
        }
        return children.at("rma");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::get_children()
{
    if(children.find("rma") == children.end())
    {
        if(rma != nullptr)
        {
            children["rma"] = rma.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Fans()
    :
    	fans_name{YType::str, "fans-name"}
    	,
    information(std::make_unique<Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information>())
{
    information->parent = this;
    children["information"] = information.get();

    yang_name = "fans"; yang_parent_name = "fanses";
}

Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::~Fans()
{
}

bool Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::has_data() const
{
    return fans_name.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::has_operation() const
{
    return is_set(operation)
	|| is_set(fans_name.operation)
	|| (information !=  nullptr && is_set(information->operation));
}

std::string Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fans" <<"[fans-name='" <<fans_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fans_name.is_set || is_set(fans_name.operation)) leaf_name_data.push_back(fans_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "information")
    {
        if(information != nullptr)
        {
            children["information"] = information.get();
        }
        else
        {
            information = std::make_unique<Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::Information>();
            information->parent = this;
            children["information"] = information.get();
        }
        return children.at("information");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::get_children()
{
    if(children.find("information") == children.end())
    {
        if(information != nullptr)
        {
            children["information"] = information.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fans-name")
    {
        fans_name = value;
    }
}

Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fanses()
{
    yang_name = "fanses"; yang_parent_name = "fan-tray";
}

Diag::Racks::Rack::FanTraies::FanTray::Fanses::~Fanses()
{
}

bool Diag::Racks::Rack::FanTraies::FanTray::Fanses::has_data() const
{
    for (std::size_t index=0; index<fans.size(); index++)
    {
        if(fans[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::FanTraies::FanTray::Fanses::has_operation() const
{
    for (std::size_t index=0; index<fans.size(); index++)
    {
        if(fans[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Diag::Racks::Rack::FanTraies::FanTray::Fanses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fanses";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::FanTraies::FanTray::Fanses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::FanTraies::FanTray::Fanses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fans")
    {
        for(auto const & c : fans)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Diag::Racks::Rack::FanTraies::FanTray::Fanses::Fans>();
        c->parent = this;
        fans.push_back(std::move(c));
        children[segment_path] = fans.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::FanTraies::FanTray::Fanses::get_children()
{
    for (auto const & c : fans)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::FanTraies::FanTray::Fanses::set_value(const std::string & value_path, std::string value)
{
}

Diag::Racks::Rack::FanTraies::FanTray::FanTray()
    :
    	fan_tray_name{YType::str, "fan-tray-name"}
    	,
    fanses(std::make_unique<Diag::Racks::Rack::FanTraies::FanTray::Fanses>())
{
    fanses->parent = this;
    children["fanses"] = fanses.get();

    yang_name = "fan-tray"; yang_parent_name = "fan-traies";
}

Diag::Racks::Rack::FanTraies::FanTray::~FanTray()
{
}

bool Diag::Racks::Rack::FanTraies::FanTray::has_data() const
{
    return fan_tray_name.is_set
	|| (fanses !=  nullptr && fanses->has_data());
}

bool Diag::Racks::Rack::FanTraies::FanTray::has_operation() const
{
    return is_set(operation)
	|| is_set(fan_tray_name.operation)
	|| (fanses !=  nullptr && is_set(fanses->operation));
}

std::string Diag::Racks::Rack::FanTraies::FanTray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-tray" <<"[fan-tray-name='" <<fan_tray_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::FanTraies::FanTray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fan_tray_name.is_set || is_set(fan_tray_name.operation)) leaf_name_data.push_back(fan_tray_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::FanTraies::FanTray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fanses")
    {
        if(fanses != nullptr)
        {
            children["fanses"] = fanses.get();
        }
        else
        {
            fanses = std::make_unique<Diag::Racks::Rack::FanTraies::FanTray::Fanses>();
            fanses->parent = this;
            children["fanses"] = fanses.get();
        }
        return children.at("fanses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::FanTraies::FanTray::get_children()
{
    if(children.find("fanses") == children.end())
    {
        if(fanses != nullptr)
        {
            children["fanses"] = fanses.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::FanTraies::FanTray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fan-tray-name")
    {
        fan_tray_name = value;
    }
}

Diag::Racks::Rack::FanTraies::FanTraies()
{
    yang_name = "fan-traies"; yang_parent_name = "rack";
}

Diag::Racks::Rack::FanTraies::~FanTraies()
{
}

bool Diag::Racks::Rack::FanTraies::has_data() const
{
    for (std::size_t index=0; index<fan_tray.size(); index++)
    {
        if(fan_tray[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::FanTraies::has_operation() const
{
    for (std::size_t index=0; index<fan_tray.size(); index++)
    {
        if(fan_tray[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Diag::Racks::Rack::FanTraies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-traies";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::FanTraies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::FanTraies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fan-tray")
    {
        for(auto const & c : fan_tray)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Diag::Racks::Rack::FanTraies::FanTray>();
        c->parent = this;
        fan_tray.push_back(std::move(c));
        children[segment_path] = fan_tray.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::FanTraies::get_children()
{
    for (auto const & c : fan_tray)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::FanTraies::set_value(const std::string & value_path, std::string value)
{
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::Rma()
    :
    	rma_history{YType::str, "rma-history"},
	 rma_number{YType::str, "rma-number"},
	 test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "card-instance";
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::~Rma()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::get_children()
{
    return children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::CardInstance()
    :
    	asset_alias{YType::str, "asset-alias"},
	 asset_id{YType::str, "asset-id"},
	 base_mac_address1{YType::str, "base-mac-address1"},
	 base_mac_address2{YType::str, "base-mac-address2"},
	 base_mac_address3{YType::str, "base-mac-address3"},
	 base_mac_address4{YType::str, "base-mac-address4"},
	 block_checksum{YType::str, "block-checksum"},
	 block_count{YType::str, "block-count"},
	 block_length{YType::str, "block-length"},
	 block_signature{YType::str, "block-signature"},
	 block_version{YType::str, "block-version"},
	 chassis_sid{YType::str, "chassis-sid"},
	 clei{YType::str, "clei"},
	 controller_family{YType::str, "controller-family"},
	 controller_type{YType::str, "controller-type"},
	 description{YType::str, "description"},
	 dev_num1{YType::str, "dev-num1"},
	 dev_num2{YType::str, "dev-num2"},
	 dev_num3{YType::str, "dev-num3"},
	 dev_num4{YType::str, "dev-num4"},
	 dev_num5{YType::str, "dev-num5"},
	 dev_num6{YType::str, "dev-num6"},
	 dev_num7{YType::str, "dev-num7"},
	 eci{YType::str, "eci"},
	 eeprom_size{YType::str, "eeprom-size"},
	 engineer_use{YType::str, "engineer-use"},
	 fru_major_type{YType::str, "fru-major-type"},
	 fru_minor_type{YType::str, "fru-minor-type"},
	 hw_version{YType::str, "hw-version"},
	 hwid{YType::str, "hwid"},
	 idprom_format_rev{YType::str, "idprom-format-rev"},
	 mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
	 mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
	 mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
	 mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
	 manu_test_data{YType::str, "manu-test-data"},
	 mfg_bits{YType::str, "mfg-bits"},
	 mfg_deviation{YType::str, "mfg-deviation"},
	 oem_string{YType::str, "oem-string"},
	 part_number{YType::str, "part-number"},
	 part_revision{YType::str, "part-revision"},
	 pca_num{YType::str, "pca-num"},
	 pcavid{YType::str, "pcavid"},
	 pcb_serial_num{YType::str, "pcb-serial-num"},
	 pid{YType::str, "pid"},
	 power_consumption{YType::str, "power-consumption"},
	 power_supply_type{YType::str, "power-supply-type"},
	 product_id{YType::str, "product-id"},
	 rma_code{YType::str, "rma-code"},
	 serial_number{YType::str, "serial-number"},
	 snmpoid{YType::str, "snmpoid"},
	 top_assem_part_num{YType::str, "top-assem-part-num"},
	 top_assem_vid{YType::str, "top-assem-vid"},
	 udi_description{YType::str, "udi-description"},
	 udi_name{YType::str, "udi-name"},
	 vid{YType::str, "vid"}
    	,
    rma(std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma>())
{
    rma->parent = this;
    children["rma"] = rma.get();

    yang_name = "card-instance"; yang_parent_name = "detail";
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::~CardInstance()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && is_set(rma->operation));
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-instance";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rma")
    {
        if(rma != nullptr)
        {
            children["rma"] = rma.get();
        }
        else
        {
            rma = std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma>();
            rma->parent = this;
            children["rma"] = rma.get();
        }
        return children.at("rma");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::get_children()
{
    if(children.find("rma") == children.end())
    {
        if(rma != nullptr)
        {
            children["rma"] = rma.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Detail()
    :
    	node_operational_state{YType::str, "node-operational-state"}
    	,
    card_instance(std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance>())
{
    card_instance->parent = this;
    children["card-instance"] = card_instance.get();

    yang_name = "detail"; yang_parent_name = "instance";
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::~Detail()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::has_data() const
{
    return node_operational_state.is_set
	|| (card_instance !=  nullptr && card_instance->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::has_operation() const
{
    return is_set(operation)
	|| is_set(node_operational_state.operation)
	|| (card_instance !=  nullptr && is_set(card_instance->operation));
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_operational_state.is_set || is_set(node_operational_state.operation)) leaf_name_data.push_back(node_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-instance")
    {
        if(card_instance != nullptr)
        {
            children["card-instance"] = card_instance.get();
        }
        else
        {
            card_instance = std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance>();
            card_instance->parent = this;
            children["card-instance"] = card_instance.get();
        }
        return children.at("card-instance");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_children()
{
    if(children.find("card-instance") == children.end())
    {
        if(card_instance != nullptr)
        {
            children["card-instance"] = card_instance.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-operational-state")
    {
        node_operational_state = value;
    }
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Instance()
    :
    	name{YType::str, "name"}
    	,
    detail(std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    yang_name = "instance"; yang_parent_name = "instances";
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::~Instance()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::has_data() const
{
    return name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (detail !=  nullptr && is_set(detail->operation));
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Diag::Racks::Rack::Slots::Slot::Instances::Instances()
{
    yang_name = "instances"; yang_parent_name = "slot";
}

Diag::Racks::Rack::Slots::Slot::Instances::~Instances()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Slots::Slot::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Slots::Slot::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Slots::Slot::Instances::get_children()
{
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::set_value(const std::string & value_path, std::string value)
{
}

Diag::Racks::Rack::Slots::Slot::Slot()
    :
    	slot_name{YType::str, "slot-name"}
    	,
    instances(std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances>())
{
    instances->parent = this;
    children["instances"] = instances.get();

    yang_name = "slot"; yang_parent_name = "slots";
}

Diag::Racks::Rack::Slots::Slot::~Slot()
{
}

bool Diag::Racks::Rack::Slots::Slot::has_data() const
{
    return slot_name.is_set
	|| (instances !=  nullptr && instances->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(operation)
	|| is_set(slot_name.operation)
	|| (instances !=  nullptr && is_set(instances->operation));
}

std::string Diag::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot-name='" <<slot_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_name.is_set || is_set(slot_name.operation)) leaf_name_data.push_back(slot_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instances")
    {
        if(instances != nullptr)
        {
            children["instances"] = instances.get();
        }
        else
        {
            instances = std::make_unique<Diag::Racks::Rack::Slots::Slot::Instances>();
            instances->parent = this;
            children["instances"] = instances.get();
        }
        return children.at("instances");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Slots::Slot::get_children()
{
    if(children.find("instances") == children.end())
    {
        if(instances != nullptr)
        {
            children["instances"] = instances.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot-name")
    {
        slot_name = value;
    }
}

Diag::Racks::Rack::Slots::Slots()
{
    yang_name = "slots"; yang_parent_name = "rack";
}

Diag::Racks::Rack::Slots::~Slots()
{
}

bool Diag::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Diag::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Diag::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(std::move(c));
        children[segment_path] = slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Slots::get_children()
{
    for (auto const & c : slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::Slots::set_value(const std::string & value_path, std::string value)
{
}

Diag::Racks::Rack::Chassis::Rma::Rma()
    :
    	rma_history{YType::str, "rma-history"},
	 rma_number{YType::str, "rma-number"},
	 test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "chassis";
}

Diag::Racks::Rack::Chassis::Rma::~Rma()
{
}

bool Diag::Racks::Rack::Chassis::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Diag::Racks::Rack::Chassis::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Diag::Racks::Rack::Chassis::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Chassis::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Chassis::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Chassis::Rma::get_children()
{
    return children;
}

void Diag::Racks::Rack::Chassis::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Diag::Racks::Rack::Chassis::Chassis()
    :
    	asset_alias{YType::str, "asset-alias"},
	 asset_id{YType::str, "asset-id"},
	 base_mac_address1{YType::str, "base-mac-address1"},
	 base_mac_address2{YType::str, "base-mac-address2"},
	 base_mac_address3{YType::str, "base-mac-address3"},
	 base_mac_address4{YType::str, "base-mac-address4"},
	 block_checksum{YType::str, "block-checksum"},
	 block_count{YType::str, "block-count"},
	 block_length{YType::str, "block-length"},
	 block_signature{YType::str, "block-signature"},
	 block_version{YType::str, "block-version"},
	 chassis_sid{YType::str, "chassis-sid"},
	 clei{YType::str, "clei"},
	 controller_family{YType::str, "controller-family"},
	 controller_type{YType::str, "controller-type"},
	 description{YType::str, "description"},
	 dev_num1{YType::str, "dev-num1"},
	 dev_num2{YType::str, "dev-num2"},
	 dev_num3{YType::str, "dev-num3"},
	 dev_num4{YType::str, "dev-num4"},
	 dev_num5{YType::str, "dev-num5"},
	 dev_num6{YType::str, "dev-num6"},
	 dev_num7{YType::str, "dev-num7"},
	 eci{YType::str, "eci"},
	 eeprom_size{YType::str, "eeprom-size"},
	 engineer_use{YType::str, "engineer-use"},
	 fru_major_type{YType::str, "fru-major-type"},
	 fru_minor_type{YType::str, "fru-minor-type"},
	 hw_version{YType::str, "hw-version"},
	 hwid{YType::str, "hwid"},
	 idprom_format_rev{YType::str, "idprom-format-rev"},
	 mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
	 mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
	 mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
	 mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
	 manu_test_data{YType::str, "manu-test-data"},
	 mfg_bits{YType::str, "mfg-bits"},
	 mfg_deviation{YType::str, "mfg-deviation"},
	 oem_string{YType::str, "oem-string"},
	 part_number{YType::str, "part-number"},
	 part_revision{YType::str, "part-revision"},
	 pca_num{YType::str, "pca-num"},
	 pcavid{YType::str, "pcavid"},
	 pcb_serial_num{YType::str, "pcb-serial-num"},
	 pid{YType::str, "pid"},
	 power_consumption{YType::str, "power-consumption"},
	 power_supply_type{YType::str, "power-supply-type"},
	 product_id{YType::str, "product-id"},
	 rma_code{YType::str, "rma-code"},
	 serial_number{YType::str, "serial-number"},
	 snmpoid{YType::str, "snmpoid"},
	 top_assem_part_num{YType::str, "top-assem-part-num"},
	 top_assem_vid{YType::str, "top-assem-vid"},
	 udi_description{YType::str, "udi-description"},
	 udi_name{YType::str, "udi-name"},
	 vid{YType::str, "vid"}
    	,
    rma(std::make_unique<Diag::Racks::Rack::Chassis::Rma>())
{
    rma->parent = this;
    children["rma"] = rma.get();

    yang_name = "chassis"; yang_parent_name = "rack";
}

Diag::Racks::Rack::Chassis::~Chassis()
{
}

bool Diag::Racks::Rack::Chassis::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Diag::Racks::Rack::Chassis::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && is_set(rma->operation));
}

std::string Diag::Racks::Rack::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::Chassis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rma")
    {
        if(rma != nullptr)
        {
            children["rma"] = rma.get();
        }
        else
        {
            rma = std::make_unique<Diag::Racks::Rack::Chassis::Rma>();
            rma->parent = this;
            children["rma"] = rma.get();
        }
        return children.at("rma");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::Chassis::get_children()
{
    if(children.find("rma") == children.end())
    {
        if(rma != nullptr)
        {
            children["rma"] = rma.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::Chassis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Diag::Racks::Rack::Rack()
    :
    	rack_name{YType::str, "rack-name"}
    	,
    chassis(std::make_unique<Diag::Racks::Rack::Chassis>())
	,fan_traies(std::make_unique<Diag::Racks::Rack::FanTraies>())
	,power_shelfs(std::make_unique<Diag::Racks::Rack::PowerShelfs>())
	,slots(std::make_unique<Diag::Racks::Rack::Slots>())
{
    chassis->parent = this;
    children["chassis"] = chassis.get();

    fan_traies->parent = this;
    children["fan-traies"] = fan_traies.get();

    power_shelfs->parent = this;
    children["power-shelfs"] = power_shelfs.get();

    slots->parent = this;
    children["slots"] = slots.get();

    yang_name = "rack"; yang_parent_name = "racks";
}

Diag::Racks::Rack::~Rack()
{
}

bool Diag::Racks::Rack::has_data() const
{
    return rack_name.is_set
	|| (chassis !=  nullptr && chassis->has_data())
	|| (fan_traies !=  nullptr && fan_traies->has_data())
	|| (power_shelfs !=  nullptr && power_shelfs->has_data())
	|| (slots !=  nullptr && slots->has_data());
}

bool Diag::Racks::Rack::has_operation() const
{
    return is_set(operation)
	|| is_set(rack_name.operation)
	|| (chassis !=  nullptr && is_set(chassis->operation))
	|| (fan_traies !=  nullptr && is_set(fan_traies->operation))
	|| (power_shelfs !=  nullptr && is_set(power_shelfs->operation))
	|| (slots !=  nullptr && is_set(slots->operation));
}

std::string Diag::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack-name='" <<rack_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Diag::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-sdr-invmgr-diag-oper:diag/racks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_name.is_set || is_set(rack_name.operation)) leaf_name_data.push_back(rack_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "chassis")
    {
        if(chassis != nullptr)
        {
            children["chassis"] = chassis.get();
        }
        else
        {
            chassis = std::make_unique<Diag::Racks::Rack::Chassis>();
            chassis->parent = this;
            children["chassis"] = chassis.get();
        }
        return children.at("chassis");
    }

    if(child_yang_name == "fan-traies")
    {
        if(fan_traies != nullptr)
        {
            children["fan-traies"] = fan_traies.get();
        }
        else
        {
            fan_traies = std::make_unique<Diag::Racks::Rack::FanTraies>();
            fan_traies->parent = this;
            children["fan-traies"] = fan_traies.get();
        }
        return children.at("fan-traies");
    }

    if(child_yang_name == "power-shelfs")
    {
        if(power_shelfs != nullptr)
        {
            children["power-shelfs"] = power_shelfs.get();
        }
        else
        {
            power_shelfs = std::make_unique<Diag::Racks::Rack::PowerShelfs>();
            power_shelfs->parent = this;
            children["power-shelfs"] = power_shelfs.get();
        }
        return children.at("power-shelfs");
    }

    if(child_yang_name == "slots")
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
        else
        {
            slots = std::make_unique<Diag::Racks::Rack::Slots>();
            slots->parent = this;
            children["slots"] = slots.get();
        }
        return children.at("slots");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::Rack::get_children()
{
    if(children.find("chassis") == children.end())
    {
        if(chassis != nullptr)
        {
            children["chassis"] = chassis.get();
        }
    }

    if(children.find("fan-traies") == children.end())
    {
        if(fan_traies != nullptr)
        {
            children["fan-traies"] = fan_traies.get();
        }
    }

    if(children.find("power-shelfs") == children.end())
    {
        if(power_shelfs != nullptr)
        {
            children["power-shelfs"] = power_shelfs.get();
        }
    }

    if(children.find("slots") == children.end())
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
    }

    return children;
}

void Diag::Racks::Rack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rack-name")
    {
        rack_name = value;
    }
}

Diag::Racks::Racks()
{
    yang_name = "racks"; yang_parent_name = "diag";
}

Diag::Racks::~Racks()
{
}

bool Diag::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Diag::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

EntityPath Diag::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-sdr-invmgr-diag-oper:diag/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Diag::Racks::Rack>();
        c->parent = this;
        rack.push_back(std::move(c));
        children[segment_path] = rack.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::Racks::get_children()
{
    for (auto const & c : rack)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Diag::Racks::set_value(const std::string & value_path, std::string value)
{
}

Diag::Diag()
    :
    racks(std::make_unique<Diag::Racks>())
{
    racks->parent = this;
    children["racks"] = racks.get();

    yang_name = "diag"; yang_parent_name = "Cisco-IOS-XR-sdr-invmgr-diag-oper";
}

Diag::~Diag()
{
}

bool Diag::has_data() const
{
    return (racks !=  nullptr && racks->has_data());
}

bool Diag::has_operation() const
{
    return is_set(operation)
	|| (racks !=  nullptr && is_set(racks->operation));
}

std::string Diag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sdr-invmgr-diag-oper:diag";

    return path_buffer.str();

}

EntityPath Diag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Diag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "racks")
    {
        if(racks != nullptr)
        {
            children["racks"] = racks.get();
        }
        else
        {
            racks = std::make_unique<Diag::Racks>();
            racks->parent = this;
            children["racks"] = racks.get();
        }
        return children.at("racks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Diag::get_children()
{
    if(children.find("racks") == children.end())
    {
        if(racks != nullptr)
        {
            children["racks"] = racks.get();
        }
    }

    return children;
}

void Diag::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Diag::clone_ptr()
{
    return std::make_unique<Diag>();
}


}
}

