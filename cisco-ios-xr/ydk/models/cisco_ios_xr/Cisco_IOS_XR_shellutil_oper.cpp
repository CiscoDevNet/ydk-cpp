
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_shellutil_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_shellutil_oper {

SystemTime::SystemTime()
    :
    clock(std::make_shared<SystemTime::Clock>())
	,uptime(std::make_shared<SystemTime::Uptime>())
{
    clock->parent = this;
    children["clock"] = clock;

    uptime->parent = this;
    children["uptime"] = uptime;

    yang_name = "system-time"; yang_parent_name = "Cisco-IOS-XR-shellutil-oper";
}

SystemTime::~SystemTime()
{
}

bool SystemTime::has_data() const
{
    return (clock !=  nullptr && clock->has_data())
	|| (uptime !=  nullptr && uptime->has_data());
}

bool SystemTime::has_operation() const
{
    return is_set(operation)
	|| (clock !=  nullptr && clock->has_operation())
	|| (uptime !=  nullptr && uptime->has_operation());
}

std::string SystemTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-oper:system-time";

    return path_buffer.str();

}

EntityPath SystemTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SystemTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clock")
    {
        if(clock != nullptr)
        {
            children["clock"] = clock;
        }
        else
        {
            clock = std::make_shared<SystemTime::Clock>();
            clock->parent = this;
            children["clock"] = clock;
        }
        return children.at("clock");
    }

    if(child_yang_name == "uptime")
    {
        if(uptime != nullptr)
        {
            children["uptime"] = uptime;
        }
        else
        {
            uptime = std::make_shared<SystemTime::Uptime>();
            uptime->parent = this;
            children["uptime"] = uptime;
        }
        return children.at("uptime");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SystemTime::get_children()
{
    if(children.find("clock") == children.end())
    {
        if(clock != nullptr)
        {
            children["clock"] = clock;
        }
    }

    if(children.find("uptime") == children.end())
    {
        if(uptime != nullptr)
        {
            children["uptime"] = uptime;
        }
    }

    return children;
}

void SystemTime::set_value(const std::string & value_path, std::string value)
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

SystemTime::Clock::Clock()
    :
    day{YType::uint8, "day"},
    hour{YType::uint8, "hour"},
    millisecond{YType::uint16, "millisecond"},
    minute{YType::uint8, "minute"},
    month{YType::uint8, "month"},
    second{YType::uint8, "second"},
    time_source{YType::enumeration, "time-source"},
    time_zone{YType::str, "time-zone"},
    wday{YType::uint16, "wday"},
    year{YType::uint16, "year"}
{
    yang_name = "clock"; yang_parent_name = "system-time";
}

SystemTime::Clock::~Clock()
{
}

bool SystemTime::Clock::has_data() const
{
    return day.is_set
	|| hour.is_set
	|| millisecond.is_set
	|| minute.is_set
	|| month.is_set
	|| second.is_set
	|| time_source.is_set
	|| time_zone.is_set
	|| wday.is_set
	|| year.is_set;
}

bool SystemTime::Clock::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hour.operation)
	|| is_set(millisecond.operation)
	|| is_set(minute.operation)
	|| is_set(month.operation)
	|| is_set(second.operation)
	|| is_set(time_source.operation)
	|| is_set(time_zone.operation)
	|| is_set(wday.operation)
	|| is_set(year.operation);
}

std::string SystemTime::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";

    return path_buffer.str();

}

EntityPath SystemTime::Clock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-shellutil-oper:system-time/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hour.is_set || is_set(hour.operation)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (millisecond.is_set || is_set(millisecond.operation)) leaf_name_data.push_back(millisecond.get_name_leafdata());
    if (minute.is_set || is_set(minute.operation)) leaf_name_data.push_back(minute.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.operation)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.operation)) leaf_name_data.push_back(time_zone.get_name_leafdata());
    if (wday.is_set || is_set(wday.operation)) leaf_name_data.push_back(wday.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SystemTime::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SystemTime::Clock::get_children()
{
    return children;
}

void SystemTime::Clock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hour")
    {
        hour = value;
    }
    if(value_path == "millisecond")
    {
        millisecond = value;
    }
    if(value_path == "minute")
    {
        minute = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
    if(value_path == "time-source")
    {
        time_source = value;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
    }
    if(value_path == "wday")
    {
        wday = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

SystemTime::Uptime::Uptime()
    :
    host_name{YType::str, "host-name"},
    uptime{YType::uint32, "uptime"}
{
    yang_name = "uptime"; yang_parent_name = "system-time";
}

SystemTime::Uptime::~Uptime()
{
}

bool SystemTime::Uptime::has_data() const
{
    return host_name.is_set
	|| uptime.is_set;
}

bool SystemTime::Uptime::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(uptime.operation);
}

std::string SystemTime::Uptime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime";

    return path_buffer.str();

}

EntityPath SystemTime::Uptime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-shellutil-oper:system-time/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SystemTime::Uptime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SystemTime::Uptime::get_children()
{
    return children;
}

void SystemTime::Uptime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

const Enum::YLeaf TimeSourceEnum::error {0, "error"};
const Enum::YLeaf TimeSourceEnum::none {1, "none"};
const Enum::YLeaf TimeSourceEnum::ntp {2, "ntp"};
const Enum::YLeaf TimeSourceEnum::manual {3, "manual"};
const Enum::YLeaf TimeSourceEnum::calendar {4, "calendar"};


}
}

