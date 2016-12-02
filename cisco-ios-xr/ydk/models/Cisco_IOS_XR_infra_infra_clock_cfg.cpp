
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_infra_clock_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_infra_clock_cfg {

Clock::SummerTime::SummerTime()
    :
    	end_hour{YType::uint32, "end-hour"},
	 end_minute{YType::uint32, "end-minute"},
	 end_month{YType::enumeration, "end-month"},
	 end_week_number_or_end_date{YType::uint32, "end-week-number-or-end-date"},
	 end_weekday_or_end_year{YType::uint32, "end-weekday-or-end-year"},
	 mode{YType::enumeration, "mode"},
	 offset{YType::uint32, "offset"},
	 start_hour{YType::uint32, "start-hour"},
	 start_minute{YType::uint32, "start-minute"},
	 start_month{YType::enumeration, "start-month"},
	 start_week_number_or_start_date{YType::uint32, "start-week-number-or-start-date"},
	 start_weekday_or_start_year{YType::uint32, "start-weekday-or-start-year"},
	 time_zone_name{YType::str, "time-zone-name"}
{
    yang_name = "summer-time"; yang_parent_name = "clock";
}

Clock::SummerTime::~SummerTime()
{
}

bool Clock::SummerTime::has_data() const
{
    return end_hour.is_set
	|| end_minute.is_set
	|| end_month.is_set
	|| end_week_number_or_end_date.is_set
	|| end_weekday_or_end_year.is_set
	|| mode.is_set
	|| offset.is_set
	|| start_hour.is_set
	|| start_minute.is_set
	|| start_month.is_set
	|| start_week_number_or_start_date.is_set
	|| start_weekday_or_start_year.is_set
	|| time_zone_name.is_set;
}

bool Clock::SummerTime::has_operation() const
{
    return is_set(operation)
	|| is_set(end_hour.operation)
	|| is_set(end_minute.operation)
	|| is_set(end_month.operation)
	|| is_set(end_week_number_or_end_date.operation)
	|| is_set(end_weekday_or_end_year.operation)
	|| is_set(mode.operation)
	|| is_set(offset.operation)
	|| is_set(start_hour.operation)
	|| is_set(start_minute.operation)
	|| is_set(start_month.operation)
	|| is_set(start_week_number_or_start_date.operation)
	|| is_set(start_weekday_or_start_year.operation)
	|| is_set(time_zone_name.operation);
}

std::string Clock::SummerTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summer-time";

    return path_buffer.str();

}

EntityPath Clock::SummerTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-infra-clock-cfg:clock/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_hour.is_set || is_set(end_hour.operation)) leaf_name_data.push_back(end_hour.get_name_leafdata());
    if (end_minute.is_set || is_set(end_minute.operation)) leaf_name_data.push_back(end_minute.get_name_leafdata());
    if (end_month.is_set || is_set(end_month.operation)) leaf_name_data.push_back(end_month.get_name_leafdata());
    if (end_week_number_or_end_date.is_set || is_set(end_week_number_or_end_date.operation)) leaf_name_data.push_back(end_week_number_or_end_date.get_name_leafdata());
    if (end_weekday_or_end_year.is_set || is_set(end_weekday_or_end_year.operation)) leaf_name_data.push_back(end_weekday_or_end_year.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (start_hour.is_set || is_set(start_hour.operation)) leaf_name_data.push_back(start_hour.get_name_leafdata());
    if (start_minute.is_set || is_set(start_minute.operation)) leaf_name_data.push_back(start_minute.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.operation)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_week_number_or_start_date.is_set || is_set(start_week_number_or_start_date.operation)) leaf_name_data.push_back(start_week_number_or_start_date.get_name_leafdata());
    if (start_weekday_or_start_year.is_set || is_set(start_weekday_or_start_year.operation)) leaf_name_data.push_back(start_weekday_or_start_year.get_name_leafdata());
    if (time_zone_name.is_set || is_set(time_zone_name.operation)) leaf_name_data.push_back(time_zone_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Clock::SummerTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Clock::SummerTime::get_children()
{
    return children;
}

void Clock::SummerTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-hour")
    {
        end_hour = value;
    }
    if(value_path == "end-minute")
    {
        end_minute = value;
    }
    if(value_path == "end-month")
    {
        end_month = value;
    }
    if(value_path == "end-week-number-or-end-date")
    {
        end_week_number_or_end_date = value;
    }
    if(value_path == "end-weekday-or-end-year")
    {
        end_weekday_or_end_year = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "start-hour")
    {
        start_hour = value;
    }
    if(value_path == "start-minute")
    {
        start_minute = value;
    }
    if(value_path == "start-month")
    {
        start_month = value;
    }
    if(value_path == "start-week-number-or-start-date")
    {
        start_week_number_or_start_date = value;
    }
    if(value_path == "start-weekday-or-start-year")
    {
        start_weekday_or_start_year = value;
    }
    if(value_path == "time-zone-name")
    {
        time_zone_name = value;
    }
}

Clock::TimeZone::TimeZone()
    :
    	hour_offset{YType::int32, "hour-offset"},
	 minute_offset{YType::uint32, "minute-offset"},
	 time_zone_name{YType::str, "time-zone-name"}
{
    yang_name = "time-zone"; yang_parent_name = "clock";
}

Clock::TimeZone::~TimeZone()
{
}

bool Clock::TimeZone::has_data() const
{
    return hour_offset.is_set
	|| minute_offset.is_set
	|| time_zone_name.is_set;
}

bool Clock::TimeZone::has_operation() const
{
    return is_set(operation)
	|| is_set(hour_offset.operation)
	|| is_set(minute_offset.operation)
	|| is_set(time_zone_name.operation);
}

std::string Clock::TimeZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-zone";

    return path_buffer.str();

}

EntityPath Clock::TimeZone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-infra-clock-cfg:clock/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hour_offset.is_set || is_set(hour_offset.operation)) leaf_name_data.push_back(hour_offset.get_name_leafdata());
    if (minute_offset.is_set || is_set(minute_offset.operation)) leaf_name_data.push_back(minute_offset.get_name_leafdata());
    if (time_zone_name.is_set || is_set(time_zone_name.operation)) leaf_name_data.push_back(time_zone_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Clock::TimeZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Clock::TimeZone::get_children()
{
    return children;
}

void Clock::TimeZone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hour-offset")
    {
        hour_offset = value;
    }
    if(value_path == "minute-offset")
    {
        minute_offset = value;
    }
    if(value_path == "time-zone-name")
    {
        time_zone_name = value;
    }
}

Clock::Clock()
    :
    summer_time(nullptr) // presence node
	,time_zone(nullptr) // presence node
{
    yang_name = "clock"; yang_parent_name = "Cisco-IOS-XR-infra-infra-clock-cfg";
}

Clock::~Clock()
{
}

bool Clock::has_data() const
{
    return (summer_time !=  nullptr && summer_time->has_data())
	|| (time_zone !=  nullptr && time_zone->has_data());
}

bool Clock::has_operation() const
{
    return is_set(operation)
	|| (summer_time !=  nullptr && is_set(summer_time->operation))
	|| (time_zone !=  nullptr && is_set(time_zone->operation));
}

std::string Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-cfg:clock";

    return path_buffer.str();

}

EntityPath Clock::get_entity_path(Entity* ancestor) const
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

Entity* Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summer-time")
    {
        if(summer_time != nullptr)
        {
            children["summer-time"] = summer_time.get();
        }
        else
        {
            summer_time = std::make_unique<Clock::SummerTime>();
            summer_time->parent = this;
            children["summer-time"] = summer_time.get();
        }
        return children.at("summer-time");
    }

    if(child_yang_name == "time-zone")
    {
        if(time_zone != nullptr)
        {
            children["time-zone"] = time_zone.get();
        }
        else
        {
            time_zone = std::make_unique<Clock::TimeZone>();
            time_zone->parent = this;
            children["time-zone"] = time_zone.get();
        }
        return children.at("time-zone");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Clock::get_children()
{
    if(children.find("summer-time") == children.end())
    {
        if(summer_time != nullptr)
        {
            children["summer-time"] = summer_time.get();
        }
    }

    if(children.find("time-zone") == children.end())
    {
        if(time_zone != nullptr)
        {
            children["time-zone"] = time_zone.get();
        }
    }

    return children;
}

void Clock::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Clock::clone_ptr()
{
    return std::make_unique<Clock>();
}

const Enum::Value ClockMonthEnum::january {0, "january"};
const Enum::Value ClockMonthEnum::february {1, "february"};
const Enum::Value ClockMonthEnum::march {2, "march"};
const Enum::Value ClockMonthEnum::april {3, "april"};
const Enum::Value ClockMonthEnum::may {4, "may"};
const Enum::Value ClockMonthEnum::june {5, "june"};
const Enum::Value ClockMonthEnum::july {6, "july"};
const Enum::Value ClockMonthEnum::august {7, "august"};
const Enum::Value ClockMonthEnum::september {8, "september"};
const Enum::Value ClockMonthEnum::october {9, "october"};
const Enum::Value ClockMonthEnum::november {10, "november"};
const Enum::Value ClockMonthEnum::december {11, "december"};

const Enum::Value ClockSummerTimeModeEnum::recurring {0, "recurring"};
const Enum::Value ClockSummerTimeModeEnum::date {1, "date"};


}
}

