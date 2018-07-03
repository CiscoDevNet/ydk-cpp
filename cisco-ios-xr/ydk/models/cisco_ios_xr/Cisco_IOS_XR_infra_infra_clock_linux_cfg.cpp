
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_infra_clock_linux_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_infra_clock_linux_cfg {

Clock::Clock()
    :
    time_zone(nullptr) // presence node
{

    yang_name = "clock"; yang_parent_name = "Cisco-IOS-XR-infra-infra-clock-linux-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Clock::~Clock()
{
}

bool Clock::has_data() const
{
    if (is_presence_container) return true;
    return (time_zone !=  nullptr && time_zone->has_data());
}

bool Clock::has_operation() const
{
    return is_set(yfilter)
	|| (time_zone !=  nullptr && time_zone->has_operation());
}

std::string Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-linux-cfg:clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time-zone")
    {
        if(time_zone == nullptr)
        {
            time_zone = std::make_shared<Clock::TimeZone>();
        }
        return time_zone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(time_zone != nullptr)
    {
        children["time-zone"] = time_zone;
    }

    return children;
}

void Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Clock::clone_ptr() const
{
    return std::make_shared<Clock>();
}

std::string Clock::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Clock::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Clock::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Clock::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-zone")
        return true;
    return false;
}

Clock::TimeZone::TimeZone()
    :
    time_zone_name{YType::str, "time-zone-name"},
    area_name{YType::str, "area-name"}
{

    yang_name = "time-zone"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Clock::TimeZone::~TimeZone()
{
}

bool Clock::TimeZone::has_data() const
{
    if (is_presence_container) return true;
    return time_zone_name.is_set
	|| area_name.is_set;
}

bool Clock::TimeZone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_zone_name.yfilter)
	|| ydk::is_set(area_name.yfilter);
}

std::string Clock::TimeZone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-linux-cfg:clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Clock::TimeZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-zone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clock::TimeZone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_zone_name.is_set || is_set(time_zone_name.yfilter)) leaf_name_data.push_back(time_zone_name.get_name_leafdata());
    if (area_name.is_set || is_set(area_name.yfilter)) leaf_name_data.push_back(area_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clock::TimeZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clock::TimeZone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clock::TimeZone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-zone-name")
    {
        time_zone_name = value;
        time_zone_name.value_namespace = name_space;
        time_zone_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-name")
    {
        area_name = value;
        area_name.value_namespace = name_space;
        area_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clock::TimeZone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-zone-name")
    {
        time_zone_name.yfilter = yfilter;
    }
    if(value_path == "area-name")
    {
        area_name.yfilter = yfilter;
    }
}

bool Clock::TimeZone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-zone-name" || name == "area-name")
        return true;
    return false;
}


}
}

