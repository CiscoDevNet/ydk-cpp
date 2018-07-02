
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_infra_clock_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_infra_clock_cfg {

Clock::Clock()
    :
    summer_time(nullptr) // presence node
    , time_zone(nullptr) // presence node
{

    yang_name = "clock"; yang_parent_name = "Cisco-IOS-XR-infra-infra-clock-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Clock::~Clock()
{
}

bool Clock::has_data() const
{
    if (is_presence_container) return true;
    return (summer_time !=  nullptr && summer_time->has_data())
	|| (time_zone !=  nullptr && time_zone->has_data());
}

bool Clock::has_operation() const
{
    return is_set(yfilter)
	|| (summer_time !=  nullptr && summer_time->has_operation())
	|| (time_zone !=  nullptr && time_zone->has_operation());
}

std::string Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-cfg:clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summer-time")
    {
        if(summer_time == nullptr)
        {
            summer_time = std::make_shared<Clock::SummerTime>();
        }
        return summer_time;
    }

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
    if(summer_time != nullptr)
    {
        children["summer-time"] = summer_time;
    }

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
    if(name == "summer-time" || name == "time-zone")
        return true;
    return false;
}

Clock::SummerTime::SummerTime()
    :
    time_zone_name{YType::str, "time-zone-name"},
    mode{YType::enumeration, "mode"},
    start_week_number_or_start_date{YType::uint32, "start-week-number-or-start-date"},
    start_weekday_or_start_year{YType::uint32, "start-weekday-or-start-year"},
    start_month{YType::enumeration, "start-month"},
    start_hour{YType::uint32, "start-hour"},
    start_minute{YType::uint32, "start-minute"},
    end_week_number_or_end_date{YType::uint32, "end-week-number-or-end-date"},
    end_weekday_or_end_year{YType::uint32, "end-weekday-or-end-year"},
    end_month{YType::enumeration, "end-month"},
    end_hour{YType::uint32, "end-hour"},
    end_minute{YType::uint32, "end-minute"},
    offset{YType::uint32, "offset"}
{

    yang_name = "summer-time"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Clock::SummerTime::~SummerTime()
{
}

bool Clock::SummerTime::has_data() const
{
    if (is_presence_container) return true;
    return time_zone_name.is_set
	|| mode.is_set
	|| start_week_number_or_start_date.is_set
	|| start_weekday_or_start_year.is_set
	|| start_month.is_set
	|| start_hour.is_set
	|| start_minute.is_set
	|| end_week_number_or_end_date.is_set
	|| end_weekday_or_end_year.is_set
	|| end_month.is_set
	|| end_hour.is_set
	|| end_minute.is_set
	|| offset.is_set;
}

bool Clock::SummerTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_zone_name.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(start_week_number_or_start_date.yfilter)
	|| ydk::is_set(start_weekday_or_start_year.yfilter)
	|| ydk::is_set(start_month.yfilter)
	|| ydk::is_set(start_hour.yfilter)
	|| ydk::is_set(start_minute.yfilter)
	|| ydk::is_set(end_week_number_or_end_date.yfilter)
	|| ydk::is_set(end_weekday_or_end_year.yfilter)
	|| ydk::is_set(end_month.yfilter)
	|| ydk::is_set(end_hour.yfilter)
	|| ydk::is_set(end_minute.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Clock::SummerTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-cfg:clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Clock::SummerTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summer-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clock::SummerTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_zone_name.is_set || is_set(time_zone_name.yfilter)) leaf_name_data.push_back(time_zone_name.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (start_week_number_or_start_date.is_set || is_set(start_week_number_or_start_date.yfilter)) leaf_name_data.push_back(start_week_number_or_start_date.get_name_leafdata());
    if (start_weekday_or_start_year.is_set || is_set(start_weekday_or_start_year.yfilter)) leaf_name_data.push_back(start_weekday_or_start_year.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.yfilter)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_hour.is_set || is_set(start_hour.yfilter)) leaf_name_data.push_back(start_hour.get_name_leafdata());
    if (start_minute.is_set || is_set(start_minute.yfilter)) leaf_name_data.push_back(start_minute.get_name_leafdata());
    if (end_week_number_or_end_date.is_set || is_set(end_week_number_or_end_date.yfilter)) leaf_name_data.push_back(end_week_number_or_end_date.get_name_leafdata());
    if (end_weekday_or_end_year.is_set || is_set(end_weekday_or_end_year.yfilter)) leaf_name_data.push_back(end_weekday_or_end_year.get_name_leafdata());
    if (end_month.is_set || is_set(end_month.yfilter)) leaf_name_data.push_back(end_month.get_name_leafdata());
    if (end_hour.is_set || is_set(end_hour.yfilter)) leaf_name_data.push_back(end_hour.get_name_leafdata());
    if (end_minute.is_set || is_set(end_minute.yfilter)) leaf_name_data.push_back(end_minute.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clock::SummerTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clock::SummerTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clock::SummerTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-zone-name")
    {
        time_zone_name = value;
        time_zone_name.value_namespace = name_space;
        time_zone_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-week-number-or-start-date")
    {
        start_week_number_or_start_date = value;
        start_week_number_or_start_date.value_namespace = name_space;
        start_week_number_or_start_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-weekday-or-start-year")
    {
        start_weekday_or_start_year = value;
        start_weekday_or_start_year.value_namespace = name_space;
        start_weekday_or_start_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-month")
    {
        start_month = value;
        start_month.value_namespace = name_space;
        start_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-hour")
    {
        start_hour = value;
        start_hour.value_namespace = name_space;
        start_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-minute")
    {
        start_minute = value;
        start_minute.value_namespace = name_space;
        start_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-week-number-or-end-date")
    {
        end_week_number_or_end_date = value;
        end_week_number_or_end_date.value_namespace = name_space;
        end_week_number_or_end_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-weekday-or-end-year")
    {
        end_weekday_or_end_year = value;
        end_weekday_or_end_year.value_namespace = name_space;
        end_weekday_or_end_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-month")
    {
        end_month = value;
        end_month.value_namespace = name_space;
        end_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-hour")
    {
        end_hour = value;
        end_hour.value_namespace = name_space;
        end_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-minute")
    {
        end_minute = value;
        end_minute.value_namespace = name_space;
        end_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Clock::SummerTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-zone-name")
    {
        time_zone_name.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "start-week-number-or-start-date")
    {
        start_week_number_or_start_date.yfilter = yfilter;
    }
    if(value_path == "start-weekday-or-start-year")
    {
        start_weekday_or_start_year.yfilter = yfilter;
    }
    if(value_path == "start-month")
    {
        start_month.yfilter = yfilter;
    }
    if(value_path == "start-hour")
    {
        start_hour.yfilter = yfilter;
    }
    if(value_path == "start-minute")
    {
        start_minute.yfilter = yfilter;
    }
    if(value_path == "end-week-number-or-end-date")
    {
        end_week_number_or_end_date.yfilter = yfilter;
    }
    if(value_path == "end-weekday-or-end-year")
    {
        end_weekday_or_end_year.yfilter = yfilter;
    }
    if(value_path == "end-month")
    {
        end_month.yfilter = yfilter;
    }
    if(value_path == "end-hour")
    {
        end_hour.yfilter = yfilter;
    }
    if(value_path == "end-minute")
    {
        end_minute.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Clock::SummerTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-zone-name" || name == "mode" || name == "start-week-number-or-start-date" || name == "start-weekday-or-start-year" || name == "start-month" || name == "start-hour" || name == "start-minute" || name == "end-week-number-or-end-date" || name == "end-weekday-or-end-year" || name == "end-month" || name == "end-hour" || name == "end-minute" || name == "offset")
        return true;
    return false;
}

Clock::TimeZone::TimeZone()
    :
    time_zone_name{YType::str, "time-zone-name"},
    hour_offset{YType::int32, "hour-offset"},
    minute_offset{YType::uint32, "minute-offset"}
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
	|| hour_offset.is_set
	|| minute_offset.is_set;
}

bool Clock::TimeZone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_zone_name.yfilter)
	|| ydk::is_set(hour_offset.yfilter)
	|| ydk::is_set(minute_offset.yfilter);
}

std::string Clock::TimeZone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-cfg:clock/" << get_segment_path();
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
    if (hour_offset.is_set || is_set(hour_offset.yfilter)) leaf_name_data.push_back(hour_offset.get_name_leafdata());
    if (minute_offset.is_set || is_set(minute_offset.yfilter)) leaf_name_data.push_back(minute_offset.get_name_leafdata());

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
    if(value_path == "hour-offset")
    {
        hour_offset = value;
        hour_offset.value_namespace = name_space;
        hour_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-offset")
    {
        minute_offset = value;
        minute_offset.value_namespace = name_space;
        minute_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Clock::TimeZone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-zone-name")
    {
        time_zone_name.yfilter = yfilter;
    }
    if(value_path == "hour-offset")
    {
        hour_offset.yfilter = yfilter;
    }
    if(value_path == "minute-offset")
    {
        minute_offset.yfilter = yfilter;
    }
}

bool Clock::TimeZone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-zone-name" || name == "hour-offset" || name == "minute-offset")
        return true;
    return false;
}

const Enum::YLeaf ClockMonth::january {0, "january"};
const Enum::YLeaf ClockMonth::february {1, "february"};
const Enum::YLeaf ClockMonth::march {2, "march"};
const Enum::YLeaf ClockMonth::april {3, "april"};
const Enum::YLeaf ClockMonth::may {4, "may"};
const Enum::YLeaf ClockMonth::june {5, "june"};
const Enum::YLeaf ClockMonth::july {6, "july"};
const Enum::YLeaf ClockMonth::august {7, "august"};
const Enum::YLeaf ClockMonth::september {8, "september"};
const Enum::YLeaf ClockMonth::october {9, "october"};
const Enum::YLeaf ClockMonth::november {10, "november"};
const Enum::YLeaf ClockMonth::december {11, "december"};

const Enum::YLeaf ClockSummerTimeMode::recurring {0, "recurring"};
const Enum::YLeaf ClockSummerTimeMode::date {1, "date"};


}
}

