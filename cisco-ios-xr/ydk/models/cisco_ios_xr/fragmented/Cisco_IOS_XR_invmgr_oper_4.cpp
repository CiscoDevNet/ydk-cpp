
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_invmgr_oper_4.hpp"
#include "Cisco_IOS_XR_invmgr_oper_5.hpp"
#include "Cisco_IOS_XR_invmgr_oper_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_invmgr_oper {

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::PwgInfo()
    :
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"}
{

    yang_name = "pwg-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::has_data() const
{
    return power_group_redundancy_mode.is_set
	|| power_group_power_units.is_set
	|| power_group_available_current.is_set
	|| power_group_drawn_current.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_group_redundancy_mode.yfilter)
	|| ydk::is_set(power_group_power_units.yfilter)
	|| ydk::is_set(power_group_available_current.yfilter)
	|| ydk::is_set(power_group_drawn_current.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.yfilter)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.yfilter)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_available_current.is_set || is_set(power_group_available_current.yfilter)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.yfilter)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
        power_group_redundancy_mode.value_namespace = name_space;
        power_group_redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
        power_group_power_units.value_namespace = name_space;
        power_group_power_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
        power_group_available_current.value_namespace = name_space;
        power_group_available_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
        power_group_drawn_current.value_namespace = name_space;
        power_group_drawn_current.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units.yfilter = yfilter;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current.yfilter = yfilter;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-group-redundancy-mode" || name == "power-group-power-units" || name == "power-group-available-current" || name == "power-group-drawn-current")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    description{YType::str, "description"},
    units{YType::enumeration, "units"},
    value_{YType::str, "value"},
    data_type{YType::enumeration, "data-type"},
    status{YType::enumeration, "status"},
    update_rate{YType::uint32, "update-rate"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::has_data() const
{
    return description.is_set
	|| units.is_set
	|| value_.is_set
	|| data_type.is_set
	|| status.is_set
	|| update_rate.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(update_rate.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "description" || name == "units" || name == "value" || name == "data-type" || name == "status" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-array")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_value{YType::int32, "threshold-value"},
    threshold_name{YType::str, "threshold-name"}
{

    yang_name = "threshold-array"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_name.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_name.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_name.is_set || is_set(threshold_name.yfilter)) leaf_name_data.push_back(threshold_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-name")
    {
        threshold_name = value;
        threshold_name.value_namespace = name_space;
        threshold_name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-name")
    {
        threshold_name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-name")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::InvAssetBag()
    :
    part_number{YType::str, "part-number"},
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"}
{

    yang_name = "inv-asset-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::has_data() const
{
    return part_number.is_set
	|| manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| original_equipment_manufacturer_string.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_revision.yfilter)
	|| ydk::is_set(manufacturer_firmware_identifier.yfilter)
	|| ydk::is_set(manufacturer_software_identifier.yfilter)
	|| ydk::is_set(manufacturer_common_language_equipment_identifier.yfilter)
	|| ydk::is_set(original_equipment_manufacturer_string.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.yfilter)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.yfilter)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.yfilter)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.yfilter)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.yfilter)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.yfilter)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
        manufacturer_assembly_number.value_namespace = name_space;
        manufacturer_assembly_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
        manufacturer_assembly_revision.value_namespace = name_space;
        manufacturer_assembly_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
        manufacturer_firmware_identifier.value_namespace = name_space;
        manufacturer_firmware_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
        manufacturer_software_identifier.value_namespace = name_space;
        manufacturer_software_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
        manufacturer_common_language_equipment_identifier.value_namespace = name_space;
        manufacturer_common_language_equipment_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
        original_equipment_manufacturer_string.value_namespace = name_space;
        original_equipment_manufacturer_string.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision.yfilter = yfilter;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier.yfilter = yfilter;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "part-number" || name == "manufacturer-assembly-number" || name == "manufacturer-assembly-revision" || name == "manufacturer-firmware-identifier" || name == "manufacturer-software-identifier" || name == "manufacturer-common-language-equipment-identifier" || name == "original-equipment-manufacturer-string")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::Threshold()
    :
    major_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo>())
	,critical_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo>())
{
    major_lo->parent = this;
    critical_hi->parent = this;
    minor_hi->parent = this;
    major_hi->parent = this;
    critical_lo->parent = this;
    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::has_data() const
{
    return (major_lo !=  nullptr && major_lo->has_data())
	|| (critical_hi !=  nullptr && critical_hi->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-lo" || name == "critical-hi" || name == "minor-hi" || name == "major-hi" || name == "critical-lo" || name == "minor-lo")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange>())
	,card_up_time(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::InvBasicBag()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "inv-basic-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::has_data() const
{
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::InvEepromInfo()
    :
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"},
    has_eeprom{YType::uint32, "has-eeprom"},
    description{YType::str, "description"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::has_data() const
{
    return inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| has_eeprom.is_set
	|| description.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inv_card_type.yfilter)
	|| ydk::is_set(opaque_data.yfilter)
	|| ydk::is_set(opaque_data_size.yfilter)
	|| ydk::is_set(has_eeprom.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inv_card_type.is_set || is_set(inv_card_type.yfilter)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.yfilter)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.yfilter)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.yfilter)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
        inv_card_type.value_namespace = name_space;
        inv_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
        opaque_data.value_namespace = name_space;
        opaque_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
        opaque_data_size.value_namespace = name_space;
        opaque_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
        has_eeprom.value_namespace = name_space;
        has_eeprom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inv-card-type")
    {
        inv_card_type.yfilter = yfilter;
    }
    if(value_path == "opaque-data")
    {
        opaque_data.yfilter = yfilter;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size.yfilter = yfilter;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeprom" || name == "inv-card-type" || name == "opaque-data" || name == "opaque-data-size" || name == "has-eeprom" || name == "description")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Eeprom()
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
    rma_code{YType::str, "rma-code"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::has_data() const
{
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
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::has_operation() const
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
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::get_name_leaf_data() const
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rma" || name == "description" || name == "idprom-format-rev" || name == "controller-family" || name == "controller-type" || name == "vid" || name == "hwid" || name == "pid" || name == "udi-description" || name == "udi-name" || name == "clei" || name == "eci" || name == "top-assem-part-num" || name == "top-assem-vid" || name == "pca-num" || name == "pcavid" || name == "chassis-sid" || name == "dev-num1" || name == "dev-num2" || name == "dev-num3" || name == "dev-num4" || name == "dev-num5" || name == "dev-num6" || name == "dev-num7" || name == "manu-test-data" || name == "asset-id" || name == "asset-alias" || name == "base-mac-address1" || name == "mac-add-blk-size1" || name == "base-mac-address2" || name == "mac-add-blk-size2" || name == "base-mac-address3" || name == "mac-add-blk-size3" || name == "base-mac-address4" || name == "mac-add-blk-size4" || name == "pcb-serial-num" || name == "power-supply-type" || name == "power-consumption" || name == "block-signature" || name == "block-version" || name == "block-length" || name == "block-checksum" || name == "eeprom-size" || name == "block-count" || name == "fru-major-type" || name == "fru-minor-type" || name == "oem-string" || name == "product-id" || name == "serial-number" || name == "part-number" || name == "part-revision" || name == "mfg-deviation" || name == "hw-version" || name == "mfg-bits" || name == "engineer-use" || name == "snmpoid" || name == "rma-code")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    test_history{YType::str, "test-history"},
    rma_number{YType::str, "rma-number"},
    rma_history{YType::str, "rma-history"}
{

    yang_name = "rma"; yang_parent_name = "eeprom"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return test_history.is_set
	|| rma_number.is_set
	|| rma_history.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_history.yfilter)
	|| ydk::is_set(rma_number.yfilter)
	|| ydk::is_set(rma_history.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_history.is_set || is_set(test_history.yfilter)) leaf_name_data.push_back(test_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.yfilter)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (rma_history.is_set || is_set(rma_history.yfilter)) leaf_name_data.push_back(rma_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-history" || name == "rma-number" || name == "rma-history")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    vm_node_id{YType::uint32, "vm-node-id"},
    vm_done{YType::int32, "vm-done"},
    node_id{YType::uint32, "node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo>())
{
    env_sensor_info->parent = this;
    pwg_info->parent = this;
    env_sensor_info_xml->parent = this;
    inv_asset_bag->parent = this;
    threshold->parent = this;
    fru_info->parent = this;
    inv_basic_bag->parent = this;
    inv_eeprom_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "tsi2"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::has_data() const
{
    return module_done.is_set
	|| vm_node_id.is_set
	|| vm_done.is_set
	|| node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (threshold !=  nullptr && threshold->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_done.yfilter)
	|| ydk::is_set(vm_node_id.yfilter)
	|| ydk::is_set(vm_done.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.yfilter)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.yfilter)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.yfilter)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-done")
    {
        module_done = value;
        module_done.value_namespace = name_space;
        module_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
        vm_node_id.value_namespace = name_space;
        vm_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
        vm_done.value_namespace = name_space;
        vm_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-done")
    {
        module_done.yfilter = yfilter;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id.yfilter = yfilter;
    }
    if(value_path == "vm-done")
    {
        vm_done.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "env-sensor-info" || name == "pwg-info" || name == "env-sensor-info-xml" || name == "inv-asset-bag" || name == "threshold" || name == "fru-info" || name == "inv-basic-bag" || name == "inv-eeprom-info" || name == "module-done" || name == "vm-node-id" || name == "vm-done" || name == "node-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    device_description{YType::str, "device-description"},
    units{YType::str, "units"},
    device_id{YType::uint32, "device-id"},
    value_{YType::uint32, "value"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    scale{YType::uint32, "scale"},
    precision{YType::uint32, "precision"},
    status{YType::uint32, "status"},
    age_time_stamp{YType::uint32, "age-time-stamp"},
    update_rate{YType::uint32, "update-rate"}
{

    yang_name = "env-sensor-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::has_data() const
{
    return field_validity_bitmap.is_set
	|| device_description.is_set
	|| units.is_set
	|| device_id.is_set
	|| value_.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| scale.is_set
	|| precision.is_set
	|| status.is_set
	|| age_time_stamp.is_set
	|| update_rate.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field_validity_bitmap.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(alarm_type.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(scale.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(age_time_stamp.yfilter)
	|| ydk::is_set(update_rate.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.yfilter)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.yfilter)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (scale.is_set || is_set(scale.yfilter)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (age_time_stamp.is_set || is_set(age_time_stamp.yfilter)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
        field_validity_bitmap.value_namespace = name_space;
        field_validity_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
        alarm_type.value_namespace = name_space;
        alarm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale")
    {
        scale = value;
        scale.value_namespace = name_space;
        scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
        age_time_stamp.value_namespace = name_space;
        age_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "alarm-type")
    {
        alarm_type.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "scale")
    {
        scale.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-validity-bitmap" || name == "device-description" || name == "units" || name == "device-id" || name == "value" || name == "alarm-type" || name == "data-type" || name == "scale" || name == "precision" || name == "status" || name == "age-time-stamp" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::PwgInfo()
    :
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"}
{

    yang_name = "pwg-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::has_data() const
{
    return power_group_redundancy_mode.is_set
	|| power_group_power_units.is_set
	|| power_group_available_current.is_set
	|| power_group_drawn_current.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_group_redundancy_mode.yfilter)
	|| ydk::is_set(power_group_power_units.yfilter)
	|| ydk::is_set(power_group_available_current.yfilter)
	|| ydk::is_set(power_group_drawn_current.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.yfilter)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.yfilter)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_available_current.is_set || is_set(power_group_available_current.yfilter)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.yfilter)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
        power_group_redundancy_mode.value_namespace = name_space;
        power_group_redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
        power_group_power_units.value_namespace = name_space;
        power_group_power_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
        power_group_available_current.value_namespace = name_space;
        power_group_available_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
        power_group_drawn_current.value_namespace = name_space;
        power_group_drawn_current.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units.yfilter = yfilter;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current.yfilter = yfilter;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-group-redundancy-mode" || name == "power-group-power-units" || name == "power-group-available-current" || name == "power-group-drawn-current")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    description{YType::str, "description"},
    units{YType::enumeration, "units"},
    value_{YType::str, "value"},
    data_type{YType::enumeration, "data-type"},
    status{YType::enumeration, "status"},
    update_rate{YType::uint32, "update-rate"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::has_data() const
{
    return description.is_set
	|| units.is_set
	|| value_.is_set
	|| data_type.is_set
	|| status.is_set
	|| update_rate.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(update_rate.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "description" || name == "units" || name == "value" || name == "data-type" || name == "status" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-array")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_value{YType::int32, "threshold-value"},
    threshold_name{YType::str, "threshold-name"}
{

    yang_name = "threshold-array"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_name.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_name.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_name.is_set || is_set(threshold_name.yfilter)) leaf_name_data.push_back(threshold_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-name")
    {
        threshold_name = value;
        threshold_name.value_namespace = name_space;
        threshold_name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-name")
    {
        threshold_name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-name")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::InvAssetBag()
    :
    part_number{YType::str, "part-number"},
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"}
{

    yang_name = "inv-asset-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::has_data() const
{
    return part_number.is_set
	|| manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| original_equipment_manufacturer_string.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_revision.yfilter)
	|| ydk::is_set(manufacturer_firmware_identifier.yfilter)
	|| ydk::is_set(manufacturer_software_identifier.yfilter)
	|| ydk::is_set(manufacturer_common_language_equipment_identifier.yfilter)
	|| ydk::is_set(original_equipment_manufacturer_string.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.yfilter)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.yfilter)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.yfilter)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.yfilter)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.yfilter)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.yfilter)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
        manufacturer_assembly_number.value_namespace = name_space;
        manufacturer_assembly_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
        manufacturer_assembly_revision.value_namespace = name_space;
        manufacturer_assembly_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
        manufacturer_firmware_identifier.value_namespace = name_space;
        manufacturer_firmware_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
        manufacturer_software_identifier.value_namespace = name_space;
        manufacturer_software_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
        manufacturer_common_language_equipment_identifier.value_namespace = name_space;
        manufacturer_common_language_equipment_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
        original_equipment_manufacturer_string.value_namespace = name_space;
        original_equipment_manufacturer_string.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision.yfilter = yfilter;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier.yfilter = yfilter;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "part-number" || name == "manufacturer-assembly-number" || name == "manufacturer-assembly-revision" || name == "manufacturer-firmware-identifier" || name == "manufacturer-software-identifier" || name == "manufacturer-common-language-equipment-identifier" || name == "original-equipment-manufacturer-string")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::Threshold()
    :
    major_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo>())
	,critical_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo>())
{
    major_lo->parent = this;
    critical_hi->parent = this;
    minor_hi->parent = this;
    major_hi->parent = this;
    critical_lo->parent = this;
    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::has_data() const
{
    return (major_lo !=  nullptr && major_lo->has_data())
	|| (critical_hi !=  nullptr && critical_hi->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-lo" || name == "critical-hi" || name == "minor-hi" || name == "major-hi" || name == "critical-lo" || name == "minor-lo")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange>())
	,card_up_time(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::InvBasicBag()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "inv-basic-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::has_data() const
{
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::InvEepromInfo()
    :
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"},
    has_eeprom{YType::uint32, "has-eeprom"},
    description{YType::str, "description"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::has_data() const
{
    return inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| has_eeprom.is_set
	|| description.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inv_card_type.yfilter)
	|| ydk::is_set(opaque_data.yfilter)
	|| ydk::is_set(opaque_data_size.yfilter)
	|| ydk::is_set(has_eeprom.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inv_card_type.is_set || is_set(inv_card_type.yfilter)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.yfilter)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.yfilter)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.yfilter)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
        inv_card_type.value_namespace = name_space;
        inv_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
        opaque_data.value_namespace = name_space;
        opaque_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
        opaque_data_size.value_namespace = name_space;
        opaque_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
        has_eeprom.value_namespace = name_space;
        has_eeprom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inv-card-type")
    {
        inv_card_type.yfilter = yfilter;
    }
    if(value_path == "opaque-data")
    {
        opaque_data.yfilter = yfilter;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size.yfilter = yfilter;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeprom" || name == "inv-card-type" || name == "opaque-data" || name == "opaque-data-size" || name == "has-eeprom" || name == "description")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Eeprom()
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
    rma_code{YType::str, "rma-code"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::has_data() const
{
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
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::has_operation() const
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
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::get_name_leaf_data() const
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rma" || name == "description" || name == "idprom-format-rev" || name == "controller-family" || name == "controller-type" || name == "vid" || name == "hwid" || name == "pid" || name == "udi-description" || name == "udi-name" || name == "clei" || name == "eci" || name == "top-assem-part-num" || name == "top-assem-vid" || name == "pca-num" || name == "pcavid" || name == "chassis-sid" || name == "dev-num1" || name == "dev-num2" || name == "dev-num3" || name == "dev-num4" || name == "dev-num5" || name == "dev-num6" || name == "dev-num7" || name == "manu-test-data" || name == "asset-id" || name == "asset-alias" || name == "base-mac-address1" || name == "mac-add-blk-size1" || name == "base-mac-address2" || name == "mac-add-blk-size2" || name == "base-mac-address3" || name == "mac-add-blk-size3" || name == "base-mac-address4" || name == "mac-add-blk-size4" || name == "pcb-serial-num" || name == "power-supply-type" || name == "power-consumption" || name == "block-signature" || name == "block-version" || name == "block-length" || name == "block-checksum" || name == "eeprom-size" || name == "block-count" || name == "fru-major-type" || name == "fru-minor-type" || name == "oem-string" || name == "product-id" || name == "serial-number" || name == "part-number" || name == "part-revision" || name == "mfg-deviation" || name == "hw-version" || name == "mfg-bits" || name == "engineer-use" || name == "snmpoid" || name == "rma-code")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    test_history{YType::str, "test-history"},
    rma_number{YType::str, "rma-number"},
    rma_history{YType::str, "rma-history"}
{

    yang_name = "rma"; yang_parent_name = "eeprom"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return test_history.is_set
	|| rma_number.is_set
	|| rma_history.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_history.yfilter)
	|| ydk::is_set(rma_number.yfilter)
	|| ydk::is_set(rma_history.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_history.is_set || is_set(test_history.yfilter)) leaf_name_data.push_back(test_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.yfilter)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (rma_history.is_set || is_set(rma_history.yfilter)) leaf_name_data.push_back(rma_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-history" || name == "rma-number" || name == "rma-history")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    vm_node_id{YType::uint32, "vm-node-id"},
    vm_done{YType::int32, "vm-done"},
    node_id{YType::uint32, "node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo>())
{
    env_sensor_info->parent = this;
    pwg_info->parent = this;
    env_sensor_info_xml->parent = this;
    inv_asset_bag->parent = this;
    threshold->parent = this;
    fru_info->parent = this;
    inv_basic_bag->parent = this;
    inv_eeprom_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "tsi1"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::has_data() const
{
    return module_done.is_set
	|| vm_node_id.is_set
	|| vm_done.is_set
	|| node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (threshold !=  nullptr && threshold->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_done.yfilter)
	|| ydk::is_set(vm_node_id.yfilter)
	|| ydk::is_set(vm_done.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.yfilter)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.yfilter)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.yfilter)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-done")
    {
        module_done = value;
        module_done.value_namespace = name_space;
        module_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
        vm_node_id.value_namespace = name_space;
        vm_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
        vm_done.value_namespace = name_space;
        vm_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-done")
    {
        module_done.yfilter = yfilter;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id.yfilter = yfilter;
    }
    if(value_path == "vm-done")
    {
        vm_done.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "env-sensor-info" || name == "pwg-info" || name == "env-sensor-info-xml" || name == "inv-asset-bag" || name == "threshold" || name == "fru-info" || name == "inv-basic-bag" || name == "inv-eeprom-info" || name == "module-done" || name == "vm-node-id" || name == "vm-done" || name == "node-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    device_description{YType::str, "device-description"},
    units{YType::str, "units"},
    device_id{YType::uint32, "device-id"},
    value_{YType::uint32, "value"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    scale{YType::uint32, "scale"},
    precision{YType::uint32, "precision"},
    status{YType::uint32, "status"},
    age_time_stamp{YType::uint32, "age-time-stamp"},
    update_rate{YType::uint32, "update-rate"}
{

    yang_name = "env-sensor-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::has_data() const
{
    return field_validity_bitmap.is_set
	|| device_description.is_set
	|| units.is_set
	|| device_id.is_set
	|| value_.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| scale.is_set
	|| precision.is_set
	|| status.is_set
	|| age_time_stamp.is_set
	|| update_rate.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field_validity_bitmap.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(alarm_type.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(scale.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(age_time_stamp.yfilter)
	|| ydk::is_set(update_rate.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.yfilter)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.yfilter)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (scale.is_set || is_set(scale.yfilter)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (age_time_stamp.is_set || is_set(age_time_stamp.yfilter)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
        field_validity_bitmap.value_namespace = name_space;
        field_validity_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
        alarm_type.value_namespace = name_space;
        alarm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale")
    {
        scale = value;
        scale.value_namespace = name_space;
        scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
        age_time_stamp.value_namespace = name_space;
        age_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "alarm-type")
    {
        alarm_type.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "scale")
    {
        scale.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-validity-bitmap" || name == "device-description" || name == "units" || name == "device-id" || name == "value" || name == "alarm-type" || name == "data-type" || name == "scale" || name == "precision" || name == "status" || name == "age-time-stamp" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::PwgInfo()
    :
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"}
{

    yang_name = "pwg-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::has_data() const
{
    return power_group_redundancy_mode.is_set
	|| power_group_power_units.is_set
	|| power_group_available_current.is_set
	|| power_group_drawn_current.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_group_redundancy_mode.yfilter)
	|| ydk::is_set(power_group_power_units.yfilter)
	|| ydk::is_set(power_group_available_current.yfilter)
	|| ydk::is_set(power_group_drawn_current.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.yfilter)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.yfilter)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_available_current.is_set || is_set(power_group_available_current.yfilter)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.yfilter)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
        power_group_redundancy_mode.value_namespace = name_space;
        power_group_redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
        power_group_power_units.value_namespace = name_space;
        power_group_power_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
        power_group_available_current.value_namespace = name_space;
        power_group_available_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
        power_group_drawn_current.value_namespace = name_space;
        power_group_drawn_current.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units.yfilter = yfilter;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current.yfilter = yfilter;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-group-redundancy-mode" || name == "power-group-power-units" || name == "power-group-available-current" || name == "power-group-drawn-current")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    description{YType::str, "description"},
    units{YType::enumeration, "units"},
    value_{YType::str, "value"},
    data_type{YType::enumeration, "data-type"},
    status{YType::enumeration, "status"},
    update_rate{YType::uint32, "update-rate"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::has_data() const
{
    return description.is_set
	|| units.is_set
	|| value_.is_set
	|| data_type.is_set
	|| status.is_set
	|| update_rate.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(update_rate.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "description" || name == "units" || name == "value" || name == "data-type" || name == "status" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-array")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_value{YType::int32, "threshold-value"},
    threshold_name{YType::str, "threshold-name"}
{

    yang_name = "threshold-array"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_name.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_name.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_name.is_set || is_set(threshold_name.yfilter)) leaf_name_data.push_back(threshold_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-name")
    {
        threshold_name = value;
        threshold_name.value_namespace = name_space;
        threshold_name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-name")
    {
        threshold_name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-name")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::InvAssetBag()
    :
    part_number{YType::str, "part-number"},
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"}
{

    yang_name = "inv-asset-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::has_data() const
{
    return part_number.is_set
	|| manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| original_equipment_manufacturer_string.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_revision.yfilter)
	|| ydk::is_set(manufacturer_firmware_identifier.yfilter)
	|| ydk::is_set(manufacturer_software_identifier.yfilter)
	|| ydk::is_set(manufacturer_common_language_equipment_identifier.yfilter)
	|| ydk::is_set(original_equipment_manufacturer_string.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.yfilter)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.yfilter)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.yfilter)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.yfilter)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.yfilter)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.yfilter)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
        manufacturer_assembly_number.value_namespace = name_space;
        manufacturer_assembly_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
        manufacturer_assembly_revision.value_namespace = name_space;
        manufacturer_assembly_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
        manufacturer_firmware_identifier.value_namespace = name_space;
        manufacturer_firmware_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
        manufacturer_software_identifier.value_namespace = name_space;
        manufacturer_software_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
        manufacturer_common_language_equipment_identifier.value_namespace = name_space;
        manufacturer_common_language_equipment_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
        original_equipment_manufacturer_string.value_namespace = name_space;
        original_equipment_manufacturer_string.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision.yfilter = yfilter;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier.yfilter = yfilter;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "part-number" || name == "manufacturer-assembly-number" || name == "manufacturer-assembly-revision" || name == "manufacturer-firmware-identifier" || name == "manufacturer-software-identifier" || name == "manufacturer-common-language-equipment-identifier" || name == "original-equipment-manufacturer-string")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::Threshold()
    :
    major_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo>())
	,critical_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo>())
{
    major_lo->parent = this;
    critical_hi->parent = this;
    minor_hi->parent = this;
    major_hi->parent = this;
    critical_lo->parent = this;
    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::has_data() const
{
    return (major_lo !=  nullptr && major_lo->has_data())
	|| (critical_hi !=  nullptr && critical_hi->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-lo" || name == "critical-hi" || name == "minor-hi" || name == "major-hi" || name == "critical-lo" || name == "minor-lo")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange>())
	,card_up_time(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::InvBasicBag()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "inv-basic-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::has_data() const
{
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::InvEepromInfo()
    :
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"},
    has_eeprom{YType::uint32, "has-eeprom"},
    description{YType::str, "description"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::has_data() const
{
    return inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| has_eeprom.is_set
	|| description.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inv_card_type.yfilter)
	|| ydk::is_set(opaque_data.yfilter)
	|| ydk::is_set(opaque_data_size.yfilter)
	|| ydk::is_set(has_eeprom.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inv_card_type.is_set || is_set(inv_card_type.yfilter)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.yfilter)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.yfilter)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.yfilter)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
        inv_card_type.value_namespace = name_space;
        inv_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
        opaque_data.value_namespace = name_space;
        opaque_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
        opaque_data_size.value_namespace = name_space;
        opaque_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
        has_eeprom.value_namespace = name_space;
        has_eeprom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inv-card-type")
    {
        inv_card_type.yfilter = yfilter;
    }
    if(value_path == "opaque-data")
    {
        opaque_data.yfilter = yfilter;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size.yfilter = yfilter;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeprom" || name == "inv-card-type" || name == "opaque-data" || name == "opaque-data-size" || name == "has-eeprom" || name == "description")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Eeprom()
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
    rma_code{YType::str, "rma-code"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::has_data() const
{
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
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::has_operation() const
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
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::get_name_leaf_data() const
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rma" || name == "description" || name == "idprom-format-rev" || name == "controller-family" || name == "controller-type" || name == "vid" || name == "hwid" || name == "pid" || name == "udi-description" || name == "udi-name" || name == "clei" || name == "eci" || name == "top-assem-part-num" || name == "top-assem-vid" || name == "pca-num" || name == "pcavid" || name == "chassis-sid" || name == "dev-num1" || name == "dev-num2" || name == "dev-num3" || name == "dev-num4" || name == "dev-num5" || name == "dev-num6" || name == "dev-num7" || name == "manu-test-data" || name == "asset-id" || name == "asset-alias" || name == "base-mac-address1" || name == "mac-add-blk-size1" || name == "base-mac-address2" || name == "mac-add-blk-size2" || name == "base-mac-address3" || name == "mac-add-blk-size3" || name == "base-mac-address4" || name == "mac-add-blk-size4" || name == "pcb-serial-num" || name == "power-supply-type" || name == "power-consumption" || name == "block-signature" || name == "block-version" || name == "block-length" || name == "block-checksum" || name == "eeprom-size" || name == "block-count" || name == "fru-major-type" || name == "fru-minor-type" || name == "oem-string" || name == "product-id" || name == "serial-number" || name == "part-number" || name == "part-revision" || name == "mfg-deviation" || name == "hw-version" || name == "mfg-bits" || name == "engineer-use" || name == "snmpoid" || name == "rma-code")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    test_history{YType::str, "test-history"},
    rma_number{YType::str, "rma-number"},
    rma_history{YType::str, "rma-history"}
{

    yang_name = "rma"; yang_parent_name = "eeprom"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return test_history.is_set
	|| rma_number.is_set
	|| rma_history.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_history.yfilter)
	|| ydk::is_set(rma_number.yfilter)
	|| ydk::is_set(rma_history.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_history.is_set || is_set(test_history.yfilter)) leaf_name_data.push_back(test_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.yfilter)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (rma_history.is_set || is_set(rma_history.yfilter)) leaf_name_data.push_back(rma_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Inventory::Racks::Rack::Powershelf::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-history" || name == "rma-number" || name == "rma-history")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    vm_node_id{YType::uint32, "vm-node-id"},
    vm_done{YType::int32, "vm-done"},
    node_id{YType::uint32, "node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo>())
{
    env_sensor_info->parent = this;
    pwg_info->parent = this;
    env_sensor_info_xml->parent = this;
    inv_asset_bag->parent = this;
    threshold->parent = this;
    fru_info->parent = this;
    inv_basic_bag->parent = this;
    inv_eeprom_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::has_data() const
{
    return module_done.is_set
	|| vm_node_id.is_set
	|| vm_done.is_set
	|| node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (threshold !=  nullptr && threshold->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_done.yfilter)
	|| ydk::is_set(vm_node_id.yfilter)
	|| ydk::is_set(vm_done.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.yfilter)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.yfilter)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.yfilter)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-done")
    {
        module_done = value;
        module_done.value_namespace = name_space;
        module_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
        vm_node_id.value_namespace = name_space;
        vm_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
        vm_done.value_namespace = name_space;
        vm_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-done")
    {
        module_done.yfilter = yfilter;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id.yfilter = yfilter;
    }
    if(value_path == "vm-done")
    {
        vm_done.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "env-sensor-info" || name == "pwg-info" || name == "env-sensor-info-xml" || name == "inv-asset-bag" || name == "threshold" || name == "fru-info" || name == "inv-basic-bag" || name == "inv-eeprom-info" || name == "module-done" || name == "vm-node-id" || name == "vm-done" || name == "node-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    device_description{YType::str, "device-description"},
    units{YType::str, "units"},
    device_id{YType::uint32, "device-id"},
    value_{YType::uint32, "value"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    scale{YType::uint32, "scale"},
    precision{YType::uint32, "precision"},
    status{YType::uint32, "status"},
    age_time_stamp{YType::uint32, "age-time-stamp"},
    update_rate{YType::uint32, "update-rate"}
{

    yang_name = "env-sensor-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::has_data() const
{
    return field_validity_bitmap.is_set
	|| device_description.is_set
	|| units.is_set
	|| device_id.is_set
	|| value_.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| scale.is_set
	|| precision.is_set
	|| status.is_set
	|| age_time_stamp.is_set
	|| update_rate.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field_validity_bitmap.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(alarm_type.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(scale.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(age_time_stamp.yfilter)
	|| ydk::is_set(update_rate.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.yfilter)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.yfilter)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (scale.is_set || is_set(scale.yfilter)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (age_time_stamp.is_set || is_set(age_time_stamp.yfilter)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
        field_validity_bitmap.value_namespace = name_space;
        field_validity_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
        alarm_type.value_namespace = name_space;
        alarm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale")
    {
        scale = value;
        scale.value_namespace = name_space;
        scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
        age_time_stamp.value_namespace = name_space;
        age_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "alarm-type")
    {
        alarm_type.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "scale")
    {
        scale.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-validity-bitmap" || name == "device-description" || name == "units" || name == "device-id" || name == "value" || name == "alarm-type" || name == "data-type" || name == "scale" || name == "precision" || name == "status" || name == "age-time-stamp" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::PwgInfo()
    :
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"}
{

    yang_name = "pwg-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::has_data() const
{
    return power_group_redundancy_mode.is_set
	|| power_group_power_units.is_set
	|| power_group_available_current.is_set
	|| power_group_drawn_current.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_group_redundancy_mode.yfilter)
	|| ydk::is_set(power_group_power_units.yfilter)
	|| ydk::is_set(power_group_available_current.yfilter)
	|| ydk::is_set(power_group_drawn_current.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.yfilter)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.yfilter)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_available_current.is_set || is_set(power_group_available_current.yfilter)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.yfilter)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
        power_group_redundancy_mode.value_namespace = name_space;
        power_group_redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
        power_group_power_units.value_namespace = name_space;
        power_group_power_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
        power_group_available_current.value_namespace = name_space;
        power_group_available_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
        power_group_drawn_current.value_namespace = name_space;
        power_group_drawn_current.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units.yfilter = yfilter;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current.yfilter = yfilter;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-group-redundancy-mode" || name == "power-group-power-units" || name == "power-group-available-current" || name == "power-group-drawn-current")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    description{YType::str, "description"},
    units{YType::enumeration, "units"},
    value_{YType::str, "value"},
    data_type{YType::enumeration, "data-type"},
    status{YType::enumeration, "status"},
    update_rate{YType::uint32, "update-rate"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::has_data() const
{
    return description.is_set
	|| units.is_set
	|| value_.is_set
	|| data_type.is_set
	|| status.is_set
	|| update_rate.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(update_rate.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "description" || name == "units" || name == "value" || name == "data-type" || name == "status" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-array")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_value{YType::int32, "threshold-value"},
    threshold_name{YType::str, "threshold-name"}
{

    yang_name = "threshold-array"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_name.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_name.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_name.is_set || is_set(threshold_name.yfilter)) leaf_name_data.push_back(threshold_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-name")
    {
        threshold_name = value;
        threshold_name.value_namespace = name_space;
        threshold_name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-name")
    {
        threshold_name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-name")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::InvAssetBag()
    :
    part_number{YType::str, "part-number"},
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"}
{

    yang_name = "inv-asset-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::has_data() const
{
    return part_number.is_set
	|| manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| original_equipment_manufacturer_string.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_revision.yfilter)
	|| ydk::is_set(manufacturer_firmware_identifier.yfilter)
	|| ydk::is_set(manufacturer_software_identifier.yfilter)
	|| ydk::is_set(manufacturer_common_language_equipment_identifier.yfilter)
	|| ydk::is_set(original_equipment_manufacturer_string.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.yfilter)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.yfilter)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.yfilter)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.yfilter)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.yfilter)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.yfilter)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
        manufacturer_assembly_number.value_namespace = name_space;
        manufacturer_assembly_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
        manufacturer_assembly_revision.value_namespace = name_space;
        manufacturer_assembly_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
        manufacturer_firmware_identifier.value_namespace = name_space;
        manufacturer_firmware_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
        manufacturer_software_identifier.value_namespace = name_space;
        manufacturer_software_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
        manufacturer_common_language_equipment_identifier.value_namespace = name_space;
        manufacturer_common_language_equipment_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
        original_equipment_manufacturer_string.value_namespace = name_space;
        original_equipment_manufacturer_string.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision.yfilter = yfilter;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier.yfilter = yfilter;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "part-number" || name == "manufacturer-assembly-number" || name == "manufacturer-assembly-revision" || name == "manufacturer-firmware-identifier" || name == "manufacturer-software-identifier" || name == "manufacturer-common-language-equipment-identifier" || name == "original-equipment-manufacturer-string")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::Threshold()
    :
    major_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo>())
	,critical_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo>())
{
    major_lo->parent = this;
    critical_hi->parent = this;
    minor_hi->parent = this;
    major_hi->parent = this;
    critical_lo->parent = this;
    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::has_data() const
{
    return (major_lo !=  nullptr && major_lo->has_data())
	|| (critical_hi !=  nullptr && critical_hi->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-lo" || name == "critical-hi" || name == "minor-hi" || name == "major-hi" || name == "critical-lo" || name == "minor-lo")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange>())
	,card_up_time(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::InvBasicBag()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "inv-basic-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::has_data() const
{
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::InvEepromInfo()
    :
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"},
    has_eeprom{YType::uint32, "has-eeprom"},
    description{YType::str, "description"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::has_data() const
{
    return inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| has_eeprom.is_set
	|| description.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inv_card_type.yfilter)
	|| ydk::is_set(opaque_data.yfilter)
	|| ydk::is_set(opaque_data_size.yfilter)
	|| ydk::is_set(has_eeprom.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inv_card_type.is_set || is_set(inv_card_type.yfilter)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.yfilter)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.yfilter)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.yfilter)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
        inv_card_type.value_namespace = name_space;
        inv_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
        opaque_data.value_namespace = name_space;
        opaque_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
        opaque_data_size.value_namespace = name_space;
        opaque_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
        has_eeprom.value_namespace = name_space;
        has_eeprom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inv-card-type")
    {
        inv_card_type.yfilter = yfilter;
    }
    if(value_path == "opaque-data")
    {
        opaque_data.yfilter = yfilter;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size.yfilter = yfilter;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeprom" || name == "inv-card-type" || name == "opaque-data" || name == "opaque-data-size" || name == "has-eeprom" || name == "description")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Eeprom()
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
    rma_code{YType::str, "rma-code"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::has_data() const
{
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
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::has_operation() const
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
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::get_name_leaf_data() const
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rma" || name == "description" || name == "idprom-format-rev" || name == "controller-family" || name == "controller-type" || name == "vid" || name == "hwid" || name == "pid" || name == "udi-description" || name == "udi-name" || name == "clei" || name == "eci" || name == "top-assem-part-num" || name == "top-assem-vid" || name == "pca-num" || name == "pcavid" || name == "chassis-sid" || name == "dev-num1" || name == "dev-num2" || name == "dev-num3" || name == "dev-num4" || name == "dev-num5" || name == "dev-num6" || name == "dev-num7" || name == "manu-test-data" || name == "asset-id" || name == "asset-alias" || name == "base-mac-address1" || name == "mac-add-blk-size1" || name == "base-mac-address2" || name == "mac-add-blk-size2" || name == "base-mac-address3" || name == "mac-add-blk-size3" || name == "base-mac-address4" || name == "mac-add-blk-size4" || name == "pcb-serial-num" || name == "power-supply-type" || name == "power-consumption" || name == "block-signature" || name == "block-version" || name == "block-length" || name == "block-checksum" || name == "eeprom-size" || name == "block-count" || name == "fru-major-type" || name == "fru-minor-type" || name == "oem-string" || name == "product-id" || name == "serial-number" || name == "part-number" || name == "part-revision" || name == "mfg-deviation" || name == "hw-version" || name == "mfg-bits" || name == "engineer-use" || name == "snmpoid" || name == "rma-code")
        return true;
    return false;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    test_history{YType::str, "test-history"},
    rma_number{YType::str, "rma-number"},
    rma_history{YType::str, "rma-history"}
{

    yang_name = "rma"; yang_parent_name = "eeprom"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return test_history.is_set
	|| rma_number.is_set
	|| rma_history.is_set;
}

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test_history.yfilter)
	|| ydk::is_set(rma_number.yfilter)
	|| ydk::is_set(rma_history.yfilter);
}

std::string Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test_history.is_set || is_set(test_history.yfilter)) leaf_name_data.push_back(test_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.yfilter)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (rma_history.is_set || is_set(rma_history.yfilter)) leaf_name_data.push_back(rma_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-history" || name == "rma-number" || name == "rma-history")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Fantray()
{

    yang_name = "fantray"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::~Fantray()
{
}

bool Inventory::Racks::Rack::Fantray::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fantray";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Slot()
    :
    name{YType::str, "name"}
    	,
    tsi1s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes>())
{
    tsi1s->parent = this;
    attributes->parent = this;

    yang_name = "slot"; yang_parent_name = "fantray"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::~Slot()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::has_data() const
{
    return name.is_set
	|| (tsi1s !=  nullptr && tsi1s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi1s !=  nullptr && tsi1s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi1s")
    {
        if(tsi1s == nullptr)
        {
            tsi1s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S>();
        }
        return tsi1s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi1s != nullptr)
    {
        children["tsi1s"] = tsi1s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi1s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1S()
{

    yang_name = "tsi1s"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::~Tsi1S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::has_data() const
{
    for (std::size_t index=0; index<tsi1.size(); index++)
    {
        if(tsi1[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::has_operation() const
{
    for (std::size_t index=0; index<tsi1.size(); index++)
    {
        if(tsi1[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi1s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi1")
    {
        for(auto const & c : tsi1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1>();
        c->parent = this;
        tsi1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi1")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi1()
    :
    name{YType::str, "name"}
    	,
    tsi2s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes>())
{
    tsi2s->parent = this;
    attributes->parent = this;

    yang_name = "tsi1"; yang_parent_name = "tsi1s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::~Tsi1()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::has_data() const
{
    return name.is_set
	|| (tsi2s !=  nullptr && tsi2s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi2s !=  nullptr && tsi2s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi1" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi2s")
    {
        if(tsi2s == nullptr)
        {
            tsi2s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S>();
        }
        return tsi2s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi2s != nullptr)
    {
        children["tsi2s"] = tsi2s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi2s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2S()
{

    yang_name = "tsi2s"; yang_parent_name = "tsi1"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::~Tsi2S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::has_data() const
{
    for (std::size_t index=0; index<tsi2.size(); index++)
    {
        if(tsi2[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::has_operation() const
{
    for (std::size_t index=0; index<tsi2.size(); index++)
    {
        if(tsi2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi2s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi2")
    {
        for(auto const & c : tsi2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2>();
        c->parent = this;
        tsi2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi2")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi2()
    :
    name{YType::str, "name"}
    	,
    tsi3s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes>())
{
    tsi3s->parent = this;
    attributes->parent = this;

    yang_name = "tsi2"; yang_parent_name = "tsi2s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::~Tsi2()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::has_data() const
{
    return name.is_set
	|| (tsi3s !=  nullptr && tsi3s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi3s !=  nullptr && tsi3s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi2" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi3s")
    {
        if(tsi3s == nullptr)
        {
            tsi3s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S>();
        }
        return tsi3s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi3s != nullptr)
    {
        children["tsi3s"] = tsi3s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi3s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3S()
{

    yang_name = "tsi3s"; yang_parent_name = "tsi2"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::~Tsi3S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::has_data() const
{
    for (std::size_t index=0; index<tsi3.size(); index++)
    {
        if(tsi3[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::has_operation() const
{
    for (std::size_t index=0; index<tsi3.size(); index++)
    {
        if(tsi3[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi3s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi3")
    {
        for(auto const & c : tsi3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3>();
        c->parent = this;
        tsi3.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi3)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi3")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi3()
    :
    name{YType::str, "name"}
    	,
    tsi4s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes>())
{
    tsi4s->parent = this;
    attributes->parent = this;

    yang_name = "tsi3"; yang_parent_name = "tsi3s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::~Tsi3()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::has_data() const
{
    return name.is_set
	|| (tsi4s !=  nullptr && tsi4s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi4s !=  nullptr && tsi4s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi3" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi4s")
    {
        if(tsi4s == nullptr)
        {
            tsi4s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S>();
        }
        return tsi4s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi4s != nullptr)
    {
        children["tsi4s"] = tsi4s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi4s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4S()
{

    yang_name = "tsi4s"; yang_parent_name = "tsi3"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::~Tsi4S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::has_data() const
{
    for (std::size_t index=0; index<tsi4.size(); index++)
    {
        if(tsi4[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::has_operation() const
{
    for (std::size_t index=0; index<tsi4.size(); index++)
    {
        if(tsi4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi4s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi4")
    {
        for(auto const & c : tsi4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4>();
        c->parent = this;
        tsi4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi4")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi4()
    :
    name{YType::str, "name"}
    	,
    tsi5s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes>())
{
    tsi5s->parent = this;
    attributes->parent = this;

    yang_name = "tsi4"; yang_parent_name = "tsi4s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::~Tsi4()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::has_data() const
{
    return name.is_set
	|| (tsi5s !=  nullptr && tsi5s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi5s !=  nullptr && tsi5s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi4" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi5s")
    {
        if(tsi5s == nullptr)
        {
            tsi5s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S>();
        }
        return tsi5s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi5s != nullptr)
    {
        children["tsi5s"] = tsi5s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi5s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5S()
{

    yang_name = "tsi5s"; yang_parent_name = "tsi4"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::~Tsi5S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::has_data() const
{
    for (std::size_t index=0; index<tsi5.size(); index++)
    {
        if(tsi5[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::has_operation() const
{
    for (std::size_t index=0; index<tsi5.size(); index++)
    {
        if(tsi5[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi5s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi5")
    {
        for(auto const & c : tsi5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5>();
        c->parent = this;
        tsi5.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi5)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi5")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi5()
    :
    name{YType::str, "name"}
    	,
    tsi6s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes>())
{
    tsi6s->parent = this;
    attributes->parent = this;

    yang_name = "tsi5"; yang_parent_name = "tsi5s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::~Tsi5()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::has_data() const
{
    return name.is_set
	|| (tsi6s !=  nullptr && tsi6s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi6s !=  nullptr && tsi6s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi5" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi6s")
    {
        if(tsi6s == nullptr)
        {
            tsi6s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S>();
        }
        return tsi6s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi6s != nullptr)
    {
        children["tsi6s"] = tsi6s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi6s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6S()
{

    yang_name = "tsi6s"; yang_parent_name = "tsi5"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::~Tsi6S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::has_data() const
{
    for (std::size_t index=0; index<tsi6.size(); index++)
    {
        if(tsi6[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::has_operation() const
{
    for (std::size_t index=0; index<tsi6.size(); index++)
    {
        if(tsi6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi6s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi6")
    {
        for(auto const & c : tsi6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6>();
        c->parent = this;
        tsi6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi6")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi6()
    :
    name{YType::str, "name"}
    	,
    tsi7s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes>())
{
    tsi7s->parent = this;
    attributes->parent = this;

    yang_name = "tsi6"; yang_parent_name = "tsi6s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::~Tsi6()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::has_data() const
{
    return name.is_set
	|| (tsi7s !=  nullptr && tsi7s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi7s !=  nullptr && tsi7s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi6" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi7s")
    {
        if(tsi7s == nullptr)
        {
            tsi7s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S>();
        }
        return tsi7s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi7s != nullptr)
    {
        children["tsi7s"] = tsi7s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi7s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7S()
{

    yang_name = "tsi7s"; yang_parent_name = "tsi6"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::~Tsi7S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::has_data() const
{
    for (std::size_t index=0; index<tsi7.size(); index++)
    {
        if(tsi7[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::has_operation() const
{
    for (std::size_t index=0; index<tsi7.size(); index++)
    {
        if(tsi7[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi7s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi7")
    {
        for(auto const & c : tsi7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7>();
        c->parent = this;
        tsi7.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi7)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi7")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi7()
    :
    name{YType::str, "name"}
    	,
    tsi8s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes>())
{
    tsi8s->parent = this;
    attributes->parent = this;

    yang_name = "tsi7"; yang_parent_name = "tsi7s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::~Tsi7()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::has_data() const
{
    return name.is_set
	|| (tsi8s !=  nullptr && tsi8s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi8s !=  nullptr && tsi8s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi7" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi8s")
    {
        if(tsi8s == nullptr)
        {
            tsi8s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S>();
        }
        return tsi8s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi8s != nullptr)
    {
        children["tsi8s"] = tsi8s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi8s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8S()
{

    yang_name = "tsi8s"; yang_parent_name = "tsi7"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::~Tsi8S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::has_data() const
{
    for (std::size_t index=0; index<tsi8.size(); index++)
    {
        if(tsi8[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::has_operation() const
{
    for (std::size_t index=0; index<tsi8.size(); index++)
    {
        if(tsi8[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi8s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi8")
    {
        for(auto const & c : tsi8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8>();
        c->parent = this;
        tsi8.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi8)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi8")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi8()
    :
    name{YType::str, "name"}
    	,
    tsi9s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes>())
{
    tsi9s->parent = this;
    attributes->parent = this;

    yang_name = "tsi8"; yang_parent_name = "tsi8s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::~Tsi8()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::has_data() const
{
    return name.is_set
	|| (tsi9s !=  nullptr && tsi9s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi9s !=  nullptr && tsi9s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi8" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi9s")
    {
        if(tsi9s == nullptr)
        {
            tsi9s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S>();
        }
        return tsi9s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi9s != nullptr)
    {
        children["tsi9s"] = tsi9s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi9s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9S()
{

    yang_name = "tsi9s"; yang_parent_name = "tsi8"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::~Tsi9S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::has_data() const
{
    for (std::size_t index=0; index<tsi9.size(); index++)
    {
        if(tsi9[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::has_operation() const
{
    for (std::size_t index=0; index<tsi9.size(); index++)
    {
        if(tsi9[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi9s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi9")
    {
        for(auto const & c : tsi9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9>();
        c->parent = this;
        tsi9.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi9)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi9")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi9()
    :
    name{YType::str, "name"}
    	,
    tsi10s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes>())
{
    tsi10s->parent = this;
    attributes->parent = this;

    yang_name = "tsi9"; yang_parent_name = "tsi9s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::~Tsi9()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::has_data() const
{
    return name.is_set
	|| (tsi10s !=  nullptr && tsi10s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi10s !=  nullptr && tsi10s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi9" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi10s")
    {
        if(tsi10s == nullptr)
        {
            tsi10s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S>();
        }
        return tsi10s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi10s != nullptr)
    {
        children["tsi10s"] = tsi10s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi10s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10S()
{

    yang_name = "tsi10s"; yang_parent_name = "tsi9"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::~Tsi10S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::has_data() const
{
    for (std::size_t index=0; index<tsi10.size(); index++)
    {
        if(tsi10[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::has_operation() const
{
    for (std::size_t index=0; index<tsi10.size(); index++)
    {
        if(tsi10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi10s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi10")
    {
        for(auto const & c : tsi10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10>();
        c->parent = this;
        tsi10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi10")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi10()
    :
    name{YType::str, "name"}
    	,
    tsi11s(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S>())
	,attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes>())
{
    tsi11s->parent = this;
    attributes->parent = this;

    yang_name = "tsi10"; yang_parent_name = "tsi10s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::~Tsi10()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::has_data() const
{
    return name.is_set
	|| (tsi11s !=  nullptr && tsi11s->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (tsi11s !=  nullptr && tsi11s->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi10" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi11s")
    {
        if(tsi11s == nullptr)
        {
            tsi11s = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S>();
        }
        return tsi11s;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tsi11s != nullptr)
    {
        children["tsi11s"] = tsi11s;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi11s" || name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11S()
{

    yang_name = "tsi11s"; yang_parent_name = "tsi10"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::~Tsi11S()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::has_data() const
{
    for (std::size_t index=0; index<tsi11.size(); index++)
    {
        if(tsi11[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::has_operation() const
{
    for (std::size_t index=0; index<tsi11.size(); index++)
    {
        if(tsi11[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi11s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsi11")
    {
        for(auto const & c : tsi11)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11>();
        c->parent = this;
        tsi11.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tsi11)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsi11")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Tsi11()
    :
    name{YType::str, "name"}
    	,
    attributes(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes>())
{
    attributes->parent = this;

    yang_name = "tsi11"; yang_parent_name = "tsi11s"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::~Tsi11()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsi11" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    vm_node_id{YType::uint32, "vm-node-id"},
    vm_done{YType::int32, "vm-done"},
    node_id{YType::uint32, "node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo>())
{
    env_sensor_info->parent = this;
    pwg_info->parent = this;
    env_sensor_info_xml->parent = this;
    inv_asset_bag->parent = this;
    threshold->parent = this;
    fru_info->parent = this;
    inv_basic_bag->parent = this;
    inv_eeprom_info->parent = this;

    yang_name = "attributes"; yang_parent_name = "tsi11"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::has_data() const
{
    return module_done.is_set
	|| vm_node_id.is_set
	|| vm_done.is_set
	|| node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (threshold !=  nullptr && threshold->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_done.yfilter)
	|| ydk::is_set(vm_node_id.yfilter)
	|| ydk::is_set(vm_done.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.yfilter)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.yfilter)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.yfilter)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-done")
    {
        module_done = value;
        module_done.value_namespace = name_space;
        module_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
        vm_node_id.value_namespace = name_space;
        vm_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
        vm_done.value_namespace = name_space;
        vm_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-done")
    {
        module_done.yfilter = yfilter;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id.yfilter = yfilter;
    }
    if(value_path == "vm-done")
    {
        vm_done.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "env-sensor-info" || name == "pwg-info" || name == "env-sensor-info-xml" || name == "inv-asset-bag" || name == "threshold" || name == "fru-info" || name == "inv-basic-bag" || name == "inv-eeprom-info" || name == "module-done" || name == "vm-node-id" || name == "vm-done" || name == "node-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    device_description{YType::str, "device-description"},
    units{YType::str, "units"},
    device_id{YType::uint32, "device-id"},
    value_{YType::uint32, "value"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    scale{YType::uint32, "scale"},
    precision{YType::uint32, "precision"},
    status{YType::uint32, "status"},
    age_time_stamp{YType::uint32, "age-time-stamp"},
    update_rate{YType::uint32, "update-rate"}
{

    yang_name = "env-sensor-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::has_data() const
{
    return field_validity_bitmap.is_set
	|| device_description.is_set
	|| units.is_set
	|| device_id.is_set
	|| value_.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| scale.is_set
	|| precision.is_set
	|| status.is_set
	|| age_time_stamp.is_set
	|| update_rate.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field_validity_bitmap.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(alarm_type.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(scale.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(age_time_stamp.yfilter)
	|| ydk::is_set(update_rate.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.yfilter)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.yfilter)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (scale.is_set || is_set(scale.yfilter)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (age_time_stamp.is_set || is_set(age_time_stamp.yfilter)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
        field_validity_bitmap.value_namespace = name_space;
        field_validity_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
        alarm_type.value_namespace = name_space;
        alarm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale")
    {
        scale = value;
        scale.value_namespace = name_space;
        scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
        age_time_stamp.value_namespace = name_space;
        age_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "alarm-type")
    {
        alarm_type.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "scale")
    {
        scale.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-validity-bitmap" || name == "device-description" || name == "units" || name == "device-id" || name == "value" || name == "alarm-type" || name == "data-type" || name == "scale" || name == "precision" || name == "status" || name == "age-time-stamp" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::PwgInfo()
    :
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"}
{

    yang_name = "pwg-info"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::has_data() const
{
    return power_group_redundancy_mode.is_set
	|| power_group_power_units.is_set
	|| power_group_available_current.is_set
	|| power_group_drawn_current.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_group_redundancy_mode.yfilter)
	|| ydk::is_set(power_group_power_units.yfilter)
	|| ydk::is_set(power_group_available_current.yfilter)
	|| ydk::is_set(power_group_drawn_current.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.yfilter)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.yfilter)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_available_current.is_set || is_set(power_group_available_current.yfilter)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.yfilter)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
        power_group_redundancy_mode.value_namespace = name_space;
        power_group_redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
        power_group_power_units.value_namespace = name_space;
        power_group_power_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
        power_group_available_current.value_namespace = name_space;
        power_group_available_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
        power_group_drawn_current.value_namespace = name_space;
        power_group_drawn_current.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units.yfilter = yfilter;
    }
    if(value_path == "power-group-available-current")
    {
        power_group_available_current.yfilter = yfilter;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::PwgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-group-redundancy-mode" || name == "power-group-power-units" || name == "power-group-available-current" || name == "power-group-drawn-current")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    description{YType::str, "description"},
    units{YType::enumeration, "units"},
    value_{YType::str, "value"},
    data_type{YType::enumeration, "data-type"},
    status{YType::enumeration, "status"},
    update_rate{YType::uint32, "update-rate"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::has_data() const
{
    return description.is_set
	|| units.is_set
	|| value_.is_set
	|| data_type.is_set
	|| status.is_set
	|| update_rate.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(update_rate.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "description" || name == "units" || name == "value" || name == "data-type" || name == "status" || name == "update-rate")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-array")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_value{YType::int32, "threshold-value"},
    threshold_name{YType::str, "threshold-name"}
{

    yang_name = "threshold-array"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_name.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_name.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_name.is_set || is_set(threshold_name.yfilter)) leaf_name_data.push_back(threshold_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-name")
    {
        threshold_name = value;
        threshold_name.value_namespace = name_space;
        threshold_name.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-name")
    {
        threshold_name.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-name")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::InvAssetBag()
    :
    part_number{YType::str, "part-number"},
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"}
{

    yang_name = "inv-asset-bag"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::has_data() const
{
    return part_number.is_set
	|| manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| original_equipment_manufacturer_string.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_number.yfilter)
	|| ydk::is_set(manufacturer_assembly_revision.yfilter)
	|| ydk::is_set(manufacturer_firmware_identifier.yfilter)
	|| ydk::is_set(manufacturer_software_identifier.yfilter)
	|| ydk::is_set(manufacturer_common_language_equipment_identifier.yfilter)
	|| ydk::is_set(original_equipment_manufacturer_string.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.yfilter)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.yfilter)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.yfilter)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.yfilter)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.yfilter)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.yfilter)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
        manufacturer_assembly_number.value_namespace = name_space;
        manufacturer_assembly_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
        manufacturer_assembly_revision.value_namespace = name_space;
        manufacturer_assembly_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
        manufacturer_firmware_identifier.value_namespace = name_space;
        manufacturer_firmware_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
        manufacturer_software_identifier.value_namespace = name_space;
        manufacturer_software_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
        manufacturer_common_language_equipment_identifier.value_namespace = name_space;
        manufacturer_common_language_equipment_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
        original_equipment_manufacturer_string.value_namespace = name_space;
        original_equipment_manufacturer_string.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision.yfilter = yfilter;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier.yfilter = yfilter;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier.yfilter = yfilter;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::InvAssetBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "part-number" || name == "manufacturer-assembly-number" || name == "manufacturer-assembly-revision" || name == "manufacturer-firmware-identifier" || name == "manufacturer-software-identifier" || name == "manufacturer-common-language-equipment-identifier" || name == "original-equipment-manufacturer-string")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::Threshold()
    :
    major_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo>())
	,critical_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo>())
{
    major_lo->parent = this;
    critical_hi->parent = this;
    minor_hi->parent = this;
    major_hi->parent = this;
    critical_lo->parent = this;
    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::has_data() const
{
    return (major_lo !=  nullptr && major_lo->has_data())
	|| (critical_hi !=  nullptr && critical_hi->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-lo" || name == "critical-hi" || name == "minor-hi" || name == "major-hi" || name == "critical-lo" || name == "minor-lo")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "major-hi"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MajorHi::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "critical-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::CriticalLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(yfilter)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-bag")
        return true;
    return false;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "thresh-bag"; yang_parent_name = "minor-lo"; is_top_level_class = false; has_list_ancestor = true;
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Tsi6S::Tsi6::Tsi7S::Tsi7::Tsi8S::Tsi8::Tsi9S::Tsi9::Tsi10S::Tsi10::Tsi11S::Tsi11::Attributes::Threshold::MinorLo::ThreshBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}


}
}

