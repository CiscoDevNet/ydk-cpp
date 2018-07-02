
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_shellutil_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_shellutil_oper {

SystemTime::SystemTime()
    :
    clock_(std::make_shared<SystemTime::Clock>())
    , uptime(std::make_shared<SystemTime::Uptime>())
{
    clock_->parent = this;
    uptime->parent = this;

    yang_name = "system-time"; yang_parent_name = "Cisco-IOS-XR-shellutil-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SystemTime::~SystemTime()
{
}

bool SystemTime::has_data() const
{
    if (is_presence_container) return true;
    return (clock_ !=  nullptr && clock_->has_data())
	|| (uptime !=  nullptr && uptime->has_data());
}

bool SystemTime::has_operation() const
{
    return is_set(yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (uptime !=  nullptr && uptime->has_operation());
}

std::string SystemTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-oper:system-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SystemTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<SystemTime::Clock>();
        }
        return clock_;
    }

    if(child_yang_name == "uptime")
    {
        if(uptime == nullptr)
        {
            uptime = std::make_shared<SystemTime::Uptime>();
        }
        return uptime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    if(uptime != nullptr)
    {
        children["uptime"] = uptime;
    }

    return children;
}

void SystemTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemTime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SystemTime::clone_ptr() const
{
    return std::make_shared<SystemTime>();
}

std::string SystemTime::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SystemTime::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SystemTime::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SystemTime::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SystemTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "uptime")
        return true;
    return false;
}

SystemTime::Clock::Clock()
    :
    year{YType::uint16, "year"},
    month{YType::uint8, "month"},
    day{YType::uint8, "day"},
    hour{YType::uint8, "hour"},
    minute{YType::uint8, "minute"},
    second{YType::uint8, "second"},
    millisecond{YType::uint16, "millisecond"},
    wday{YType::uint16, "wday"},
    time_zone{YType::str, "time-zone"},
    time_source{YType::enumeration, "time-source"}
{

    yang_name = "clock"; yang_parent_name = "system-time"; is_top_level_class = false; has_list_ancestor = false; 
}

SystemTime::Clock::~Clock()
{
}

bool SystemTime::Clock::has_data() const
{
    if (is_presence_container) return true;
    return year.is_set
	|| month.is_set
	|| day.is_set
	|| hour.is_set
	|| minute.is_set
	|| second.is_set
	|| millisecond.is_set
	|| wday.is_set
	|| time_zone.is_set
	|| time_source.is_set;
}

bool SystemTime::Clock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minute.yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(millisecond.yfilter)
	|| ydk::is_set(wday.yfilter)
	|| ydk::is_set(time_zone.yfilter)
	|| ydk::is_set(time_source.yfilter);
}

std::string SystemTime::Clock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-oper:system-time/" << get_segment_path();
    return path_buffer.str();
}

std::string SystemTime::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemTime::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minute.is_set || is_set(minute.yfilter)) leaf_name_data.push_back(minute.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (millisecond.is_set || is_set(millisecond.yfilter)) leaf_name_data.push_back(millisecond.get_name_leafdata());
    if (wday.is_set || is_set(wday.yfilter)) leaf_name_data.push_back(wday.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.yfilter)) leaf_name_data.push_back(time_zone.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SystemTime::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemTime::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SystemTime::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute")
    {
        minute = value;
        minute.value_namespace = name_space;
        minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "millisecond")
    {
        millisecond = value;
        millisecond.value_namespace = name_space;
        millisecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wday")
    {
        wday = value;
        wday.value_namespace = name_space;
        wday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
        time_zone.value_namespace = name_space;
        time_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
}

void SystemTime::Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minute")
    {
        minute.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "millisecond")
    {
        millisecond.yfilter = yfilter;
    }
    if(value_path == "wday")
    {
        wday.yfilter = yfilter;
    }
    if(value_path == "time-zone")
    {
        time_zone.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
}

bool SystemTime::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "year" || name == "month" || name == "day" || name == "hour" || name == "minute" || name == "second" || name == "millisecond" || name == "wday" || name == "time-zone" || name == "time-source")
        return true;
    return false;
}

SystemTime::Uptime::Uptime()
    :
    host_name{YType::str, "host-name"},
    uptime{YType::uint32, "uptime"}
{

    yang_name = "uptime"; yang_parent_name = "system-time"; is_top_level_class = false; has_list_ancestor = false; 
}

SystemTime::Uptime::~Uptime()
{
}

bool SystemTime::Uptime::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| uptime.is_set;
}

bool SystemTime::Uptime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string SystemTime::Uptime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-oper:system-time/" << get_segment_path();
    return path_buffer.str();
}

std::string SystemTime::Uptime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemTime::Uptime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SystemTime::Uptime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemTime::Uptime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SystemTime::Uptime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void SystemTime::Uptime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool SystemTime::Uptime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "uptime")
        return true;
    return false;
}

const Enum::YLeaf TimeSource::error {0, "error"};
const Enum::YLeaf TimeSource::none {1, "none"};
const Enum::YLeaf TimeSource::ntp {2, "ntp"};
const Enum::YLeaf TimeSource::manual {3, "manual"};
const Enum::YLeaf TimeSource::calendar {4, "calendar"};


}
}

