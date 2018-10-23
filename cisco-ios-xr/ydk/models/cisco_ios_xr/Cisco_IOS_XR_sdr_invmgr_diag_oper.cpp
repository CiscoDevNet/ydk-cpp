
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sdr_invmgr_diag_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sdr_invmgr_diag_oper {

Diag::Diag()
    :
    racks(std::make_shared<Diag::Racks>())
{
    racks->parent = this;

    yang_name = "diag"; yang_parent_name = "Cisco-IOS-XR-sdr-invmgr-diag-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Diag::~Diag()
{
}

bool Diag::has_data() const
{
    if (is_presence_container) return true;
    return (racks !=  nullptr && racks->has_data());
}

bool Diag::has_operation() const
{
    return is_set(yfilter)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string Diag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sdr-invmgr-diag-oper:diag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<Diag::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(racks != nullptr)
    {
        _children["racks"] = racks;
    }

    return _children;
}

void Diag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Diag::clone_ptr() const
{
    return std::make_shared<Diag>();
}

std::string Diag::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Diag::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Diag::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Diag::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Diag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks")
        return true;
    return false;
}

Diag::Racks::Racks()
    :
    rack(this, {"rack_name"})
{

    yang_name = "racks"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Racks::~Racks()
{
}

bool Diag::Racks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sdr-invmgr-diag-oper:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Diag::Racks::Rack::Rack()
    :
    rack_name{YType::str, "rack-name"}
        ,
    power_shelfs(std::make_shared<Diag::Racks::Rack::PowerShelfs>())
    , fan_trays(std::make_shared<Diag::Racks::Rack::FanTrays>())
    , slots(std::make_shared<Diag::Racks::Rack::Slots>())
    , chassis(std::make_shared<Diag::Racks::Rack::Chassis>())
{
    power_shelfs->parent = this;
    fan_trays->parent = this;
    slots->parent = this;
    chassis->parent = this;

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Racks::Rack::~Rack()
{
}

bool Diag::Racks::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack_name.is_set
	|| (power_shelfs !=  nullptr && power_shelfs->has_data())
	|| (fan_trays !=  nullptr && fan_trays->has_data())
	|| (slots !=  nullptr && slots->has_data())
	|| (chassis !=  nullptr && chassis->has_data());
}

bool Diag::Racks::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_name.yfilter)
	|| (power_shelfs !=  nullptr && power_shelfs->has_operation())
	|| (fan_trays !=  nullptr && fan_trays->has_operation())
	|| (slots !=  nullptr && slots->has_operation())
	|| (chassis !=  nullptr && chassis->has_operation());
}

std::string Diag::Racks::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sdr-invmgr-diag-oper:diag/racks/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack_name, "rack-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_name.is_set || is_set(rack_name.yfilter)) leaf_name_data.push_back(rack_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power-shelfs")
    {
        if(power_shelfs == nullptr)
        {
            power_shelfs = std::make_shared<Diag::Racks::Rack::PowerShelfs>();
        }
        return power_shelfs;
    }

    if(child_yang_name == "fan-trays")
    {
        if(fan_trays == nullptr)
        {
            fan_trays = std::make_shared<Diag::Racks::Rack::FanTrays>();
        }
        return fan_trays;
    }

    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<Diag::Racks::Rack::Slots>();
        }
        return slots;
    }

    if(child_yang_name == "chassis")
    {
        if(chassis == nullptr)
        {
            chassis = std::make_shared<Diag::Racks::Rack::Chassis>();
        }
        return chassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(power_shelfs != nullptr)
    {
        _children["power-shelfs"] = power_shelfs;
    }

    if(fan_trays != nullptr)
    {
        _children["fan-trays"] = fan_trays;
    }

    if(slots != nullptr)
    {
        _children["slots"] = slots;
    }

    if(chassis != nullptr)
    {
        _children["chassis"] = chassis;
    }

    return _children;
}

void Diag::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-name")
    {
        rack_name = value;
        rack_name.value_namespace = name_space;
        rack_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-name")
    {
        rack_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-shelfs" || name == "fan-trays" || name == "slots" || name == "chassis" || name == "rack-name")
        return true;
    return false;
}

Diag::Racks::Rack::PowerShelfs::PowerShelfs()
    :
    power_shelf(this, {"power_shelf_name"})
{

    yang_name = "power-shelfs"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerShelfs::~PowerShelfs()
{
}

bool Diag::Racks::Rack::PowerShelfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<power_shelf.len(); index++)
    {
        if(power_shelf[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::PowerShelfs::has_operation() const
{
    for (std::size_t index=0; index<power_shelf.len(); index++)
    {
        if(power_shelf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::PowerShelfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-shelfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerShelfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerShelfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power-shelf")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::PowerShelfs::PowerShelf>();
        ent_->parent = this;
        power_shelf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerShelfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : power_shelf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::PowerShelfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::PowerShelfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::PowerShelfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-shelf")
        return true;
    return false;
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerShelf()
    :
    power_shelf_name{YType::str, "power-shelf-name"}
        ,
    power_supplies(std::make_shared<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies>())
{
    power_supplies->parent = this;

    yang_name = "power-shelf"; yang_parent_name = "power-shelfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::~PowerShelf()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::has_data() const
{
    if (is_presence_container) return true;
    return power_shelf_name.is_set
	|| (power_supplies !=  nullptr && power_supplies->has_data());
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_shelf_name.yfilter)
	|| (power_supplies !=  nullptr && power_supplies->has_operation());
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-shelf";
    ADD_KEY_TOKEN(power_shelf_name, "power-shelf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerShelfs::PowerShelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_shelf_name.is_set || is_set(power_shelf_name.yfilter)) leaf_name_data.push_back(power_shelf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerShelfs::PowerShelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power-supplies")
    {
        if(power_supplies == nullptr)
        {
            power_supplies = std::make_shared<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies>();
        }
        return power_supplies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerShelfs::PowerShelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(power_supplies != nullptr)
    {
        _children["power-supplies"] = power_supplies;
    }

    return _children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-shelf-name")
    {
        power_shelf_name = value;
        power_shelf_name.value_namespace = name_space;
        power_shelf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-shelf-name")
    {
        power_shelf_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-supplies" || name == "power-shelf-name")
        return true;
    return false;
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupplies()
    :
    power_supply(this, {"power_supply_name"})
{

    yang_name = "power-supplies"; yang_parent_name = "power-shelf"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::~PowerSupplies()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<power_supply.len(); index++)
    {
        if(power_supply[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::has_operation() const
{
    for (std::size_t index=0; index<power_supply.len(); index++)
    {
        if(power_supply[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supplies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power-supply")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply>();
        ent_->parent = this;
        power_supply.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : power_supply.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-supply")
        return true;
    return false;
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::PowerSupply()
    :
    power_supply_name{YType::str, "power-supply-name"}
        ,
    information(std::make_shared<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information>())
{
    information->parent = this;

    yang_name = "power-supply"; yang_parent_name = "power-supplies"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::~PowerSupply()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::has_data() const
{
    if (is_presence_container) return true;
    return power_supply_name.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_supply_name.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply";
    ADD_KEY_TOKEN(power_supply_name, "power-supply-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_supply_name.is_set || is_set(power_supply_name.yfilter)) leaf_name_data.push_back(power_supply_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-supply-name")
    {
        power_supply_name = value;
        power_supply_name.value_namespace = name_space;
        power_supply_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-supply-name")
    {
        power_supply_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "power-supply-name")
        return true;
    return false;
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Information()
    :
    description{YType::str, "description"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    vid{YType::str, "vid"},
    hwid{YType::str, "hwid"},
    pid{YType::str, "pid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    clei{YType::str, "clei"},
    eci{YType::str, "eci"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    chassis_sid{YType::str, "chassis-sid"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    manu_test_data{YType::str, "manu-test-data"},
    asset_id{YType::str, "asset-id"},
    asset_alias{YType::str, "asset-alias"},
    base_mac_address1{YType::str, "base-mac-address1"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    power_supply_type{YType::str, "power-supply-type"},
    power_consumption{YType::str, "power-consumption"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    block_length{YType::str, "block-length"},
    block_checksum{YType::str, "block-checksum"},
    eeprom_size{YType::str, "eeprom-size"},
    block_count{YType::str, "block-count"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    oem_string{YType::str, "oem-string"},
    product_id{YType::str, "product-id"},
    serial_number{YType::str, "serial-number"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    mfg_deviation{YType::str, "mfg-deviation"},
    hw_version{YType::str, "hw-version"},
    mfg_bits{YType::str, "mfg-bits"},
    engineer_use{YType::str, "engineer-use"},
    snmpoid{YType::str, "snmpoid"},
    rma_code{YType::str, "rma-code"},
    eci_alpha_number{YType::str, "eci-alpha-number"}
        ,
    rma(std::make_shared<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma>())
{
    rma->parent = this;

    yang_name = "information"; yang_parent_name = "power-supply"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::~Information()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| idprom_format_rev.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| vid.is_set
	|| hwid.is_set
	|| pid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| clei.is_set
	|| eci.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| chassis_sid.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| manu_test_data.is_set
	|| asset_id.is_set
	|| asset_alias.is_set
	|| base_mac_address1.is_set
	|| mac_add_blk_size1.is_set
	|| base_mac_address2.is_set
	|| mac_add_blk_size2.is_set
	|| base_mac_address3.is_set
	|| mac_add_blk_size3.is_set
	|| base_mac_address4.is_set
	|| mac_add_blk_size4.is_set
	|| pcb_serial_num.is_set
	|| power_supply_type.is_set
	|| power_consumption.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| block_length.is_set
	|| block_checksum.is_set
	|| eeprom_size.is_set
	|| block_count.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| oem_string.is_set
	|| product_id.is_set
	|| serial_number.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| mfg_deviation.is_set
	|| hw_version.is_set
	|| mfg_bits.is_set
	|| engineer_use.is_set
	|| snmpoid.is_set
	|| rma_code.is_set
	|| eci_alpha_number.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(idprom_format_rev.yfilter)
	|| ydk::is_set(controller_family.yfilter)
	|| ydk::is_set(controller_type.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(udi_description.yfilter)
	|| ydk::is_set(udi_name.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(eci.yfilter)
	|| ydk::is_set(top_assem_part_num.yfilter)
	|| ydk::is_set(top_assem_vid.yfilter)
	|| ydk::is_set(pca_num.yfilter)
	|| ydk::is_set(pcavid.yfilter)
	|| ydk::is_set(chassis_sid.yfilter)
	|| ydk::is_set(dev_num1.yfilter)
	|| ydk::is_set(dev_num2.yfilter)
	|| ydk::is_set(dev_num3.yfilter)
	|| ydk::is_set(dev_num4.yfilter)
	|| ydk::is_set(dev_num5.yfilter)
	|| ydk::is_set(dev_num6.yfilter)
	|| ydk::is_set(dev_num7.yfilter)
	|| ydk::is_set(manu_test_data.yfilter)
	|| ydk::is_set(asset_id.yfilter)
	|| ydk::is_set(asset_alias.yfilter)
	|| ydk::is_set(base_mac_address1.yfilter)
	|| ydk::is_set(mac_add_blk_size1.yfilter)
	|| ydk::is_set(base_mac_address2.yfilter)
	|| ydk::is_set(mac_add_blk_size2.yfilter)
	|| ydk::is_set(base_mac_address3.yfilter)
	|| ydk::is_set(mac_add_blk_size3.yfilter)
	|| ydk::is_set(base_mac_address4.yfilter)
	|| ydk::is_set(mac_add_blk_size4.yfilter)
	|| ydk::is_set(pcb_serial_num.yfilter)
	|| ydk::is_set(power_supply_type.yfilter)
	|| ydk::is_set(power_consumption.yfilter)
	|| ydk::is_set(block_signature.yfilter)
	|| ydk::is_set(block_version.yfilter)
	|| ydk::is_set(block_length.yfilter)
	|| ydk::is_set(block_checksum.yfilter)
	|| ydk::is_set(eeprom_size.yfilter)
	|| ydk::is_set(block_count.yfilter)
	|| ydk::is_set(fru_major_type.yfilter)
	|| ydk::is_set(fru_minor_type.yfilter)
	|| ydk::is_set(oem_string.yfilter)
	|| ydk::is_set(product_id.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(part_revision.yfilter)
	|| ydk::is_set(mfg_deviation.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(mfg_bits.yfilter)
	|| ydk::is_set(engineer_use.yfilter)
	|| ydk::is_set(snmpoid.yfilter)
	|| ydk::is_set(rma_code.yfilter)
	|| ydk::is_set(eci_alpha_number.yfilter)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.yfilter)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.yfilter)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.yfilter)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.yfilter)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.yfilter)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (eci.is_set || is_set(eci.yfilter)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.yfilter)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.yfilter)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.yfilter)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.yfilter)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.yfilter)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.yfilter)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.yfilter)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.yfilter)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.yfilter)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.yfilter)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.yfilter)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.yfilter)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.yfilter)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.yfilter)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (asset_alias.is_set || is_set(asset_alias.yfilter)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.yfilter)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.yfilter)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.yfilter)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.yfilter)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.yfilter)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.yfilter)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.yfilter)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.yfilter)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.yfilter)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.yfilter)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.yfilter)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.yfilter)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.yfilter)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.yfilter)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.yfilter)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.yfilter)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.yfilter)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.yfilter)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.yfilter)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.yfilter)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.yfilter)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.yfilter)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.yfilter)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.yfilter)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.yfilter)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.yfilter)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.yfilter)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (eci_alpha_number.is_set || is_set(eci_alpha_number.yfilter)) leaf_name_data.push_back(eci_alpha_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rma != nullptr)
    {
        _children["rma"] = rma;
    }

    return _children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
        idprom_format_rev.value_namespace = name_space;
        idprom_format_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
        controller_family.value_namespace = name_space;
        controller_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
        controller_type.value_namespace = name_space;
        controller_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwid")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
        udi_description.value_namespace = name_space;
        udi_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
        udi_name.value_namespace = name_space;
        udi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eci")
    {
        eci = value;
        eci.value_namespace = name_space;
        eci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
        top_assem_part_num.value_namespace = name_space;
        top_assem_part_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
        top_assem_vid.value_namespace = name_space;
        top_assem_vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
        pca_num.value_namespace = name_space;
        pca_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
        pcavid.value_namespace = name_space;
        pcavid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
        chassis_sid.value_namespace = name_space;
        chassis_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
        dev_num1.value_namespace = name_space;
        dev_num1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
        dev_num2.value_namespace = name_space;
        dev_num2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
        dev_num3.value_namespace = name_space;
        dev_num3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
        dev_num4.value_namespace = name_space;
        dev_num4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
        dev_num5.value_namespace = name_space;
        dev_num5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
        dev_num6.value_namespace = name_space;
        dev_num6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
        dev_num7.value_namespace = name_space;
        dev_num7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
        manu_test_data.value_namespace = name_space;
        manu_test_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
        asset_id.value_namespace = name_space;
        asset_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-alias")
    {
        asset_alias = value;
        asset_alias.value_namespace = name_space;
        asset_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
        base_mac_address1.value_namespace = name_space;
        base_mac_address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
        mac_add_blk_size1.value_namespace = name_space;
        mac_add_blk_size1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
        base_mac_address2.value_namespace = name_space;
        base_mac_address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
        mac_add_blk_size2.value_namespace = name_space;
        mac_add_blk_size2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
        base_mac_address3.value_namespace = name_space;
        base_mac_address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
        mac_add_blk_size3.value_namespace = name_space;
        mac_add_blk_size3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
        base_mac_address4.value_namespace = name_space;
        base_mac_address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
        mac_add_blk_size4.value_namespace = name_space;
        mac_add_blk_size4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
        pcb_serial_num.value_namespace = name_space;
        pcb_serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
        power_supply_type.value_namespace = name_space;
        power_supply_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
        power_consumption.value_namespace = name_space;
        power_consumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
        block_signature.value_namespace = name_space;
        block_signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-version")
    {
        block_version = value;
        block_version.value_namespace = name_space;
        block_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-length")
    {
        block_length = value;
        block_length.value_namespace = name_space;
        block_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
        block_checksum.value_namespace = name_space;
        block_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
        eeprom_size.value_namespace = name_space;
        eeprom_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-count")
    {
        block_count = value;
        block_count.value_namespace = name_space;
        block_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
        fru_major_type.value_namespace = name_space;
        fru_major_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
        fru_minor_type.value_namespace = name_space;
        fru_minor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
        oem_string.value_namespace = name_space;
        oem_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "product-id")
    {
        product_id = value;
        product_id.value_namespace = name_space;
        product_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
        part_revision.value_namespace = name_space;
        part_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
        mfg_deviation.value_namespace = name_space;
        mfg_deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
        mfg_bits.value_namespace = name_space;
        mfg_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
        engineer_use.value_namespace = name_space;
        engineer_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
        snmpoid.value_namespace = name_space;
        snmpoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
        rma_code.value_namespace = name_space;
        rma_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eci-alpha-number")
    {
        eci_alpha_number = value;
        eci_alpha_number.value_namespace = name_space;
        eci_alpha_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev.yfilter = yfilter;
    }
    if(value_path == "controller-family")
    {
        controller_family.yfilter = yfilter;
    }
    if(value_path == "controller-type")
    {
        controller_type.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "hwid")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "udi-description")
    {
        udi_description.yfilter = yfilter;
    }
    if(value_path == "udi-name")
    {
        udi_name.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "eci")
    {
        eci.yfilter = yfilter;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num.yfilter = yfilter;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid.yfilter = yfilter;
    }
    if(value_path == "pca-num")
    {
        pca_num.yfilter = yfilter;
    }
    if(value_path == "pcavid")
    {
        pcavid.yfilter = yfilter;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid.yfilter = yfilter;
    }
    if(value_path == "dev-num1")
    {
        dev_num1.yfilter = yfilter;
    }
    if(value_path == "dev-num2")
    {
        dev_num2.yfilter = yfilter;
    }
    if(value_path == "dev-num3")
    {
        dev_num3.yfilter = yfilter;
    }
    if(value_path == "dev-num4")
    {
        dev_num4.yfilter = yfilter;
    }
    if(value_path == "dev-num5")
    {
        dev_num5.yfilter = yfilter;
    }
    if(value_path == "dev-num6")
    {
        dev_num6.yfilter = yfilter;
    }
    if(value_path == "dev-num7")
    {
        dev_num7.yfilter = yfilter;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data.yfilter = yfilter;
    }
    if(value_path == "asset-id")
    {
        asset_id.yfilter = yfilter;
    }
    if(value_path == "asset-alias")
    {
        asset_alias.yfilter = yfilter;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1.yfilter = yfilter;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2.yfilter = yfilter;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3.yfilter = yfilter;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4.yfilter = yfilter;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num.yfilter = yfilter;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type.yfilter = yfilter;
    }
    if(value_path == "power-consumption")
    {
        power_consumption.yfilter = yfilter;
    }
    if(value_path == "block-signature")
    {
        block_signature.yfilter = yfilter;
    }
    if(value_path == "block-version")
    {
        block_version.yfilter = yfilter;
    }
    if(value_path == "block-length")
    {
        block_length.yfilter = yfilter;
    }
    if(value_path == "block-checksum")
    {
        block_checksum.yfilter = yfilter;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size.yfilter = yfilter;
    }
    if(value_path == "block-count")
    {
        block_count.yfilter = yfilter;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type.yfilter = yfilter;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type.yfilter = yfilter;
    }
    if(value_path == "oem-string")
    {
        oem_string.yfilter = yfilter;
    }
    if(value_path == "product-id")
    {
        product_id.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "part-revision")
    {
        part_revision.yfilter = yfilter;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation.yfilter = yfilter;
    }
    if(value_path == "hw-version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits.yfilter = yfilter;
    }
    if(value_path == "engineer-use")
    {
        engineer_use.yfilter = yfilter;
    }
    if(value_path == "snmpoid")
    {
        snmpoid.yfilter = yfilter;
    }
    if(value_path == "rma-code")
    {
        rma_code.yfilter = yfilter;
    }
    if(value_path == "eci-alpha-number")
    {
        eci_alpha_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rma" || name == "description" || name == "idprom-format-rev" || name == "controller-family" || name == "controller-type" || name == "vid" || name == "hwid" || name == "pid" || name == "udi-description" || name == "udi-name" || name == "clei" || name == "eci" || name == "top-assem-part-num" || name == "top-assem-vid" || name == "pca-num" || name == "pcavid" || name == "chassis-sid" || name == "dev-num1" || name == "dev-num2" || name == "dev-num3" || name == "dev-num4" || name == "dev-num5" || name == "dev-num6" || name == "dev-num7" || name == "manu-test-data" || name == "asset-id" || name == "asset-alias" || name == "base-mac-address1" || name == "mac-add-blk-size1" || name == "base-mac-address2" || name == "mac-add-blk-size2" || name == "base-mac-address3" || name == "mac-add-blk-size3" || name == "base-mac-address4" || name == "mac-add-blk-size4" || name == "pcb-serial-num" || name == "power-supply-type" || name == "power-consumption" || name == "block-signature" || name == "block-version" || name == "block-length" || name == "block-checksum" || name == "eeprom-size" || name == "block-count" || name == "fru-major-type" || name == "fru-minor-type" || name == "oem-string" || name == "product-id" || name == "serial-number" || name == "part-number" || name == "part-revision" || name == "mfg-deviation" || name == "hw-version" || name == "mfg-bits" || name == "engineer-use" || name == "snmpoid" || name == "rma-code" || name == "eci-alpha-number")
        return true;
    return false;
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::Rma()
    :
    test_history{YType::str, "test-history"},
    rma_number{YType::str, "rma-number"},
    rma_history{YType::str, "rma-history"}
{

    yang_name = "rma"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::~Rma()
{
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::has_data() const
{
    if (is_presence_container) return true;
    return test_history.is_set
	|| rma_number.is_set
	|| rma_history.is_set;
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_history.yfilter)
	|| ydk::is_set(rma_number.yfilter)
	|| ydk::is_set(rma_history.yfilter);
}

std::string Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_history.is_set || is_set(test_history.yfilter)) leaf_name_data.push_back(test_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.yfilter)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (rma_history.is_set || is_set(rma_history.yfilter)) leaf_name_data.push_back(rma_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test-history")
    {
        test_history = value;
        test_history.value_namespace = name_space;
        test_history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
        rma_number.value_namespace = name_space;
        rma_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-history")
    {
        rma_history = value;
        rma_history.value_namespace = name_space;
        rma_history.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test-history")
    {
        test_history.yfilter = yfilter;
    }
    if(value_path == "rma-number")
    {
        rma_number.yfilter = yfilter;
    }
    if(value_path == "rma-history")
    {
        rma_history.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerShelfs::PowerShelf::PowerSupplies::PowerSupply::Information::Rma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-history" || name == "rma-number" || name == "rma-history")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTrays()
    :
    fan_tray(this, {"fan_tray_name"})
{

    yang_name = "fan-trays"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::~FanTrays()
{
}

bool Diag::Racks::Rack::FanTrays::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_tray.len(); index++)
    {
        if(fan_tray[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::FanTrays::has_operation() const
{
    for (std::size_t index=0; index<fan_tray.len(); index++)
    {
        if(fan_tray[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::FanTrays::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-trays";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fan-tray")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray>();
        ent_->parent = this;
        fan_tray.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fan_tray.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::FanTrays::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::FanTrays::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan-tray")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::FanTray()
    :
    fan_tray_name{YType::str, "fan-tray-name"}
        ,
    fanses(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Fanses>())
{
    fanses->parent = this;

    yang_name = "fan-tray"; yang_parent_name = "fan-trays"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::~FanTray()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::has_data() const
{
    if (is_presence_container) return true;
    return fan_tray_name.is_set
	|| (fanses !=  nullptr && fanses->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fan_tray_name.yfilter)
	|| (fanses !=  nullptr && fanses->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-tray";
    ADD_KEY_TOKEN(fan_tray_name, "fan-tray-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fan_tray_name.is_set || is_set(fan_tray_name.yfilter)) leaf_name_data.push_back(fan_tray_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fanses")
    {
        if(fanses == nullptr)
        {
            fanses = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Fanses>();
        }
        return fanses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fanses != nullptr)
    {
        _children["fanses"] = fanses;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fan-tray-name")
    {
        fan_tray_name = value;
        fan_tray_name.value_namespace = name_space;
        fan_tray_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fan-tray-name")
    {
        fan_tray_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fanses" || name == "fan-tray-name")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fanses()
    :
    fans(this, {"fans_name"})
{

    yang_name = "fanses"; yang_parent_name = "fan-tray"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Fanses::~Fanses()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fans.len(); index++)
    {
        if(fans[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::has_operation() const
{
    for (std::size_t index=0; index<fans.len(); index++)
    {
        if(fans[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Fanses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fanses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Fanses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Fanses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fans")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans>();
        ent_->parent = this;
        fans.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Fanses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fans.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Fanses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::FanTrays::FanTray::Fanses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fans")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Fans()
    :
    fans_name{YType::str, "fans-name"}
        ,
    information(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information>())
{
    information->parent = this;

    yang_name = "fans"; yang_parent_name = "fanses"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::~Fans()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::has_data() const
{
    if (is_presence_container) return true;
    return fans_name.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fans_name.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fans";
    ADD_KEY_TOKEN(fans_name, "fans-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fans_name.is_set || is_set(fans_name.yfilter)) leaf_name_data.push_back(fans_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fans-name")
    {
        fans_name = value;
        fans_name.value_namespace = name_space;
        fans_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fans-name")
    {
        fans_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "fans-name")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Information()
    :
    description{YType::str, "description"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    vid{YType::str, "vid"},
    hwid{YType::str, "hwid"},
    pid{YType::str, "pid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    clei{YType::str, "clei"},
    eci{YType::str, "eci"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    chassis_sid{YType::str, "chassis-sid"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    manu_test_data{YType::str, "manu-test-data"},
    asset_id{YType::str, "asset-id"},
    asset_alias{YType::str, "asset-alias"},
    base_mac_address1{YType::str, "base-mac-address1"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    power_supply_type{YType::str, "power-supply-type"},
    power_consumption{YType::str, "power-consumption"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    block_length{YType::str, "block-length"},
    block_checksum{YType::str, "block-checksum"},
    eeprom_size{YType::str, "eeprom-size"},
    block_count{YType::str, "block-count"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    oem_string{YType::str, "oem-string"},
    product_id{YType::str, "product-id"},
    serial_number{YType::str, "serial-number"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    mfg_deviation{YType::str, "mfg-deviation"},
    hw_version{YType::str, "hw-version"},
    mfg_bits{YType::str, "mfg-bits"},
    engineer_use{YType::str, "engineer-use"},
    snmpoid{YType::str, "snmpoid"},
    rma_code{YType::str, "rma-code"},
    eci_alpha_number{YType::str, "eci-alpha-number"}
        ,
    rma(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma>())
{
    rma->parent = this;

    yang_name = "information"; yang_parent_name = "fans"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::~Information()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| idprom_format_rev.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| vid.is_set
	|| hwid.is_set
	|| pid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| clei.is_set
	|| eci.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| chassis_sid.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| manu_test_data.is_set
	|| asset_id.is_set
	|| asset_alias.is_set
	|| base_mac_address1.is_set
	|| mac_add_blk_size1.is_set
	|| base_mac_address2.is_set
	|| mac_add_blk_size2.is_set
	|| base_mac_address3.is_set
	|| mac_add_blk_size3.is_set
	|| base_mac_address4.is_set
	|| mac_add_blk_size4.is_set
	|| pcb_serial_num.is_set
	|| power_supply_type.is_set
	|| power_consumption.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| block_length.is_set
	|| block_checksum.is_set
	|| eeprom_size.is_set
	|| block_count.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| oem_string.is_set
	|| product_id.is_set
	|| serial_number.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| mfg_deviation.is_set
	|| hw_version.is_set
	|| mfg_bits.is_set
	|| engineer_use.is_set
	|| snmpoid.is_set
	|| rma_code.is_set
	|| eci_alpha_number.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(idprom_format_rev.yfilter)
	|| ydk::is_set(controller_family.yfilter)
	|| ydk::is_set(controller_type.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(udi_description.yfilter)
	|| ydk::is_set(udi_name.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(eci.yfilter)
	|| ydk::is_set(top_assem_part_num.yfilter)
	|| ydk::is_set(top_assem_vid.yfilter)
	|| ydk::is_set(pca_num.yfilter)
	|| ydk::is_set(pcavid.yfilter)
	|| ydk::is_set(chassis_sid.yfilter)
	|| ydk::is_set(dev_num1.yfilter)
	|| ydk::is_set(dev_num2.yfilter)
	|| ydk::is_set(dev_num3.yfilter)
	|| ydk::is_set(dev_num4.yfilter)
	|| ydk::is_set(dev_num5.yfilter)
	|| ydk::is_set(dev_num6.yfilter)
	|| ydk::is_set(dev_num7.yfilter)
	|| ydk::is_set(manu_test_data.yfilter)
	|| ydk::is_set(asset_id.yfilter)
	|| ydk::is_set(asset_alias.yfilter)
	|| ydk::is_set(base_mac_address1.yfilter)
	|| ydk::is_set(mac_add_blk_size1.yfilter)
	|| ydk::is_set(base_mac_address2.yfilter)
	|| ydk::is_set(mac_add_blk_size2.yfilter)
	|| ydk::is_set(base_mac_address3.yfilter)
	|| ydk::is_set(mac_add_blk_size3.yfilter)
	|| ydk::is_set(base_mac_address4.yfilter)
	|| ydk::is_set(mac_add_blk_size4.yfilter)
	|| ydk::is_set(pcb_serial_num.yfilter)
	|| ydk::is_set(power_supply_type.yfilter)
	|| ydk::is_set(power_consumption.yfilter)
	|| ydk::is_set(block_signature.yfilter)
	|| ydk::is_set(block_version.yfilter)
	|| ydk::is_set(block_length.yfilter)
	|| ydk::is_set(block_checksum.yfilter)
	|| ydk::is_set(eeprom_size.yfilter)
	|| ydk::is_set(block_count.yfilter)
	|| ydk::is_set(fru_major_type.yfilter)
	|| ydk::is_set(fru_minor_type.yfilter)
	|| ydk::is_set(oem_string.yfilter)
	|| ydk::is_set(product_id.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(part_revision.yfilter)
	|| ydk::is_set(mfg_deviation.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(mfg_bits.yfilter)
	|| ydk::is_set(engineer_use.yfilter)
	|| ydk::is_set(snmpoid.yfilter)
	|| ydk::is_set(rma_code.yfilter)
	|| ydk::is_set(eci_alpha_number.yfilter)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.yfilter)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.yfilter)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.yfilter)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.yfilter)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.yfilter)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (eci.is_set || is_set(eci.yfilter)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.yfilter)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.yfilter)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.yfilter)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.yfilter)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.yfilter)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.yfilter)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.yfilter)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.yfilter)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.yfilter)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.yfilter)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.yfilter)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.yfilter)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.yfilter)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.yfilter)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (asset_alias.is_set || is_set(asset_alias.yfilter)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.yfilter)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.yfilter)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.yfilter)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.yfilter)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.yfilter)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.yfilter)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.yfilter)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.yfilter)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.yfilter)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.yfilter)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.yfilter)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.yfilter)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.yfilter)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.yfilter)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.yfilter)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.yfilter)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.yfilter)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.yfilter)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.yfilter)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.yfilter)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.yfilter)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.yfilter)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.yfilter)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.yfilter)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.yfilter)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.yfilter)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.yfilter)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (eci_alpha_number.is_set || is_set(eci_alpha_number.yfilter)) leaf_name_data.push_back(eci_alpha_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rma != nullptr)
    {
        _children["rma"] = rma;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
        idprom_format_rev.value_namespace = name_space;
        idprom_format_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
        controller_family.value_namespace = name_space;
        controller_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
        controller_type.value_namespace = name_space;
        controller_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwid")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
        udi_description.value_namespace = name_space;
        udi_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
        udi_name.value_namespace = name_space;
        udi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eci")
    {
        eci = value;
        eci.value_namespace = name_space;
        eci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
        top_assem_part_num.value_namespace = name_space;
        top_assem_part_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
        top_assem_vid.value_namespace = name_space;
        top_assem_vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
        pca_num.value_namespace = name_space;
        pca_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
        pcavid.value_namespace = name_space;
        pcavid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
        chassis_sid.value_namespace = name_space;
        chassis_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
        dev_num1.value_namespace = name_space;
        dev_num1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
        dev_num2.value_namespace = name_space;
        dev_num2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
        dev_num3.value_namespace = name_space;
        dev_num3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
        dev_num4.value_namespace = name_space;
        dev_num4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
        dev_num5.value_namespace = name_space;
        dev_num5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
        dev_num6.value_namespace = name_space;
        dev_num6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
        dev_num7.value_namespace = name_space;
        dev_num7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
        manu_test_data.value_namespace = name_space;
        manu_test_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
        asset_id.value_namespace = name_space;
        asset_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-alias")
    {
        asset_alias = value;
        asset_alias.value_namespace = name_space;
        asset_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
        base_mac_address1.value_namespace = name_space;
        base_mac_address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
        mac_add_blk_size1.value_namespace = name_space;
        mac_add_blk_size1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
        base_mac_address2.value_namespace = name_space;
        base_mac_address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
        mac_add_blk_size2.value_namespace = name_space;
        mac_add_blk_size2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
        base_mac_address3.value_namespace = name_space;
        base_mac_address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
        mac_add_blk_size3.value_namespace = name_space;
        mac_add_blk_size3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
        base_mac_address4.value_namespace = name_space;
        base_mac_address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
        mac_add_blk_size4.value_namespace = name_space;
        mac_add_blk_size4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
        pcb_serial_num.value_namespace = name_space;
        pcb_serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
        power_supply_type.value_namespace = name_space;
        power_supply_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
        power_consumption.value_namespace = name_space;
        power_consumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
        block_signature.value_namespace = name_space;
        block_signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-version")
    {
        block_version = value;
        block_version.value_namespace = name_space;
        block_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-length")
    {
        block_length = value;
        block_length.value_namespace = name_space;
        block_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
        block_checksum.value_namespace = name_space;
        block_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
        eeprom_size.value_namespace = name_space;
        eeprom_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-count")
    {
        block_count = value;
        block_count.value_namespace = name_space;
        block_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
        fru_major_type.value_namespace = name_space;
        fru_major_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
        fru_minor_type.value_namespace = name_space;
        fru_minor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
        oem_string.value_namespace = name_space;
        oem_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "product-id")
    {
        product_id = value;
        product_id.value_namespace = name_space;
        product_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
        part_revision.value_namespace = name_space;
        part_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
        mfg_deviation.value_namespace = name_space;
        mfg_deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
        mfg_bits.value_namespace = name_space;
        mfg_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
        engineer_use.value_namespace = name_space;
        engineer_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
        snmpoid.value_namespace = name_space;
        snmpoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
        rma_code.value_namespace = name_space;
        rma_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eci-alpha-number")
    {
        eci_alpha_number = value;
        eci_alpha_number.value_namespace = name_space;
        eci_alpha_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev.yfilter = yfilter;
    }
    if(value_path == "controller-family")
    {
        controller_family.yfilter = yfilter;
    }
    if(value_path == "controller-type")
    {
        controller_type.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "hwid")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "udi-description")
    {
        udi_description.yfilter = yfilter;
    }
    if(value_path == "udi-name")
    {
        udi_name.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "eci")
    {
        eci.yfilter = yfilter;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num.yfilter = yfilter;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid.yfilter = yfilter;
    }
    if(value_path == "pca-num")
    {
        pca_num.yfilter = yfilter;
    }
    if(value_path == "pcavid")
    {
        pcavid.yfilter = yfilter;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid.yfilter = yfilter;
    }
    if(value_path == "dev-num1")
    {
        dev_num1.yfilter = yfilter;
    }
    if(value_path == "dev-num2")
    {
        dev_num2.yfilter = yfilter;
    }
    if(value_path == "dev-num3")
    {
        dev_num3.yfilter = yfilter;
    }
    if(value_path == "dev-num4")
    {
        dev_num4.yfilter = yfilter;
    }
    if(value_path == "dev-num5")
    {
        dev_num5.yfilter = yfilter;
    }
    if(value_path == "dev-num6")
    {
        dev_num6.yfilter = yfilter;
    }
    if(value_path == "dev-num7")
    {
        dev_num7.yfilter = yfilter;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data.yfilter = yfilter;
    }
    if(value_path == "asset-id")
    {
        asset_id.yfilter = yfilter;
    }
    if(value_path == "asset-alias")
    {
        asset_alias.yfilter = yfilter;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1.yfilter = yfilter;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2.yfilter = yfilter;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3.yfilter = yfilter;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4.yfilter = yfilter;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num.yfilter = yfilter;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type.yfilter = yfilter;
    }
    if(value_path == "power-consumption")
    {
        power_consumption.yfilter = yfilter;
    }
    if(value_path == "block-signature")
    {
        block_signature.yfilter = yfilter;
    }
    if(value_path == "block-version")
    {
        block_version.yfilter = yfilter;
    }
    if(value_path == "block-length")
    {
        block_length.yfilter = yfilter;
    }
    if(value_path == "block-checksum")
    {
        block_checksum.yfilter = yfilter;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size.yfilter = yfilter;
    }
    if(value_path == "block-count")
    {
        block_count.yfilter = yfilter;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type.yfilter = yfilter;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type.yfilter = yfilter;
    }
    if(value_path == "oem-string")
    {
        oem_string.yfilter = yfilter;
    }
    if(value_path == "product-id")
    {
        product_id.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "part-revision")
    {
        part_revision.yfilter = yfilter;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation.yfilter = yfilter;
    }
    if(value_path == "hw-version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits.yfilter = yfilter;
    }
    if(value_path == "engineer-use")
    {
        engineer_use.yfilter = yfilter;
    }
    if(value_path == "snmpoid")
    {
        snmpoid.yfilter = yfilter;
    }
    if(value_path == "rma-code")
    {
        rma_code.yfilter = yfilter;
    }
    if(value_path == "eci-alpha-number")
    {
        eci_alpha_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rma" || name == "description" || name == "idprom-format-rev" || name == "controller-family" || name == "controller-type" || name == "vid" || name == "hwid" || name == "pid" || name == "udi-description" || name == "udi-name" || name == "clei" || name == "eci" || name == "top-assem-part-num" || name == "top-assem-vid" || name == "pca-num" || name == "pcavid" || name == "chassis-sid" || name == "dev-num1" || name == "dev-num2" || name == "dev-num3" || name == "dev-num4" || name == "dev-num5" || name == "dev-num6" || name == "dev-num7" || name == "manu-test-data" || name == "asset-id" || name == "asset-alias" || name == "base-mac-address1" || name == "mac-add-blk-size1" || name == "base-mac-address2" || name == "mac-add-blk-size2" || name == "base-mac-address3" || name == "mac-add-blk-size3" || name == "base-mac-address4" || name == "mac-add-blk-size4" || name == "pcb-serial-num" || name == "power-supply-type" || name == "power-consumption" || name == "block-signature" || name == "block-version" || name == "block-length" || name == "block-checksum" || name == "eeprom-size" || name == "block-count" || name == "fru-major-type" || name == "fru-minor-type" || name == "oem-string" || name == "product-id" || name == "serial-number" || name == "part-number" || name == "part-revision" || name == "mfg-deviation" || name == "hw-version" || name == "mfg-bits" || name == "engineer-use" || name == "snmpoid" || name == "rma-code" || name == "eci-alpha-number")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::Rma()
    :
    test_history{YType::str, "test-history"},
    rma_number{YType::str, "rma-number"},
    rma_history{YType::str, "rma-history"}
{

    yang_name = "rma"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::~Rma()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::has_data() const
{
    if (is_presence_container) return true;
    return test_history.is_set
	|| rma_number.is_set
	|| rma_history.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_history.yfilter)
	|| ydk::is_set(rma_number.yfilter)
	|| ydk::is_set(rma_history.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_history.is_set || is_set(test_history.yfilter)) leaf_name_data.push_back(test_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.yfilter)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (rma_history.is_set || is_set(rma_history.yfilter)) leaf_name_data.push_back(rma_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test-history")
    {
        test_history = value;
        test_history.value_namespace = name_space;
        test_history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
        rma_number.value_namespace = name_space;
        rma_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-history")
    {
        rma_history = value;
        rma_history.value_namespace = name_space;
        rma_history.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test-history")
    {
        test_history.yfilter = yfilter;
    }
    if(value_path == "rma-number")
    {
        rma_number.yfilter = yfilter;
    }
    if(value_path == "rma-history")
    {
        rma_history.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Fanses::Fans::Information::Rma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-history" || name == "rma-number" || name == "rma-history")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slots()
    :
    slot(this, {"slot_name"})
{

    yang_name = "slots"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::~Slots()
{
}

bool Diag::Racks::Rack::Slots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot>();
        ent_->parent = this;
        slot.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slot.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Slot()
    :
    slot_name{YType::str, "slot-name"}
        ,
    instances(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances>())
{
    instances->parent = this;

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::~Slot()
{
}

bool Diag::Racks::Rack::Slots::Slot::has_data() const
{
    if (is_presence_container) return true;
    return slot_name.is_set
	|| (instances !=  nullptr && instances->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_name.yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot";
    ADD_KEY_TOKEN(slot_name, "slot-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_name.is_set || is_set(slot_name.yfilter)) leaf_name_data.push_back(slot_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(instances != nullptr)
    {
        _children["instances"] = instances;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-name")
    {
        slot_name = value;
        slot_name.value_namespace = name_space;
        slot_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-name")
    {
        slot_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances" || name == "slot-name")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instances()
    :
    instance(this, {"name"})
{

    yang_name = "instances"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::~Instances()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::Slot::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Instance()
    :
    name{YType::str, "name"}
        ,
    detail(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail>())
{
    detail->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::~Instance()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "name")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Detail()
    :
    node_operational_state{YType::str, "node-operational-state"}
        ,
    card_instance(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance>())
{
    card_instance->parent = this;

    yang_name = "detail"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::~Detail()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::has_data() const
{
    if (is_presence_container) return true;
    return node_operational_state.is_set
	|| (card_instance !=  nullptr && card_instance->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_operational_state.yfilter)
	|| (card_instance !=  nullptr && card_instance->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_operational_state.is_set || is_set(node_operational_state.yfilter)) leaf_name_data.push_back(node_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-instance")
    {
        if(card_instance == nullptr)
        {
            card_instance = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance>();
        }
        return card_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_instance != nullptr)
    {
        _children["card-instance"] = card_instance;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-operational-state")
    {
        node_operational_state = value;
        node_operational_state.value_namespace = name_space;
        node_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-operational-state")
    {
        node_operational_state.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-instance" || name == "node-operational-state")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::CardInstance()
    :
    description{YType::str, "description"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    vid{YType::str, "vid"},
    hwid{YType::str, "hwid"},
    pid{YType::str, "pid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    clei{YType::str, "clei"},
    eci{YType::str, "eci"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    chassis_sid{YType::str, "chassis-sid"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    manu_test_data{YType::str, "manu-test-data"},
    asset_id{YType::str, "asset-id"},
    asset_alias{YType::str, "asset-alias"},
    base_mac_address1{YType::str, "base-mac-address1"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    power_supply_type{YType::str, "power-supply-type"},
    power_consumption{YType::str, "power-consumption"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    block_length{YType::str, "block-length"},
    block_checksum{YType::str, "block-checksum"},
    eeprom_size{YType::str, "eeprom-size"},
    block_count{YType::str, "block-count"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    oem_string{YType::str, "oem-string"},
    product_id{YType::str, "product-id"},
    serial_number{YType::str, "serial-number"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    mfg_deviation{YType::str, "mfg-deviation"},
    hw_version{YType::str, "hw-version"},
    mfg_bits{YType::str, "mfg-bits"},
    engineer_use{YType::str, "engineer-use"},
    snmpoid{YType::str, "snmpoid"},
    rma_code{YType::str, "rma-code"},
    eci_alpha_number{YType::str, "eci-alpha-number"}
        ,
    rma(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma>())
{
    rma->parent = this;

    yang_name = "card-instance"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::~CardInstance()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| idprom_format_rev.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| vid.is_set
	|| hwid.is_set
	|| pid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| clei.is_set
	|| eci.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| chassis_sid.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| manu_test_data.is_set
	|| asset_id.is_set
	|| asset_alias.is_set
	|| base_mac_address1.is_set
	|| mac_add_blk_size1.is_set
	|| base_mac_address2.is_set
	|| mac_add_blk_size2.is_set
	|| base_mac_address3.is_set
	|| mac_add_blk_size3.is_set
	|| base_mac_address4.is_set
	|| mac_add_blk_size4.is_set
	|| pcb_serial_num.is_set
	|| power_supply_type.is_set
	|| power_consumption.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| block_length.is_set
	|| block_checksum.is_set
	|| eeprom_size.is_set
	|| block_count.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| oem_string.is_set
	|| product_id.is_set
	|| serial_number.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| mfg_deviation.is_set
	|| hw_version.is_set
	|| mfg_bits.is_set
	|| engineer_use.is_set
	|| snmpoid.is_set
	|| rma_code.is_set
	|| eci_alpha_number.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(idprom_format_rev.yfilter)
	|| ydk::is_set(controller_family.yfilter)
	|| ydk::is_set(controller_type.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(udi_description.yfilter)
	|| ydk::is_set(udi_name.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(eci.yfilter)
	|| ydk::is_set(top_assem_part_num.yfilter)
	|| ydk::is_set(top_assem_vid.yfilter)
	|| ydk::is_set(pca_num.yfilter)
	|| ydk::is_set(pcavid.yfilter)
	|| ydk::is_set(chassis_sid.yfilter)
	|| ydk::is_set(dev_num1.yfilter)
	|| ydk::is_set(dev_num2.yfilter)
	|| ydk::is_set(dev_num3.yfilter)
	|| ydk::is_set(dev_num4.yfilter)
	|| ydk::is_set(dev_num5.yfilter)
	|| ydk::is_set(dev_num6.yfilter)
	|| ydk::is_set(dev_num7.yfilter)
	|| ydk::is_set(manu_test_data.yfilter)
	|| ydk::is_set(asset_id.yfilter)
	|| ydk::is_set(asset_alias.yfilter)
	|| ydk::is_set(base_mac_address1.yfilter)
	|| ydk::is_set(mac_add_blk_size1.yfilter)
	|| ydk::is_set(base_mac_address2.yfilter)
	|| ydk::is_set(mac_add_blk_size2.yfilter)
	|| ydk::is_set(base_mac_address3.yfilter)
	|| ydk::is_set(mac_add_blk_size3.yfilter)
	|| ydk::is_set(base_mac_address4.yfilter)
	|| ydk::is_set(mac_add_blk_size4.yfilter)
	|| ydk::is_set(pcb_serial_num.yfilter)
	|| ydk::is_set(power_supply_type.yfilter)
	|| ydk::is_set(power_consumption.yfilter)
	|| ydk::is_set(block_signature.yfilter)
	|| ydk::is_set(block_version.yfilter)
	|| ydk::is_set(block_length.yfilter)
	|| ydk::is_set(block_checksum.yfilter)
	|| ydk::is_set(eeprom_size.yfilter)
	|| ydk::is_set(block_count.yfilter)
	|| ydk::is_set(fru_major_type.yfilter)
	|| ydk::is_set(fru_minor_type.yfilter)
	|| ydk::is_set(oem_string.yfilter)
	|| ydk::is_set(product_id.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(part_revision.yfilter)
	|| ydk::is_set(mfg_deviation.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(mfg_bits.yfilter)
	|| ydk::is_set(engineer_use.yfilter)
	|| ydk::is_set(snmpoid.yfilter)
	|| ydk::is_set(rma_code.yfilter)
	|| ydk::is_set(eci_alpha_number.yfilter)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.yfilter)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.yfilter)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.yfilter)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.yfilter)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.yfilter)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (eci.is_set || is_set(eci.yfilter)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.yfilter)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.yfilter)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.yfilter)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.yfilter)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.yfilter)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.yfilter)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.yfilter)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.yfilter)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.yfilter)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.yfilter)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.yfilter)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.yfilter)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.yfilter)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.yfilter)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (asset_alias.is_set || is_set(asset_alias.yfilter)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.yfilter)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.yfilter)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.yfilter)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.yfilter)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.yfilter)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.yfilter)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.yfilter)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.yfilter)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.yfilter)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.yfilter)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.yfilter)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.yfilter)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.yfilter)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.yfilter)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.yfilter)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.yfilter)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.yfilter)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.yfilter)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.yfilter)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.yfilter)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.yfilter)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.yfilter)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.yfilter)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.yfilter)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.yfilter)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.yfilter)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.yfilter)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (eci_alpha_number.is_set || is_set(eci_alpha_number.yfilter)) leaf_name_data.push_back(eci_alpha_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rma != nullptr)
    {
        _children["rma"] = rma;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
        idprom_format_rev.value_namespace = name_space;
        idprom_format_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
        controller_family.value_namespace = name_space;
        controller_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
        controller_type.value_namespace = name_space;
        controller_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwid")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
        udi_description.value_namespace = name_space;
        udi_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
        udi_name.value_namespace = name_space;
        udi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eci")
    {
        eci = value;
        eci.value_namespace = name_space;
        eci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
        top_assem_part_num.value_namespace = name_space;
        top_assem_part_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
        top_assem_vid.value_namespace = name_space;
        top_assem_vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
        pca_num.value_namespace = name_space;
        pca_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
        pcavid.value_namespace = name_space;
        pcavid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
        chassis_sid.value_namespace = name_space;
        chassis_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
        dev_num1.value_namespace = name_space;
        dev_num1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
        dev_num2.value_namespace = name_space;
        dev_num2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
        dev_num3.value_namespace = name_space;
        dev_num3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
        dev_num4.value_namespace = name_space;
        dev_num4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
        dev_num5.value_namespace = name_space;
        dev_num5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
        dev_num6.value_namespace = name_space;
        dev_num6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
        dev_num7.value_namespace = name_space;
        dev_num7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
        manu_test_data.value_namespace = name_space;
        manu_test_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
        asset_id.value_namespace = name_space;
        asset_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-alias")
    {
        asset_alias = value;
        asset_alias.value_namespace = name_space;
        asset_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
        base_mac_address1.value_namespace = name_space;
        base_mac_address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
        mac_add_blk_size1.value_namespace = name_space;
        mac_add_blk_size1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
        base_mac_address2.value_namespace = name_space;
        base_mac_address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
        mac_add_blk_size2.value_namespace = name_space;
        mac_add_blk_size2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
        base_mac_address3.value_namespace = name_space;
        base_mac_address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
        mac_add_blk_size3.value_namespace = name_space;
        mac_add_blk_size3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
        base_mac_address4.value_namespace = name_space;
        base_mac_address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
        mac_add_blk_size4.value_namespace = name_space;
        mac_add_blk_size4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
        pcb_serial_num.value_namespace = name_space;
        pcb_serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
        power_supply_type.value_namespace = name_space;
        power_supply_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
        power_consumption.value_namespace = name_space;
        power_consumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
        block_signature.value_namespace = name_space;
        block_signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-version")
    {
        block_version = value;
        block_version.value_namespace = name_space;
        block_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-length")
    {
        block_length = value;
        block_length.value_namespace = name_space;
        block_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
        block_checksum.value_namespace = name_space;
        block_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
        eeprom_size.value_namespace = name_space;
        eeprom_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-count")
    {
        block_count = value;
        block_count.value_namespace = name_space;
        block_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
        fru_major_type.value_namespace = name_space;
        fru_major_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
        fru_minor_type.value_namespace = name_space;
        fru_minor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
        oem_string.value_namespace = name_space;
        oem_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "product-id")
    {
        product_id = value;
        product_id.value_namespace = name_space;
        product_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
        part_revision.value_namespace = name_space;
        part_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
        mfg_deviation.value_namespace = name_space;
        mfg_deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
        mfg_bits.value_namespace = name_space;
        mfg_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
        engineer_use.value_namespace = name_space;
        engineer_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
        snmpoid.value_namespace = name_space;
        snmpoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
        rma_code.value_namespace = name_space;
        rma_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eci-alpha-number")
    {
        eci_alpha_number = value;
        eci_alpha_number.value_namespace = name_space;
        eci_alpha_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev.yfilter = yfilter;
    }
    if(value_path == "controller-family")
    {
        controller_family.yfilter = yfilter;
    }
    if(value_path == "controller-type")
    {
        controller_type.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "hwid")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "udi-description")
    {
        udi_description.yfilter = yfilter;
    }
    if(value_path == "udi-name")
    {
        udi_name.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "eci")
    {
        eci.yfilter = yfilter;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num.yfilter = yfilter;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid.yfilter = yfilter;
    }
    if(value_path == "pca-num")
    {
        pca_num.yfilter = yfilter;
    }
    if(value_path == "pcavid")
    {
        pcavid.yfilter = yfilter;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid.yfilter = yfilter;
    }
    if(value_path == "dev-num1")
    {
        dev_num1.yfilter = yfilter;
    }
    if(value_path == "dev-num2")
    {
        dev_num2.yfilter = yfilter;
    }
    if(value_path == "dev-num3")
    {
        dev_num3.yfilter = yfilter;
    }
    if(value_path == "dev-num4")
    {
        dev_num4.yfilter = yfilter;
    }
    if(value_path == "dev-num5")
    {
        dev_num5.yfilter = yfilter;
    }
    if(value_path == "dev-num6")
    {
        dev_num6.yfilter = yfilter;
    }
    if(value_path == "dev-num7")
    {
        dev_num7.yfilter = yfilter;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data.yfilter = yfilter;
    }
    if(value_path == "asset-id")
    {
        asset_id.yfilter = yfilter;
    }
    if(value_path == "asset-alias")
    {
        asset_alias.yfilter = yfilter;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1.yfilter = yfilter;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2.yfilter = yfilter;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3.yfilter = yfilter;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4.yfilter = yfilter;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num.yfilter = yfilter;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type.yfilter = yfilter;
    }
    if(value_path == "power-consumption")
    {
        power_consumption.yfilter = yfilter;
    }
    if(value_path == "block-signature")
    {
        block_signature.yfilter = yfilter;
    }
    if(value_path == "block-version")
    {
        block_version.yfilter = yfilter;
    }
    if(value_path == "block-length")
    {
        block_length.yfilter = yfilter;
    }
    if(value_path == "block-checksum")
    {
        block_checksum.yfilter = yfilter;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size.yfilter = yfilter;
    }
    if(value_path == "block-count")
    {
        block_count.yfilter = yfilter;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type.yfilter = yfilter;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type.yfilter = yfilter;
    }
    if(value_path == "oem-string")
    {
        oem_string.yfilter = yfilter;
    }
    if(value_path == "product-id")
    {
        product_id.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "part-revision")
    {
        part_revision.yfilter = yfilter;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation.yfilter = yfilter;
    }
    if(value_path == "hw-version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits.yfilter = yfilter;
    }
    if(value_path == "engineer-use")
    {
        engineer_use.yfilter = yfilter;
    }
    if(value_path == "snmpoid")
    {
        snmpoid.yfilter = yfilter;
    }
    if(value_path == "rma-code")
    {
        rma_code.yfilter = yfilter;
    }
    if(value_path == "eci-alpha-number")
    {
        eci_alpha_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rma" || name == "description" || name == "idprom-format-rev" || name == "controller-family" || name == "controller-type" || name == "vid" || name == "hwid" || name == "pid" || name == "udi-description" || name == "udi-name" || name == "clei" || name == "eci" || name == "top-assem-part-num" || name == "top-assem-vid" || name == "pca-num" || name == "pcavid" || name == "chassis-sid" || name == "dev-num1" || name == "dev-num2" || name == "dev-num3" || name == "dev-num4" || name == "dev-num5" || name == "dev-num6" || name == "dev-num7" || name == "manu-test-data" || name == "asset-id" || name == "asset-alias" || name == "base-mac-address1" || name == "mac-add-blk-size1" || name == "base-mac-address2" || name == "mac-add-blk-size2" || name == "base-mac-address3" || name == "mac-add-blk-size3" || name == "base-mac-address4" || name == "mac-add-blk-size4" || name == "pcb-serial-num" || name == "power-supply-type" || name == "power-consumption" || name == "block-signature" || name == "block-version" || name == "block-length" || name == "block-checksum" || name == "eeprom-size" || name == "block-count" || name == "fru-major-type" || name == "fru-minor-type" || name == "oem-string" || name == "product-id" || name == "serial-number" || name == "part-number" || name == "part-revision" || name == "mfg-deviation" || name == "hw-version" || name == "mfg-bits" || name == "engineer-use" || name == "snmpoid" || name == "rma-code" || name == "eci-alpha-number")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::Rma()
    :
    test_history{YType::str, "test-history"},
    rma_number{YType::str, "rma-number"},
    rma_history{YType::str, "rma-history"}
{

    yang_name = "rma"; yang_parent_name = "card-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::~Rma()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::has_data() const
{
    if (is_presence_container) return true;
    return test_history.is_set
	|| rma_number.is_set
	|| rma_history.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_history.yfilter)
	|| ydk::is_set(rma_number.yfilter)
	|| ydk::is_set(rma_history.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_history.is_set || is_set(test_history.yfilter)) leaf_name_data.push_back(test_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.yfilter)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (rma_history.is_set || is_set(rma_history.yfilter)) leaf_name_data.push_back(rma_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test-history")
    {
        test_history = value;
        test_history.value_namespace = name_space;
        test_history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
        rma_number.value_namespace = name_space;
        rma_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-history")
    {
        rma_history = value;
        rma_history.value_namespace = name_space;
        rma_history.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test-history")
    {
        test_history.yfilter = yfilter;
    }
    if(value_path == "rma-number")
    {
        rma_number.yfilter = yfilter;
    }
    if(value_path == "rma-history")
    {
        rma_history.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::CardInstance::Rma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-history" || name == "rma-number" || name == "rma-history")
        return true;
    return false;
}

Diag::Racks::Rack::Chassis::Chassis()
    :
    description{YType::str, "description"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    vid{YType::str, "vid"},
    hwid{YType::str, "hwid"},
    pid{YType::str, "pid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    clei{YType::str, "clei"},
    eci{YType::str, "eci"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    chassis_sid{YType::str, "chassis-sid"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    manu_test_data{YType::str, "manu-test-data"},
    asset_id{YType::str, "asset-id"},
    asset_alias{YType::str, "asset-alias"},
    base_mac_address1{YType::str, "base-mac-address1"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    power_supply_type{YType::str, "power-supply-type"},
    power_consumption{YType::str, "power-consumption"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    block_length{YType::str, "block-length"},
    block_checksum{YType::str, "block-checksum"},
    eeprom_size{YType::str, "eeprom-size"},
    block_count{YType::str, "block-count"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    oem_string{YType::str, "oem-string"},
    product_id{YType::str, "product-id"},
    serial_number{YType::str, "serial-number"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    mfg_deviation{YType::str, "mfg-deviation"},
    hw_version{YType::str, "hw-version"},
    mfg_bits{YType::str, "mfg-bits"},
    engineer_use{YType::str, "engineer-use"},
    snmpoid{YType::str, "snmpoid"},
    rma_code{YType::str, "rma-code"},
    eci_alpha_number{YType::str, "eci-alpha-number"}
        ,
    rma(std::make_shared<Diag::Racks::Rack::Chassis::Rma>())
{
    rma->parent = this;

    yang_name = "chassis"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Chassis::~Chassis()
{
}

bool Diag::Racks::Rack::Chassis::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| idprom_format_rev.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| vid.is_set
	|| hwid.is_set
	|| pid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| clei.is_set
	|| eci.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| chassis_sid.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| manu_test_data.is_set
	|| asset_id.is_set
	|| asset_alias.is_set
	|| base_mac_address1.is_set
	|| mac_add_blk_size1.is_set
	|| base_mac_address2.is_set
	|| mac_add_blk_size2.is_set
	|| base_mac_address3.is_set
	|| mac_add_blk_size3.is_set
	|| base_mac_address4.is_set
	|| mac_add_blk_size4.is_set
	|| pcb_serial_num.is_set
	|| power_supply_type.is_set
	|| power_consumption.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| block_length.is_set
	|| block_checksum.is_set
	|| eeprom_size.is_set
	|| block_count.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| oem_string.is_set
	|| product_id.is_set
	|| serial_number.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| mfg_deviation.is_set
	|| hw_version.is_set
	|| mfg_bits.is_set
	|| engineer_use.is_set
	|| snmpoid.is_set
	|| rma_code.is_set
	|| eci_alpha_number.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Diag::Racks::Rack::Chassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(idprom_format_rev.yfilter)
	|| ydk::is_set(controller_family.yfilter)
	|| ydk::is_set(controller_type.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(udi_description.yfilter)
	|| ydk::is_set(udi_name.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(eci.yfilter)
	|| ydk::is_set(top_assem_part_num.yfilter)
	|| ydk::is_set(top_assem_vid.yfilter)
	|| ydk::is_set(pca_num.yfilter)
	|| ydk::is_set(pcavid.yfilter)
	|| ydk::is_set(chassis_sid.yfilter)
	|| ydk::is_set(dev_num1.yfilter)
	|| ydk::is_set(dev_num2.yfilter)
	|| ydk::is_set(dev_num3.yfilter)
	|| ydk::is_set(dev_num4.yfilter)
	|| ydk::is_set(dev_num5.yfilter)
	|| ydk::is_set(dev_num6.yfilter)
	|| ydk::is_set(dev_num7.yfilter)
	|| ydk::is_set(manu_test_data.yfilter)
	|| ydk::is_set(asset_id.yfilter)
	|| ydk::is_set(asset_alias.yfilter)
	|| ydk::is_set(base_mac_address1.yfilter)
	|| ydk::is_set(mac_add_blk_size1.yfilter)
	|| ydk::is_set(base_mac_address2.yfilter)
	|| ydk::is_set(mac_add_blk_size2.yfilter)
	|| ydk::is_set(base_mac_address3.yfilter)
	|| ydk::is_set(mac_add_blk_size3.yfilter)
	|| ydk::is_set(base_mac_address4.yfilter)
	|| ydk::is_set(mac_add_blk_size4.yfilter)
	|| ydk::is_set(pcb_serial_num.yfilter)
	|| ydk::is_set(power_supply_type.yfilter)
	|| ydk::is_set(power_consumption.yfilter)
	|| ydk::is_set(block_signature.yfilter)
	|| ydk::is_set(block_version.yfilter)
	|| ydk::is_set(block_length.yfilter)
	|| ydk::is_set(block_checksum.yfilter)
	|| ydk::is_set(eeprom_size.yfilter)
	|| ydk::is_set(block_count.yfilter)
	|| ydk::is_set(fru_major_type.yfilter)
	|| ydk::is_set(fru_minor_type.yfilter)
	|| ydk::is_set(oem_string.yfilter)
	|| ydk::is_set(product_id.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(part_revision.yfilter)
	|| ydk::is_set(mfg_deviation.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(mfg_bits.yfilter)
	|| ydk::is_set(engineer_use.yfilter)
	|| ydk::is_set(snmpoid.yfilter)
	|| ydk::is_set(rma_code.yfilter)
	|| ydk::is_set(eci_alpha_number.yfilter)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Diag::Racks::Rack::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Chassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.yfilter)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.yfilter)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.yfilter)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.yfilter)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.yfilter)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (eci.is_set || is_set(eci.yfilter)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.yfilter)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.yfilter)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.yfilter)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.yfilter)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.yfilter)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.yfilter)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.yfilter)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.yfilter)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.yfilter)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.yfilter)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.yfilter)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.yfilter)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.yfilter)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.yfilter)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (asset_alias.is_set || is_set(asset_alias.yfilter)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.yfilter)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.yfilter)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.yfilter)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.yfilter)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.yfilter)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.yfilter)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.yfilter)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.yfilter)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.yfilter)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.yfilter)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.yfilter)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.yfilter)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.yfilter)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.yfilter)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.yfilter)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.yfilter)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.yfilter)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.yfilter)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.yfilter)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.yfilter)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.yfilter)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.yfilter)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.yfilter)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.yfilter)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.yfilter)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.yfilter)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.yfilter)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (eci_alpha_number.is_set || is_set(eci_alpha_number.yfilter)) leaf_name_data.push_back(eci_alpha_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Diag::Racks::Rack::Chassis::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rma != nullptr)
    {
        _children["rma"] = rma;
    }

    return _children;
}

void Diag::Racks::Rack::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
        idprom_format_rev.value_namespace = name_space;
        idprom_format_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
        controller_family.value_namespace = name_space;
        controller_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
        controller_type.value_namespace = name_space;
        controller_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwid")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
        udi_description.value_namespace = name_space;
        udi_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
        udi_name.value_namespace = name_space;
        udi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eci")
    {
        eci = value;
        eci.value_namespace = name_space;
        eci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
        top_assem_part_num.value_namespace = name_space;
        top_assem_part_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
        top_assem_vid.value_namespace = name_space;
        top_assem_vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
        pca_num.value_namespace = name_space;
        pca_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
        pcavid.value_namespace = name_space;
        pcavid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
        chassis_sid.value_namespace = name_space;
        chassis_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
        dev_num1.value_namespace = name_space;
        dev_num1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
        dev_num2.value_namespace = name_space;
        dev_num2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
        dev_num3.value_namespace = name_space;
        dev_num3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
        dev_num4.value_namespace = name_space;
        dev_num4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
        dev_num5.value_namespace = name_space;
        dev_num5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
        dev_num6.value_namespace = name_space;
        dev_num6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
        dev_num7.value_namespace = name_space;
        dev_num7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
        manu_test_data.value_namespace = name_space;
        manu_test_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
        asset_id.value_namespace = name_space;
        asset_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-alias")
    {
        asset_alias = value;
        asset_alias.value_namespace = name_space;
        asset_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
        base_mac_address1.value_namespace = name_space;
        base_mac_address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
        mac_add_blk_size1.value_namespace = name_space;
        mac_add_blk_size1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
        base_mac_address2.value_namespace = name_space;
        base_mac_address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
        mac_add_blk_size2.value_namespace = name_space;
        mac_add_blk_size2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
        base_mac_address3.value_namespace = name_space;
        base_mac_address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
        mac_add_blk_size3.value_namespace = name_space;
        mac_add_blk_size3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
        base_mac_address4.value_namespace = name_space;
        base_mac_address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
        mac_add_blk_size4.value_namespace = name_space;
        mac_add_blk_size4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
        pcb_serial_num.value_namespace = name_space;
        pcb_serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
        power_supply_type.value_namespace = name_space;
        power_supply_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
        power_consumption.value_namespace = name_space;
        power_consumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
        block_signature.value_namespace = name_space;
        block_signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-version")
    {
        block_version = value;
        block_version.value_namespace = name_space;
        block_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-length")
    {
        block_length = value;
        block_length.value_namespace = name_space;
        block_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
        block_checksum.value_namespace = name_space;
        block_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
        eeprom_size.value_namespace = name_space;
        eeprom_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-count")
    {
        block_count = value;
        block_count.value_namespace = name_space;
        block_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
        fru_major_type.value_namespace = name_space;
        fru_major_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
        fru_minor_type.value_namespace = name_space;
        fru_minor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
        oem_string.value_namespace = name_space;
        oem_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "product-id")
    {
        product_id = value;
        product_id.value_namespace = name_space;
        product_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
        part_revision.value_namespace = name_space;
        part_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
        mfg_deviation.value_namespace = name_space;
        mfg_deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
        mfg_bits.value_namespace = name_space;
        mfg_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
        engineer_use.value_namespace = name_space;
        engineer_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
        snmpoid.value_namespace = name_space;
        snmpoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
        rma_code.value_namespace = name_space;
        rma_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eci-alpha-number")
    {
        eci_alpha_number = value;
        eci_alpha_number.value_namespace = name_space;
        eci_alpha_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev.yfilter = yfilter;
    }
    if(value_path == "controller-family")
    {
        controller_family.yfilter = yfilter;
    }
    if(value_path == "controller-type")
    {
        controller_type.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "hwid")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "udi-description")
    {
        udi_description.yfilter = yfilter;
    }
    if(value_path == "udi-name")
    {
        udi_name.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "eci")
    {
        eci.yfilter = yfilter;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num.yfilter = yfilter;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid.yfilter = yfilter;
    }
    if(value_path == "pca-num")
    {
        pca_num.yfilter = yfilter;
    }
    if(value_path == "pcavid")
    {
        pcavid.yfilter = yfilter;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid.yfilter = yfilter;
    }
    if(value_path == "dev-num1")
    {
        dev_num1.yfilter = yfilter;
    }
    if(value_path == "dev-num2")
    {
        dev_num2.yfilter = yfilter;
    }
    if(value_path == "dev-num3")
    {
        dev_num3.yfilter = yfilter;
    }
    if(value_path == "dev-num4")
    {
        dev_num4.yfilter = yfilter;
    }
    if(value_path == "dev-num5")
    {
        dev_num5.yfilter = yfilter;
    }
    if(value_path == "dev-num6")
    {
        dev_num6.yfilter = yfilter;
    }
    if(value_path == "dev-num7")
    {
        dev_num7.yfilter = yfilter;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data.yfilter = yfilter;
    }
    if(value_path == "asset-id")
    {
        asset_id.yfilter = yfilter;
    }
    if(value_path == "asset-alias")
    {
        asset_alias.yfilter = yfilter;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1.yfilter = yfilter;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2.yfilter = yfilter;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3.yfilter = yfilter;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4.yfilter = yfilter;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4.yfilter = yfilter;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num.yfilter = yfilter;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type.yfilter = yfilter;
    }
    if(value_path == "power-consumption")
    {
        power_consumption.yfilter = yfilter;
    }
    if(value_path == "block-signature")
    {
        block_signature.yfilter = yfilter;
    }
    if(value_path == "block-version")
    {
        block_version.yfilter = yfilter;
    }
    if(value_path == "block-length")
    {
        block_length.yfilter = yfilter;
    }
    if(value_path == "block-checksum")
    {
        block_checksum.yfilter = yfilter;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size.yfilter = yfilter;
    }
    if(value_path == "block-count")
    {
        block_count.yfilter = yfilter;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type.yfilter = yfilter;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type.yfilter = yfilter;
    }
    if(value_path == "oem-string")
    {
        oem_string.yfilter = yfilter;
    }
    if(value_path == "product-id")
    {
        product_id.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "part-revision")
    {
        part_revision.yfilter = yfilter;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation.yfilter = yfilter;
    }
    if(value_path == "hw-version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits.yfilter = yfilter;
    }
    if(value_path == "engineer-use")
    {
        engineer_use.yfilter = yfilter;
    }
    if(value_path == "snmpoid")
    {
        snmpoid.yfilter = yfilter;
    }
    if(value_path == "rma-code")
    {
        rma_code.yfilter = yfilter;
    }
    if(value_path == "eci-alpha-number")
    {
        eci_alpha_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rma" || name == "description" || name == "idprom-format-rev" || name == "controller-family" || name == "controller-type" || name == "vid" || name == "hwid" || name == "pid" || name == "udi-description" || name == "udi-name" || name == "clei" || name == "eci" || name == "top-assem-part-num" || name == "top-assem-vid" || name == "pca-num" || name == "pcavid" || name == "chassis-sid" || name == "dev-num1" || name == "dev-num2" || name == "dev-num3" || name == "dev-num4" || name == "dev-num5" || name == "dev-num6" || name == "dev-num7" || name == "manu-test-data" || name == "asset-id" || name == "asset-alias" || name == "base-mac-address1" || name == "mac-add-blk-size1" || name == "base-mac-address2" || name == "mac-add-blk-size2" || name == "base-mac-address3" || name == "mac-add-blk-size3" || name == "base-mac-address4" || name == "mac-add-blk-size4" || name == "pcb-serial-num" || name == "power-supply-type" || name == "power-consumption" || name == "block-signature" || name == "block-version" || name == "block-length" || name == "block-checksum" || name == "eeprom-size" || name == "block-count" || name == "fru-major-type" || name == "fru-minor-type" || name == "oem-string" || name == "product-id" || name == "serial-number" || name == "part-number" || name == "part-revision" || name == "mfg-deviation" || name == "hw-version" || name == "mfg-bits" || name == "engineer-use" || name == "snmpoid" || name == "rma-code" || name == "eci-alpha-number")
        return true;
    return false;
}

Diag::Racks::Rack::Chassis::Rma::Rma()
    :
    test_history{YType::str, "test-history"},
    rma_number{YType::str, "rma-number"},
    rma_history{YType::str, "rma-history"}
{

    yang_name = "rma"; yang_parent_name = "chassis"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Chassis::Rma::~Rma()
{
}

bool Diag::Racks::Rack::Chassis::Rma::has_data() const
{
    if (is_presence_container) return true;
    return test_history.is_set
	|| rma_number.is_set
	|| rma_history.is_set;
}

bool Diag::Racks::Rack::Chassis::Rma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_history.yfilter)
	|| ydk::is_set(rma_number.yfilter)
	|| ydk::is_set(rma_history.yfilter);
}

std::string Diag::Racks::Rack::Chassis::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Chassis::Rma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_history.is_set || is_set(test_history.yfilter)) leaf_name_data.push_back(test_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.yfilter)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (rma_history.is_set || is_set(rma_history.yfilter)) leaf_name_data.push_back(rma_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Chassis::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Chassis::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Chassis::Rma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test-history")
    {
        test_history = value;
        test_history.value_namespace = name_space;
        test_history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
        rma_number.value_namespace = name_space;
        rma_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rma-history")
    {
        rma_history = value;
        rma_history.value_namespace = name_space;
        rma_history.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Chassis::Rma::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test-history")
    {
        test_history.yfilter = yfilter;
    }
    if(value_path == "rma-number")
    {
        rma_number.yfilter = yfilter;
    }
    if(value_path == "rma-history")
    {
        rma_history.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Chassis::Rma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-history" || name == "rma-number" || name == "rma-history")
        return true;
    return false;
}


}
}

