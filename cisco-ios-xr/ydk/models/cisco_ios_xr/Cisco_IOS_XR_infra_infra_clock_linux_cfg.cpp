
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_infra_clock_linux_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_infra_clock_linux_cfg {

Clock_::Clock_()
    :
    time_zone(nullptr) // presence node
{

    yang_name = "clock"; yang_parent_name = "Cisco-IOS-XR-infra-infra-clock-linux-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Clock_::~Clock_()
{
}

bool Clock_::has_data() const
{
    return (time_zone !=  nullptr && time_zone->has_data());
}

bool Clock_::has_operation() const
{
    return is_set(yfilter)
	|| (time_zone !=  nullptr && time_zone->has_operation());
}

std::string Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-linux-cfg:clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time-zone")
    {
        if(time_zone == nullptr)
        {
            time_zone = std::make_shared<Clock_::TimeZone>();
        }
        return time_zone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time_zone != nullptr)
    {
        children["time-zone"] = time_zone;
    }

    return children;
}

void Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Clock_::clone_ptr() const
{
    return std::make_shared<Clock_>();
}

std::string Clock_::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Clock_::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Clock_::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Clock_::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-zone")
        return true;
    return false;
}

Clock_::TimeZone::TimeZone()
    :
    area_name{YType::str, "area-name"},
    time_zone_name{YType::str, "time-zone-name"}
{

    yang_name = "time-zone"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false;
}

Clock_::TimeZone::~TimeZone()
{
}

bool Clock_::TimeZone::has_data() const
{
    return area_name.is_set
	|| time_zone_name.is_set;
}

bool Clock_::TimeZone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_name.yfilter)
	|| ydk::is_set(time_zone_name.yfilter);
}

std::string Clock_::TimeZone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-linux-cfg:clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Clock_::TimeZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-zone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clock_::TimeZone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_name.is_set || is_set(area_name.yfilter)) leaf_name_data.push_back(area_name.get_name_leafdata());
    if (time_zone_name.is_set || is_set(time_zone_name.yfilter)) leaf_name_data.push_back(time_zone_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clock_::TimeZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clock_::TimeZone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Clock_::TimeZone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-name")
    {
        area_name = value;
        area_name.value_namespace = name_space;
        area_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-zone-name")
    {
        time_zone_name = value;
        time_zone_name.value_namespace = name_space;
        time_zone_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clock_::TimeZone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-name")
    {
        area_name.yfilter = yfilter;
    }
    if(value_path == "time-zone-name")
    {
        time_zone_name.yfilter = yfilter;
    }
}

bool Clock_::TimeZone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-name" || name == "time-zone-name")
        return true;
    return false;
}


}
}

