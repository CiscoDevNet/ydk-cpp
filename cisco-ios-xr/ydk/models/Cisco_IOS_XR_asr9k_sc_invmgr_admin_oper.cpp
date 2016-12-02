
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper {

Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "power-supply-shelf";
}

Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data());
}

bool Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation));
}

std::string Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::PowerSupplyShelf()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    yang_name = "power-supply-shelf"; yang_parent_name = "power-supply-shelfs";
}

Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::~PowerSupplyShelf()
{
}

bool Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation));
}

std::string Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply-shelf" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelfs()
{
    yang_name = "power-supply-shelfs"; yang_parent_name = "rack";
}

Inventory::Racks::Rack::PowerSupplyShelfs::~PowerSupplyShelfs()
{
}

bool Inventory::Racks::Rack::PowerSupplyShelfs::has_data() const
{
    for (std::size_t index=0; index<power_supply_shelf.size(); index++)
    {
        if(power_supply_shelf[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::PowerSupplyShelfs::has_operation() const
{
    for (std::size_t index=0; index<power_supply_shelf.size(); index++)
    {
        if(power_supply_shelf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::PowerSupplyShelfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply-shelfs";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::PowerSupplyShelfs::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::PowerSupplyShelfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "power-supply-shelf")
    {
        for(auto const & c : power_supply_shelf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::PowerSupplyShelfs::PowerSupplyShelf>();
        c->parent = this;
        power_supply_shelf.push_back(std::move(c));
        children[segment_path] = power_supply_shelf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::PowerSupplyShelfs::get_children()
{
    for (auto const & c : power_supply_shelf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::PowerSupplyShelfs::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "port";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Port()
    :
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    yang_name = "port"; yang_parent_name = "port-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::~Port()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_data() const
{
    return (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_operation() const
{
    return is_set(operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "port-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::PortSlot()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes>())
	,port(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    port->parent = this;
    children["port"] = port.get();

    yang_name = "port-slot"; yang_parent_name = "port-slots";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::~PortSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation))
	|| (port !=  nullptr && is_set(port->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
        else
        {
            port = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port>();
            port->parent = this;
            children["port"] = port.get();
        }
        return children.at("port");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlots()
{
    yang_name = "port-slots"; yang_parent_name = "module";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::~PortSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_data() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_operation() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-slot")
    {
        for(auto const & c : port_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.push_back(std::move(c));
        children[segment_path] = port_slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_children()
{
    for (auto const & c : port_slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "sensor";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Sensor()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    yang_name = "sensor"; yang_parent_name = "sensors";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "module";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(std::move(c));
        children[segment_path] = sensor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_children()
{
    for (auto const & c : sensor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "module";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Module()
    :
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes>())
	,port_slots(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>())
	,sensors(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    port_slots->parent = this;
    children["port-slots"] = port_slots.get();

    sensors->parent = this;
    children["sensors"] = sensors.get();

    yang_name = "module"; yang_parent_name = "sub-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::~Module()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_data() const
{
    return (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (port_slots !=  nullptr && port_slots->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_operation() const
{
    return is_set(operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation))
	|| (port_slots !=  nullptr && is_set(port_slots->operation))
	|| (sensors !=  nullptr && is_set(sensors->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots != nullptr)
        {
            children["port-slots"] = port_slots.get();
        }
        else
        {
            port_slots = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>();
            port_slots->parent = this;
            children["port-slots"] = port_slots.get();
        }
        return children.at("port-slots");
    }

    if(child_yang_name == "sensors")
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
        else
        {
            sensors = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>();
            sensors->parent = this;
            children["sensors"] = sensors.get();
        }
        return children.at("sensors");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    if(children.find("port-slots") == children.end())
    {
        if(port_slots != nullptr)
        {
            children["port-slots"] = port_slots.get();
        }
    }

    if(children.find("sensors") == children.end())
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "sub-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::SubSlot()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes>())
	,module(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    module->parent = this;
    children["module"] = module.get();

    yang_name = "sub-slot"; yang_parent_name = "sub-slots";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::~SubSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (module !=  nullptr && module->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation))
	|| (module !=  nullptr && is_set(module->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slot" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    if(child_yang_name == "module")
    {
        if(module != nullptr)
        {
            children["module"] = module.get();
        }
        else
        {
            module = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>();
            module->parent = this;
            children["module"] = module.get();
        }
        return children.at("module");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    if(children.find("module") == children.end())
    {
        if(module != nullptr)
        {
            children["module"] = module.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlots()
{
    yang_name = "sub-slots"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::~SubSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_data() const
{
    for (std::size_t index=0; index<sub_slot.size(); index++)
    {
        if(sub_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_operation() const
{
    for (std::size_t index=0; index<sub_slot.size(); index++)
    {
        if(sub_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slots";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-slot")
    {
        for(auto const & c : sub_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot>();
        c->parent = this;
        sub_slot.push_back(std::move(c));
        children[segment_path] = sub_slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_children()
{
    for (auto const & c : sub_slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "sensor";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Sensor()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    yang_name = "sensor"; yang_parent_name = "sensors";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "hw-component";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(std::move(c));
        children[segment_path] = sensor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_children()
{
    for (auto const & c : sensor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "hw-component";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::HwComponent()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes>())
	,sensors(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    sensors->parent = this;
    children["sensors"] = sensors.get();

    yang_name = "hw-component"; yang_parent_name = "hw-components";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::~HwComponent()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation))
	|| (sensors !=  nullptr && is_set(sensors->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-component" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    if(child_yang_name == "sensors")
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
        else
        {
            sensors = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>();
            sensors->parent = this;
            children["sensors"] = sensors.get();
        }
        return children.at("sensors");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    if(children.find("sensors") == children.end())
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponents()
{
    yang_name = "hw-components"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::~HwComponents()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_data() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_operation() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-components";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-component")
    {
        for(auto const & c : hw_component)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent>();
        c->parent = this;
        hw_component.push_back(std::move(c));
        children[segment_path] = hw_component.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_children()
{
    for (auto const & c : hw_component)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "port";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Port()
    :
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    yang_name = "port"; yang_parent_name = "port-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::~Port()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_data() const
{
    return (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_operation() const
{
    return is_set(operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "port-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::PortSlot()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes>())
	,port(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    port->parent = this;
    children["port"] = port.get();

    yang_name = "port-slot"; yang_parent_name = "port-slots";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::~PortSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation))
	|| (port !=  nullptr && is_set(port->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
        else
        {
            port = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port>();
            port->parent = this;
            children["port"] = port.get();
        }
        return children.at("port");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlots()
{
    yang_name = "port-slots"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::~PortSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_data() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_operation() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-slot")
    {
        for(auto const & c : port_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.push_back(std::move(c));
        children[segment_path] = port_slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_children()
{
    for (auto const & c : port_slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "sensor";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Sensor()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    yang_name = "sensor"; yang_parent_name = "sensors";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(std::move(c));
        children[segment_path] = sensor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_children()
{
    for (auto const & c : sensor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Card()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes>())
	,hw_components(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>())
	,port_slots(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>())
	,sensors(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>())
	,sub_slots(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    hw_components->parent = this;
    children["hw-components"] = hw_components.get();

    port_slots->parent = this;
    children["port-slots"] = port_slots.get();

    sensors->parent = this;
    children["sensors"] = sensors.get();

    sub_slots->parent = this;
    children["sub-slots"] = sub_slots.get();

    yang_name = "card"; yang_parent_name = "cards";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::~Card()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (hw_components !=  nullptr && hw_components->has_data())
	|| (port_slots !=  nullptr && port_slots->has_data())
	|| (sensors !=  nullptr && sensors->has_data())
	|| (sub_slots !=  nullptr && sub_slots->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation))
	|| (hw_components !=  nullptr && is_set(hw_components->operation))
	|| (port_slots !=  nullptr && is_set(port_slots->operation))
	|| (sensors !=  nullptr && is_set(sensors->operation))
	|| (sub_slots !=  nullptr && is_set(sub_slots->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    if(child_yang_name == "hw-components")
    {
        if(hw_components != nullptr)
        {
            children["hw-components"] = hw_components.get();
        }
        else
        {
            hw_components = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>();
            hw_components->parent = this;
            children["hw-components"] = hw_components.get();
        }
        return children.at("hw-components");
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots != nullptr)
        {
            children["port-slots"] = port_slots.get();
        }
        else
        {
            port_slots = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>();
            port_slots->parent = this;
            children["port-slots"] = port_slots.get();
        }
        return children.at("port-slots");
    }

    if(child_yang_name == "sensors")
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
        else
        {
            sensors = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>();
            sensors->parent = this;
            children["sensors"] = sensors.get();
        }
        return children.at("sensors");
    }

    if(child_yang_name == "sub-slots")
    {
        if(sub_slots != nullptr)
        {
            children["sub-slots"] = sub_slots.get();
        }
        else
        {
            sub_slots = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>();
            sub_slots->parent = this;
            children["sub-slots"] = sub_slots.get();
        }
        return children.at("sub-slots");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    if(children.find("hw-components") == children.end())
    {
        if(hw_components != nullptr)
        {
            children["hw-components"] = hw_components.get();
        }
    }

    if(children.find("port-slots") == children.end())
    {
        if(port_slots != nullptr)
        {
            children["port-slots"] = port_slots.get();
        }
    }

    if(children.find("sensors") == children.end())
    {
        if(sensors != nullptr)
        {
            children["sensors"] = sensors.get();
        }
    }

    if(children.find("sub-slots") == children.end())
    {
        if(sub_slots != nullptr)
        {
            children["sub-slots"] = sub_slots.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Cards()
{
    yang_name = "cards"; yang_parent_name = "slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::~Cards()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::has_data() const
{
    for (std::size_t index=0; index<card.size(); index++)
    {
        if(card[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::has_operation() const
{
    for (std::size_t index=0; index<card.size(); index++)
    {
        if(card[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cards";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::Cards::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card")
    {
        for(auto const & c : card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards::Card>();
        c->parent = this;
        card.push_back(std::move(c));
        children[segment_path] = card.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::Cards::get_children()
{
    for (auto const & c : card)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    	time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
	 time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
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

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::FruInfo()
    :
    	card_administrative_state{YType::int32, "card-administrative-state"},
	 card_monitor_state{YType::int32, "card-monitor-state"},
	 card_operational_state{YType::enumeration, "card-operational-state"},
	 card_reset_reason{YType::enumeration, "card-reset-reason"},
	 power_administrative_state{YType::int32, "power-administrative-state"},
	 power_current_measurement{YType::int32, "power-current-measurement"},
	 power_operational_state{YType::enumeration, "power-operational-state"}
    	,
    card_up_time(std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;
    children["card-up-time"] = card_up_time.get();

    last_operational_state_change->parent = this;
    children["last-operational-state-change"] = last_operational_state_change.get();

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && is_set(card_up_time->operation))
	|| (last_operational_state_change !=  nullptr && is_set(last_operational_state_change->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
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

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
        else
        {
            card_up_time = std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime>();
            card_up_time->parent = this;
            children["card-up-time"] = card_up_time.get();
        }
        return children.at("card-up-time");
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        else
        {
            last_operational_state_change = std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange>();
            last_operational_state_change->parent = this;
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
        return children.at("last-operational-state-change");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_children()
{
    if(children.find("card-up-time") == children.end())
    {
        if(card_up_time != nullptr)
        {
            children["card-up-time"] = card_up_time.get();
        }
    }

    if(children.find("last-operational-state-change") == children.end())
    {
        if(last_operational_state_change != nullptr)
        {
            children["last-operational-state-change"] = last_operational_state_change.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo>())
	,fru_info(std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    fru_info->parent = this;
    children["fru-info"] = fru_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "slot";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation))
	|| (fru_info !=  nullptr && is_set(fru_info->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
        else
        {
            fru_info = std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo>();
            fru_info->parent = this;
            children["fru-info"] = fru_info.get();
        }
        return children.at("fru-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    if(children.find("fru-info") == children.end())
    {
        if(fru_info != nullptr)
        {
            children["fru-info"] = fru_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Slot()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes>())
	,cards(std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    cards->parent = this;
    children["cards"] = cards.get();

    yang_name = "slot"; yang_parent_name = "slots";
}

Inventory::Racks::Rack::Slots::Slot::~Slot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (cards !=  nullptr && cards->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation))
	|| (cards !=  nullptr && is_set(cards->operation));
}

std::string Inventory::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::Slots::Slot::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    if(child_yang_name == "cards")
    {
        if(cards != nullptr)
        {
            children["cards"] = cards.get();
        }
        else
        {
            cards = std::make_unique<Inventory::Racks::Rack::Slots::Slot::Cards>();
            cards->parent = this;
            children["cards"] = cards.get();
        }
        return children.at("cards");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::Slot::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    if(children.find("cards") == children.end())
    {
        if(cards != nullptr)
        {
            children["cards"] = cards.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slots()
{
    yang_name = "slots"; yang_parent_name = "rack";
}

Inventory::Racks::Rack::Slots::~Slots()
{
}

bool Inventory::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Inventory::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(std::move(c));
        children[segment_path] = slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::Slots::get_children()
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

void Inventory::Racks::Rack::Slots::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "fan-tray";
}

Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data());
}

bool Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation));
}

std::string Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::FanTraies::FanTray::FanTray()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    yang_name = "fan-tray"; yang_parent_name = "fan-traies";
}

Inventory::Racks::Rack::FanTraies::FanTray::~FanTray()
{
}

bool Inventory::Racks::Rack::FanTraies::FanTray::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::FanTraies::FanTray::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation));
}

std::string Inventory::Racks::Rack::FanTraies::FanTray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-tray" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::FanTraies::FanTray::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::FanTraies::FanTray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::FanTraies::FanTray::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::FanTraies::FanTray::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::FanTraies::FanTray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::FanTraies::FanTraies()
{
    yang_name = "fan-traies"; yang_parent_name = "rack";
}

Inventory::Racks::Rack::FanTraies::~FanTraies()
{
}

bool Inventory::Racks::Rack::FanTraies::has_data() const
{
    for (std::size_t index=0; index<fan_tray.size(); index++)
    {
        if(fan_tray[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::FanTraies::has_operation() const
{
    for (std::size_t index=0; index<fan_tray.size(); index++)
    {
        if(fan_tray[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::FanTraies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-traies";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::FanTraies::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::FanTraies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Inventory::Racks::Rack::FanTraies::FanTray>();
        c->parent = this;
        fan_tray.push_back(std::move(c));
        children[segment_path] = fan_tray.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::FanTraies::get_children()
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

void Inventory::Racks::Rack::FanTraies::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::PowerSupplyGroupInfo()
    :
    	power_group_available_current{YType::int32, "power-group-available-current"},
	 power_group_drawn_current{YType::int32, "power-group-drawn-current"},
	 power_group_power_units{YType::str, "power-group-power-units"},
	 power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"}
{
    yang_name = "power-supply-group-info"; yang_parent_name = "power-supply-zone-attributes";
}

Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::~PowerSupplyGroupInfo()
{
}

bool Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::has_data() const
{
    return power_group_available_current.is_set
	|| power_group_drawn_current.is_set
	|| power_group_power_units.is_set
	|| power_group_redundancy_mode.is_set;
}

bool Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(power_group_available_current.operation)
	|| is_set(power_group_drawn_current.operation)
	|| is_set(power_group_power_units.operation)
	|| is_set(power_group_redundancy_mode.operation);
}

std::string Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply-group-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::get_entity_path(Entity* ancestor) const
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

    if (power_group_available_current.is_set || is_set(power_group_available_current.operation)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.operation)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.operation)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.operation)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
    }
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
    }
}

Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyZoneAttributes()
    :
    power_supply_group_info(std::make_unique<Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo>())
{
    power_supply_group_info->parent = this;
    children["power-supply-group-info"] = power_supply_group_info.get();

    yang_name = "power-supply-zone-attributes"; yang_parent_name = "power-supply-zone";
}

Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::~PowerSupplyZoneAttributes()
{
}

bool Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::has_data() const
{
    return (power_supply_group_info !=  nullptr && power_supply_group_info->has_data());
}

bool Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::has_operation() const
{
    return is_set(operation)
	|| (power_supply_group_info !=  nullptr && is_set(power_supply_group_info->operation));
}

std::string Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply-zone-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "power-supply-group-info")
    {
        if(power_supply_group_info != nullptr)
        {
            children["power-supply-group-info"] = power_supply_group_info.get();
        }
        else
        {
            power_supply_group_info = std::make_unique<Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::PowerSupplyGroupInfo>();
            power_supply_group_info->parent = this;
            children["power-supply-group-info"] = power_supply_group_info.get();
        }
        return children.at("power-supply-group-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::get_children()
{
    if(children.find("power-supply-group-info") == children.end())
    {
        if(power_supply_group_info != nullptr)
        {
            children["power-supply-group-info"] = power_supply_group_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZone()
    :
    	number{YType::int32, "number"}
    	,
    power_supply_zone_attributes(std::make_unique<Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes>())
{
    power_supply_zone_attributes->parent = this;
    children["power-supply-zone-attributes"] = power_supply_zone_attributes.get();

    yang_name = "power-supply-zone"; yang_parent_name = "power-supply-zones";
}

Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::~PowerSupplyZone()
{
}

bool Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::has_data() const
{
    return number.is_set
	|| (power_supply_zone_attributes !=  nullptr && power_supply_zone_attributes->has_data());
}

bool Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (power_supply_zone_attributes !=  nullptr && is_set(power_supply_zone_attributes->operation));
}

std::string Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply-zone" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "power-supply-zone-attributes")
    {
        if(power_supply_zone_attributes != nullptr)
        {
            children["power-supply-zone-attributes"] = power_supply_zone_attributes.get();
        }
        else
        {
            power_supply_zone_attributes = std::make_unique<Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::PowerSupplyZoneAttributes>();
            power_supply_zone_attributes->parent = this;
            children["power-supply-zone-attributes"] = power_supply_zone_attributes.get();
        }
        return children.at("power-supply-zone-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::get_children()
{
    if(children.find("power-supply-zone-attributes") == children.end())
    {
        if(power_supply_zone_attributes != nullptr)
        {
            children["power-supply-zone-attributes"] = power_supply_zone_attributes.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZones()
{
    yang_name = "power-supply-zones"; yang_parent_name = "rack";
}

Inventory::Racks::Rack::PowerSupplyZones::~PowerSupplyZones()
{
}

bool Inventory::Racks::Rack::PowerSupplyZones::has_data() const
{
    for (std::size_t index=0; index<power_supply_zone.size(); index++)
    {
        if(power_supply_zone[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::PowerSupplyZones::has_operation() const
{
    for (std::size_t index=0; index<power_supply_zone.size(); index++)
    {
        if(power_supply_zone[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::PowerSupplyZones::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply-zones";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::PowerSupplyZones::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::PowerSupplyZones::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "power-supply-zone")
    {
        for(auto const & c : power_supply_zone)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Inventory::Racks::Rack::PowerSupplyZones::PowerSupplyZone>();
        c->parent = this;
        power_supply_zone.push_back(std::move(c));
        children[segment_path] = power_supply_zone.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::PowerSupplyZones::get_children()
{
    for (auto const & c : power_supply_zone)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::PowerSupplyZones::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::BasicAttributes::BasicInfo::BasicInfo()
    :
    	alias{YType::str, "alias"},
	 asset_id_str{YType::str, "asset-id-str"},
	 asset_identification{YType::int32, "asset-identification"},
	 ceport{YType::boolean, "ceport"},
	 chip_hardware_revision{YType::str, "chip-hardware-revision"},
	 composite_class_code{YType::int32, "composite-class-code"},
	 description{YType::str, "description"},
	 environmental_monitor_path{YType::str, "environmental-monitor-path"},
	 firmware_revision{YType::str, "firmware-revision"},
	 group_flag{YType::boolean, "group-flag"},
	 hardware_revision{YType::str, "hardware-revision"},
	 is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
	 manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
	 manufacturer_name{YType::str, "manufacturer-name"},
	 memory_size{YType::int32, "memory-size"},
	 model_name{YType::str, "model-name"},
	 name{YType::str, "name"},
	 new_deviation_number{YType::int32, "new-deviation-number"},
	 physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
	 redundancystate{YType::int32, "redundancystate"},
	 serial_number{YType::str, "serial-number"},
	 software_revision{YType::str, "software-revision"},
	 unrecognized_fru{YType::boolean, "unrecognized-fru"},
	 vendor_type{YType::str, "vendor-type"},
	 xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
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

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Inventory::Racks::Rack::BasicAttributes::BasicInfo::get_children()
{
    return children;
}

void Inventory::Racks::Rack::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_unique<Inventory::Racks::Rack::BasicAttributes::BasicInfo>())
{
    basic_info->parent = this;
    children["basic-info"] = basic_info.get();

    yang_name = "basic-attributes"; yang_parent_name = "rack";
}

Inventory::Racks::Rack::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data());
}

bool Inventory::Racks::Rack::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && is_set(basic_info->operation));
}

std::string Inventory::Racks::Rack::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::BasicAttributes::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::Racks::Rack::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-info")
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
        else
        {
            basic_info = std::make_unique<Inventory::Racks::Rack::BasicAttributes::BasicInfo>();
            basic_info->parent = this;
            children["basic-info"] = basic_info.get();
        }
        return children.at("basic-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::BasicAttributes::get_children()
{
    if(children.find("basic-info") == children.end())
    {
        if(basic_info != nullptr)
        {
            children["basic-info"] = basic_info.get();
        }
    }

    return children;
}

void Inventory::Racks::Rack::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Rack()
    :
    	number{YType::int32, "number"}
    	,
    basic_attributes(std::make_unique<Inventory::Racks::Rack::BasicAttributes>())
	,fan_traies(std::make_unique<Inventory::Racks::Rack::FanTraies>())
	,power_supply_shelfs(std::make_unique<Inventory::Racks::Rack::PowerSupplyShelfs>())
	,power_supply_zones(std::make_unique<Inventory::Racks::Rack::PowerSupplyZones>())
	,slots(std::make_unique<Inventory::Racks::Rack::Slots>())
{
    basic_attributes->parent = this;
    children["basic-attributes"] = basic_attributes.get();

    fan_traies->parent = this;
    children["fan-traies"] = fan_traies.get();

    power_supply_shelfs->parent = this;
    children["power-supply-shelfs"] = power_supply_shelfs.get();

    power_supply_zones->parent = this;
    children["power-supply-zones"] = power_supply_zones.get();

    slots->parent = this;
    children["slots"] = slots.get();

    yang_name = "rack"; yang_parent_name = "racks";
}

Inventory::Racks::Rack::~Rack()
{
}

bool Inventory::Racks::Rack::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (fan_traies !=  nullptr && fan_traies->has_data())
	|| (power_supply_shelfs !=  nullptr && power_supply_shelfs->has_data())
	|| (power_supply_zones !=  nullptr && power_supply_zones->has_data())
	|| (slots !=  nullptr && slots->has_data());
}

bool Inventory::Racks::Rack::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && is_set(basic_attributes->operation))
	|| (fan_traies !=  nullptr && is_set(fan_traies->operation))
	|| (power_supply_shelfs !=  nullptr && is_set(power_supply_shelfs->operation))
	|| (power_supply_zones !=  nullptr && is_set(power_supply_zones->operation))
	|| (slots !=  nullptr && is_set(slots->operation));
}

std::string Inventory::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[number='" <<number.get() <<"']";

    return path_buffer.str();

}

EntityPath Inventory::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-admin-oper:inventory/racks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
        else
        {
            basic_attributes = std::make_unique<Inventory::Racks::Rack::BasicAttributes>();
            basic_attributes->parent = this;
            children["basic-attributes"] = basic_attributes.get();
        }
        return children.at("basic-attributes");
    }

    if(child_yang_name == "fan-traies")
    {
        if(fan_traies != nullptr)
        {
            children["fan-traies"] = fan_traies.get();
        }
        else
        {
            fan_traies = std::make_unique<Inventory::Racks::Rack::FanTraies>();
            fan_traies->parent = this;
            children["fan-traies"] = fan_traies.get();
        }
        return children.at("fan-traies");
    }

    if(child_yang_name == "power-supply-shelfs")
    {
        if(power_supply_shelfs != nullptr)
        {
            children["power-supply-shelfs"] = power_supply_shelfs.get();
        }
        else
        {
            power_supply_shelfs = std::make_unique<Inventory::Racks::Rack::PowerSupplyShelfs>();
            power_supply_shelfs->parent = this;
            children["power-supply-shelfs"] = power_supply_shelfs.get();
        }
        return children.at("power-supply-shelfs");
    }

    if(child_yang_name == "power-supply-zones")
    {
        if(power_supply_zones != nullptr)
        {
            children["power-supply-zones"] = power_supply_zones.get();
        }
        else
        {
            power_supply_zones = std::make_unique<Inventory::Racks::Rack::PowerSupplyZones>();
            power_supply_zones->parent = this;
            children["power-supply-zones"] = power_supply_zones.get();
        }
        return children.at("power-supply-zones");
    }

    if(child_yang_name == "slots")
    {
        if(slots != nullptr)
        {
            children["slots"] = slots.get();
        }
        else
        {
            slots = std::make_unique<Inventory::Racks::Rack::Slots>();
            slots->parent = this;
            children["slots"] = slots.get();
        }
        return children.at("slots");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::Rack::get_children()
{
    if(children.find("basic-attributes") == children.end())
    {
        if(basic_attributes != nullptr)
        {
            children["basic-attributes"] = basic_attributes.get();
        }
    }

    if(children.find("fan-traies") == children.end())
    {
        if(fan_traies != nullptr)
        {
            children["fan-traies"] = fan_traies.get();
        }
    }

    if(children.find("power-supply-shelfs") == children.end())
    {
        if(power_supply_shelfs != nullptr)
        {
            children["power-supply-shelfs"] = power_supply_shelfs.get();
        }
    }

    if(children.find("power-supply-zones") == children.end())
    {
        if(power_supply_zones != nullptr)
        {
            children["power-supply-zones"] = power_supply_zones.get();
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

void Inventory::Racks::Rack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Racks()
{
    yang_name = "racks"; yang_parent_name = "inventory";
}

Inventory::Racks::~Racks()
{
}

bool Inventory::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

EntityPath Inventory::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-admin-oper:inventory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Inventory::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Inventory::Racks::Rack>();
        c->parent = this;
        rack.push_back(std::move(c));
        children[segment_path] = rack.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::Racks::get_children()
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

void Inventory::Racks::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Inventory()
    :
    racks(std::make_unique<Inventory::Racks>())
{
    racks->parent = this;
    children["racks"] = racks.get();

    yang_name = "inventory"; yang_parent_name = "Cisco-IOS-XR-asr9k-sc-invmgr-admin-oper";
}

Inventory::~Inventory()
{
}

bool Inventory::has_data() const
{
    return (racks !=  nullptr && racks->has_data());
}

bool Inventory::has_operation() const
{
    return is_set(operation)
	|| (racks !=  nullptr && is_set(racks->operation));
}

std::string Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-admin-oper:inventory";

    return path_buffer.str();

}

EntityPath Inventory::get_entity_path(Entity* ancestor) const
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

Entity* Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            racks = std::make_unique<Inventory::Racks>();
            racks->parent = this;
            children["racks"] = racks.get();
        }
        return children.at("racks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Inventory::get_children()
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

void Inventory::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Inventory::clone_ptr()
{
    return std::make_unique<Inventory>();
}

const Enum::Value CardResetReasonEnum::reset_unknown {1, "reset-unknown"};
const Enum::Value CardResetReasonEnum::power_up {2, "power-up"};
const Enum::Value CardResetReasonEnum::parity_error {3, "parity-error"};
const Enum::Value CardResetReasonEnum::clear_config_reset {4, "clear-config-reset"};
const Enum::Value CardResetReasonEnum::manual_reset {5, "manual-reset"};
const Enum::Value CardResetReasonEnum::watch_dog_timeout_reset {6, "watch-dog-timeout-reset"};
const Enum::Value CardResetReasonEnum::resource_overflow_reset {7, "resource-overflow-reset"};
const Enum::Value CardResetReasonEnum::missing_task_reset {8, "missing-task-reset"};
const Enum::Value CardResetReasonEnum::low_voltage_reset {9, "low-voltage-reset"};
const Enum::Value CardResetReasonEnum::controller_reset {10, "controller-reset"};
const Enum::Value CardResetReasonEnum::system_reset {11, "system-reset"};
const Enum::Value CardResetReasonEnum::switchover_reset {12, "switchover-reset"};
const Enum::Value CardResetReasonEnum::upgrade_reset {13, "upgrade-reset"};
const Enum::Value CardResetReasonEnum::downgrade_reset {14, "downgrade-reset"};
const Enum::Value CardResetReasonEnum::cache_error_reset {15, "cache-error-reset"};
const Enum::Value CardResetReasonEnum::device_driver_reset {16, "device-driver-reset"};
const Enum::Value CardResetReasonEnum::software_exception_reset {17, "software-exception-reset"};
const Enum::Value CardResetReasonEnum::restore_config_reset {18, "restore-config-reset"};
const Enum::Value CardResetReasonEnum::abort_rev_reset {19, "abort-rev-reset"};
const Enum::Value CardResetReasonEnum::burn_boot_reset {20, "burn-boot-reset"};
const Enum::Value CardResetReasonEnum::standby_cd_healthier_reset {21, "standby-cd-healthier-reset"};
const Enum::Value CardResetReasonEnum::non_native_config_clear_reset {22, "non-native-config-clear-reset"};
const Enum::Value CardResetReasonEnum::memory_protection_error_reset {23, "memory-protection-error-reset"};
const Enum::Value CardResetReasonEnum::card_reset_reason_max {24, "card-reset-reason-max"};

const Enum::Value InvCardStateEnum::inv_card_not_present {0, "inv-card-not-present"};
const Enum::Value InvCardStateEnum::inv_card_present {1, "inv-card-present"};
const Enum::Value InvCardStateEnum::inv_card_reset {2, "inv-card-reset"};
const Enum::Value InvCardStateEnum::inv_card_booting {3, "inv-card-booting"};
const Enum::Value InvCardStateEnum::inv_card_mbi_booting {4, "inv-card-mbi-booting"};
const Enum::Value InvCardStateEnum::inv_card_running_mbi {5, "inv-card-running-mbi"};
const Enum::Value InvCardStateEnum::inv_card_running_ena {6, "inv-card-running-ena"};
const Enum::Value InvCardStateEnum::inv_card_bring_down {7, "inv-card-bring-down"};
const Enum::Value InvCardStateEnum::inv_card_ena_failure {8, "inv-card-ena-failure"};
const Enum::Value InvCardStateEnum::inv_card_f_diag_run {9, "inv-card-f-diag-run"};
const Enum::Value InvCardStateEnum::inv_card_f_diag_failure {10, "inv-card-f-diag-failure"};
const Enum::Value InvCardStateEnum::inv_card_powered {11, "inv-card-powered"};
const Enum::Value InvCardStateEnum::inv_card_unpowered {12, "inv-card-unpowered"};
const Enum::Value InvCardStateEnum::inv_card_mdr {13, "inv-card-mdr"};
const Enum::Value InvCardStateEnum::inv_card_mdr_running_mbi {14, "inv-card-mdr-running-mbi"};
const Enum::Value InvCardStateEnum::inv_card_main_t_mode {15, "inv-card-main-t-mode"};
const Enum::Value InvCardStateEnum::inv_card_admin_down {16, "inv-card-admin-down"};
const Enum::Value InvCardStateEnum::inv_card_no_mon {17, "inv-card-no-mon"};
const Enum::Value InvCardStateEnum::inv_card_unknown {18, "inv-card-unknown"};
const Enum::Value InvCardStateEnum::inv_card_failed {19, "inv-card-failed"};
const Enum::Value InvCardStateEnum::inv_card_ok {20, "inv-card-ok"};
const Enum::Value InvCardStateEnum::inv_card_missing {21, "inv-card-missing"};
const Enum::Value InvCardStateEnum::inv_card_field_diag_downloading {22, "inv-card-field-diag-downloading"};
const Enum::Value InvCardStateEnum::inv_card_field_diag_unmonitor {23, "inv-card-field-diag-unmonitor"};
const Enum::Value InvCardStateEnum::inv_card_fabric_field_diag_unmonitor {24, "inv-card-fabric-field-diag-unmonitor"};
const Enum::Value InvCardStateEnum::inv_card_field_diag_rp_launching {25, "inv-card-field-diag-rp-launching"};
const Enum::Value InvCardStateEnum::inv_card_field_diag_running {26, "inv-card-field-diag-running"};
const Enum::Value InvCardStateEnum::inv_card_field_diag_pass {27, "inv-card-field-diag-pass"};
const Enum::Value InvCardStateEnum::inv_card_field_diag_fail {28, "inv-card-field-diag-fail"};
const Enum::Value InvCardStateEnum::inv_card_field_diag_timeout {29, "inv-card-field-diag-timeout"};
const Enum::Value InvCardStateEnum::inv_card_disabled {30, "inv-card-disabled"};
const Enum::Value InvCardStateEnum::inv_card_spa_booting {31, "inv-card-spa-booting"};
const Enum::Value InvCardStateEnum::inv_card_not_allowed_online {32, "inv-card-not-allowed-online"};
const Enum::Value InvCardStateEnum::inv_card_stopped {33, "inv-card-stopped"};
const Enum::Value InvCardStateEnum::inv_card_incompatible_fw_ver {34, "inv-card-incompatible-fw-ver"};
const Enum::Value InvCardStateEnum::inv_card_fpd_hold {35, "inv-card-fpd-hold"};
const Enum::Value InvCardStateEnum::inv_card_node_prep {36, "inv-card-node-prep"};
const Enum::Value InvCardStateEnum::inv_card_updating_fpd {37, "inv-card-updating-fpd"};
const Enum::Value InvCardStateEnum::inv_card_num_states {38, "inv-card-num-states"};


}
}

