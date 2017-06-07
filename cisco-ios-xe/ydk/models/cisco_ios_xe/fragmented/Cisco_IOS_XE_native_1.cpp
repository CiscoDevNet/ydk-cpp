
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_1.hpp"
#include "Cisco_IOS_XE_native_2.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Service::Timestamps::Log::Datetime::Localtime::Year::Year()
    :
    msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "year"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Year::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Year::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::Year::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::Msec()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "msec"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::Year::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::ShowTimezone()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "show-timezone"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::Year::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Msec::Msec()
    :
    localtime(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "msec"; yang_parent_name = "datetime";
}

Native::Service::Timestamps::Log::Datetime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Msec::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Localtime()
    :
    show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "localtime"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Localtime::has_data() const
{
    return (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Localtime::has_operation() const
{
    return is_set(operation)
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::Localtime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::ShowTimezone()
    :
    year{YType::empty, "year"}
{
    yang_name = "show-timezone"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::Localtime::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::Year()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "year"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::Localtime::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::ShowTimezone()
    :
    localtime(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "show-timezone"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::Localtime()
    :
    year{YType::empty, "year"}
{
    yang_name = "localtime"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::Year()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "year"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::ShowTimezone::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Msec::Year::Year()
    :
    localtime(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "year"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Year::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Year::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::Year::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::Localtime()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "localtime"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::Year::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "show-timezone"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/msec/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Msec::Year::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::ShowTimezone()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "show-timezone"; yang_parent_name = "datetime";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Localtime()
    :
    msec(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "localtime"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::Msec()
    :
    year{YType::empty, "year"}
{
    yang_name = "msec"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::Year()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "year"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Localtime::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Msec()
    :
    localtime(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "msec"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::Localtime()
    :
    year{YType::empty, "year"}
{
    yang_name = "localtime"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::Year()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "year"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Msec::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Year()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
{
    yang_name = "year"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec>();
        }
        return msec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::Localtime()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "localtime"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::Msec()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "msec"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/show-timezone/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::ShowTimezone::Year::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Year::Year()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "year"; yang_parent_name = "datetime";
}

Native::Service::Timestamps::Log::Datetime::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Year::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Year::Localtime::Localtime()
    :
    msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "localtime"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::Localtime::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Year::Localtime::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Year::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::Localtime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::Msec()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "msec"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::Localtime::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::ShowTimezone()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "show-timezone"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::Localtime::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Year::Msec::Msec()
    :
    localtime(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "msec"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::Msec::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Year::Msec::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Year::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::Localtime()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "localtime"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::Msec::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "show-timezone"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::Msec::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::ShowTimezone()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
{
    yang_name = "show-timezone"; yang_parent_name = "year";
}

Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec>();
        }
        return msec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::Localtime()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "localtime"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::Msec()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "msec"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/year/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Year::ShowTimezone::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Alignment::Alignment()
    :
    detection{YType::empty, "detection"},
    logging{YType::empty, "logging"}
{
    yang_name = "alignment"; yang_parent_name = "service";
}

Native::Service::Alignment::~Alignment()
{
}

bool Native::Service::Alignment::has_data() const
{
    return detection.is_set
	|| logging.is_set;
}

bool Native::Service::Alignment::has_operation() const
{
    return is_set(operation)
	|| is_set(detection.operation)
	|| is_set(logging.operation);
}

std::string Native::Service::Alignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alignment";

    return path_buffer.str();

}

const EntityPath Native::Service::Alignment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.operation)) leaf_name_data.push_back(detection.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Alignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Alignment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Alignment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection")
    {
        detection = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

Native::Service::Counters::Counters()
    :
    max(std::make_shared<Native::Service::Counters::Max>())
{
    max->parent = this;

    yang_name = "counters"; yang_parent_name = "service";
}

Native::Service::Counters::~Counters()
{
}

bool Native::Service::Counters::has_data() const
{
    return (max !=  nullptr && max->has_data());
}

bool Native::Service::Counters::has_operation() const
{
    return is_set(operation)
	|| (max !=  nullptr && max->has_operation());
}

std::string Native::Service::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath Native::Service::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max")
    {
        if(max == nullptr)
        {
            max = std::make_shared<Native::Service::Counters::Max>();
        }
        return max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max != nullptr)
    {
        children["max"] = max;
    }

    return children;
}

void Native::Service::Counters::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Counters::Max::Max()
    :
    age{YType::uint8, "age"}
{
    yang_name = "max"; yang_parent_name = "counters";
}

Native::Service::Counters::Max::~Max()
{
}

bool Native::Service::Counters::Max::has_data() const
{
    return age.is_set;
}

bool Native::Service::Counters::Max::has_operation() const
{
    return is_set(operation)
	|| is_set(age.operation);
}

std::string Native::Service::Counters::Max::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max";

    return path_buffer.str();

}

const EntityPath Native::Service::Counters::Max::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Counters::Max::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Counters::Max::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Counters::Max::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age")
    {
        age = value;
    }
}

Native::Service::Heartbeat::Heartbeat()
    :
    fatal_count{YType::uint8, "fatal-count"},
    interrupt_interval{YType::uint8, "interrupt-interval"},
    interrupt_max{YType::uint8, "interrupt-max"},
    transmit_interval{YType::uint8, "transmit-interval"},
    warning_timeout{YType::uint8, "warning-timeout"}
{
    yang_name = "heartbeat"; yang_parent_name = "service";
}

Native::Service::Heartbeat::~Heartbeat()
{
}

bool Native::Service::Heartbeat::has_data() const
{
    return fatal_count.is_set
	|| interrupt_interval.is_set
	|| interrupt_max.is_set
	|| transmit_interval.is_set
	|| warning_timeout.is_set;
}

bool Native::Service::Heartbeat::has_operation() const
{
    return is_set(operation)
	|| is_set(fatal_count.operation)
	|| is_set(interrupt_interval.operation)
	|| is_set(interrupt_max.operation)
	|| is_set(transmit_interval.operation)
	|| is_set(warning_timeout.operation);
}

std::string Native::Service::Heartbeat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heartbeat";

    return path_buffer.str();

}

const EntityPath Native::Service::Heartbeat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fatal_count.is_set || is_set(fatal_count.operation)) leaf_name_data.push_back(fatal_count.get_name_leafdata());
    if (interrupt_interval.is_set || is_set(interrupt_interval.operation)) leaf_name_data.push_back(interrupt_interval.get_name_leafdata());
    if (interrupt_max.is_set || is_set(interrupt_max.operation)) leaf_name_data.push_back(interrupt_max.get_name_leafdata());
    if (transmit_interval.is_set || is_set(transmit_interval.operation)) leaf_name_data.push_back(transmit_interval.get_name_leafdata());
    if (warning_timeout.is_set || is_set(warning_timeout.operation)) leaf_name_data.push_back(warning_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Heartbeat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Heartbeat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Heartbeat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fatal-count")
    {
        fatal_count = value;
    }
    if(value_path == "interrupt-interval")
    {
        interrupt_interval = value;
    }
    if(value_path == "interrupt-max")
    {
        interrupt_max = value;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval = value;
    }
    if(value_path == "warning-timeout")
    {
        warning_timeout = value;
    }
}

Native::Service::Prompt::Prompt()
    :
    config{YType::empty, "config"}
{
    yang_name = "prompt"; yang_parent_name = "service";
}

Native::Service::Prompt::~Prompt()
{
}

bool Native::Service::Prompt::has_data() const
{
    return config.is_set;
}

bool Native::Service::Prompt::has_operation() const
{
    return is_set(operation)
	|| is_set(config.operation);
}

std::string Native::Service::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";

    return path_buffer.str();

}

const EntityPath Native::Service::Prompt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Prompt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "config")
    {
        config = value;
    }
}

Native::Platform::Platform()
    :
    atm_cdvt{YType::boolean, "Cisco-IOS-XE-platform:atm-cdvt"},
    bfd_debug_trace{YType::uint8, "Cisco-IOS-XE-platform:bfd-debug-trace"},
    cfm{YType::empty, "Cisco-IOS-XE-platform:cfm"},
    shell{YType::boolean, "Cisco-IOS-XE-platform:shell"},
    tcam_parity_error{YType::enumeration, "Cisco-IOS-XE-platform:tcam-parity-error"}
    	,
    bfd(std::make_shared<Native::Platform::Bfd>())
	,console(nullptr) // presence node
	,enable(std::make_shared<Native::Platform::Enable>())
	,external_alarm(std::make_shared<Native::Platform::ExternalAlarm>())
	,hardware(std::make_shared<Native::Platform::Hardware>())
	,icmp(std::make_shared<Native::Platform::Icmp>())
	,ip_ports(std::make_shared<Native::Platform::IpPorts>())
	,ipsec(std::make_shared<Native::Platform::Ipsec>())
	,l2vpn(std::make_shared<Native::Platform::L2Vpn>())
	,multicast(std::make_shared<Native::Platform::Multicast>())
	,punt_keepalive(nullptr) // presence node
	,punt_policer(std::make_shared<Native::Platform::PuntPolicer>())
	,qos(std::make_shared<Native::Platform::Qos>())
	,reload(std::make_shared<Native::Platform::Reload>())
	,tcam_threshold(std::make_shared<Native::Platform::TcamThreshold>())
	,trace(std::make_shared<Native::Platform::Trace>())
	,urpf(std::make_shared<Native::Platform::Urpf>())
{
    bfd->parent = this;

    enable->parent = this;

    external_alarm->parent = this;

    hardware->parent = this;

    icmp->parent = this;

    ip_ports->parent = this;

    ipsec->parent = this;

    l2vpn->parent = this;

    multicast->parent = this;

    punt_policer->parent = this;

    qos->parent = this;

    reload->parent = this;

    tcam_threshold->parent = this;

    trace->parent = this;

    urpf->parent = this;

    yang_name = "platform"; yang_parent_name = "native";
}

Native::Platform::~Platform()
{
}

bool Native::Platform::has_data() const
{
    return atm_cdvt.is_set
	|| bfd_debug_trace.is_set
	|| cfm.is_set
	|| shell.is_set
	|| tcam_parity_error.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (console !=  nullptr && console->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (external_alarm !=  nullptr && external_alarm->has_data())
	|| (hardware !=  nullptr && hardware->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (ip_ports !=  nullptr && ip_ports->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (punt_keepalive !=  nullptr && punt_keepalive->has_data())
	|| (punt_policer !=  nullptr && punt_policer->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reload !=  nullptr && reload->has_data())
	|| (tcam_threshold !=  nullptr && tcam_threshold->has_data())
	|| (trace !=  nullptr && trace->has_data())
	|| (urpf !=  nullptr && urpf->has_data());
}

bool Native::Platform::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_cdvt.operation)
	|| is_set(bfd_debug_trace.operation)
	|| is_set(cfm.operation)
	|| is_set(shell.operation)
	|| is_set(tcam_parity_error.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (console !=  nullptr && console->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (external_alarm !=  nullptr && external_alarm->has_operation())
	|| (hardware !=  nullptr && hardware->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (ip_ports !=  nullptr && ip_ports->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (punt_keepalive !=  nullptr && punt_keepalive->has_operation())
	|| (punt_policer !=  nullptr && punt_policer->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reload !=  nullptr && reload->has_operation())
	|| (tcam_threshold !=  nullptr && tcam_threshold->has_operation())
	|| (trace !=  nullptr && trace->has_operation())
	|| (urpf !=  nullptr && urpf->has_operation());
}

std::string Native::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";

    return path_buffer.str();

}

const EntityPath Native::Platform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_cdvt.is_set || is_set(atm_cdvt.operation)) leaf_name_data.push_back(atm_cdvt.get_name_leafdata());
    if (bfd_debug_trace.is_set || is_set(bfd_debug_trace.operation)) leaf_name_data.push_back(bfd_debug_trace.get_name_leafdata());
    if (cfm.is_set || is_set(cfm.operation)) leaf_name_data.push_back(cfm.get_name_leafdata());
    if (shell.is_set || is_set(shell.operation)) leaf_name_data.push_back(shell.get_name_leafdata());
    if (tcam_parity_error.is_set || is_set(tcam_parity_error.operation)) leaf_name_data.push_back(tcam_parity_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Platform::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Platform::Console>();
        }
        return console;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Platform::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "external-alarm")
    {
        if(external_alarm == nullptr)
        {
            external_alarm = std::make_shared<Native::Platform::ExternalAlarm>();
        }
        return external_alarm;
    }

    if(child_yang_name == "hardware")
    {
        if(hardware == nullptr)
        {
            hardware = std::make_shared<Native::Platform::Hardware>();
        }
        return hardware;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Platform::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "ip-ports")
    {
        if(ip_ports == nullptr)
        {
            ip_ports = std::make_shared<Native::Platform::IpPorts>();
        }
        return ip_ports;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Platform::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::Platform::L2Vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Platform::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "punt-keepalive")
    {
        if(punt_keepalive == nullptr)
        {
            punt_keepalive = std::make_shared<Native::Platform::PuntKeepalive>();
        }
        return punt_keepalive;
    }

    if(child_yang_name == "punt-policer")
    {
        if(punt_policer == nullptr)
        {
            punt_policer = std::make_shared<Native::Platform::PuntPolicer>();
        }
        return punt_policer;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Platform::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reload")
    {
        if(reload == nullptr)
        {
            reload = std::make_shared<Native::Platform::Reload>();
        }
        return reload;
    }

    if(child_yang_name == "tcam-threshold")
    {
        if(tcam_threshold == nullptr)
        {
            tcam_threshold = std::make_shared<Native::Platform::TcamThreshold>();
        }
        return tcam_threshold;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Platform::Trace>();
        }
        return trace;
    }

    if(child_yang_name == "urpf")
    {
        if(urpf == nullptr)
        {
            urpf = std::make_shared<Native::Platform::Urpf>();
        }
        return urpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(external_alarm != nullptr)
    {
        children["external-alarm"] = external_alarm;
    }

    if(hardware != nullptr)
    {
        children["hardware"] = hardware;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(ip_ports != nullptr)
    {
        children["ip-ports"] = ip_ports;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(punt_keepalive != nullptr)
    {
        children["punt-keepalive"] = punt_keepalive;
    }

    if(punt_policer != nullptr)
    {
        children["punt-policer"] = punt_policer;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reload != nullptr)
    {
        children["reload"] = reload;
    }

    if(tcam_threshold != nullptr)
    {
        children["tcam-threshold"] = tcam_threshold;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    if(urpf != nullptr)
    {
        children["urpf"] = urpf;
    }

    return children;
}

void Native::Platform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-cdvt")
    {
        atm_cdvt = value;
    }
    if(value_path == "bfd-debug-trace")
    {
        bfd_debug_trace = value;
    }
    if(value_path == "cfm")
    {
        cfm = value;
    }
    if(value_path == "shell")
    {
        shell = value;
    }
    if(value_path == "tcam-parity-error")
    {
        tcam_parity_error = value;
    }
}

Native::Platform::Icmp::Icmp()
    :
    rate_limit(std::make_shared<Native::Platform::Icmp::RateLimit>())
{
    rate_limit->parent = this;

    yang_name = "icmp"; yang_parent_name = "platform";
}

Native::Platform::Icmp::~Icmp()
{
}

bool Native::Platform::Icmp::has_data() const
{
    return (rate_limit !=  nullptr && rate_limit->has_data());
}

bool Native::Platform::Icmp::has_operation() const
{
    return is_set(operation)
	|| (rate_limit !=  nullptr && rate_limit->has_operation());
}

std::string Native::Platform::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:icmp";

    return path_buffer.str();

}

const EntityPath Native::Platform::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Platform::Icmp::RateLimit>();
        }
        return rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    return children;
}

void Native::Platform::Icmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Icmp::RateLimit::RateLimit()
    :
    duration{YType::uint32, "duration"},
    packet{YType::uint32, "packet"}
{
    yang_name = "rate-limit"; yang_parent_name = "icmp";
}

Native::Platform::Icmp::RateLimit::~RateLimit()
{
}

bool Native::Platform::Icmp::RateLimit::has_data() const
{
    return duration.is_set
	|| packet.is_set;
}

bool Native::Platform::Icmp::RateLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(packet.operation);
}

std::string Native::Platform::Icmp::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";

    return path_buffer.str();

}

const EntityPath Native::Platform::Icmp::RateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:icmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (packet.is_set || is_set(packet.operation)) leaf_name_data.push_back(packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Icmp::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Icmp::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Icmp::RateLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "packet")
    {
        packet = value;
    }
}

Native::Platform::IpPorts::IpPorts()
    :
    ephemeral_max{YType::uint16, "ephemeral-max"}
{
    yang_name = "ip-ports"; yang_parent_name = "platform";
}

Native::Platform::IpPorts::~IpPorts()
{
}

bool Native::Platform::IpPorts::has_data() const
{
    return ephemeral_max.is_set;
}

bool Native::Platform::IpPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(ephemeral_max.operation);
}

std::string Native::Platform::IpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:ip-ports";

    return path_buffer.str();

}

const EntityPath Native::Platform::IpPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ephemeral_max.is_set || is_set(ephemeral_max.operation)) leaf_name_data.push_back(ephemeral_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::IpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::IpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::IpPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ephemeral-max")
    {
        ephemeral_max = value;
    }
}

Native::Platform::Bfd::Bfd()
    :
    allow_svi{YType::empty, "allow-svi"},
    disable_offload{YType::empty, "disable-offload"},
    enable_offload{YType::empty, "enable-offload"}
{
    yang_name = "bfd"; yang_parent_name = "platform";
}

Native::Platform::Bfd::~Bfd()
{
}

bool Native::Platform::Bfd::has_data() const
{
    return allow_svi.is_set
	|| disable_offload.is_set
	|| enable_offload.is_set;
}

bool Native::Platform::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_svi.operation)
	|| is_set(disable_offload.operation)
	|| is_set(enable_offload.operation);
}

std::string Native::Platform::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:bfd";

    return path_buffer.str();

}

const EntityPath Native::Platform::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_svi.is_set || is_set(allow_svi.operation)) leaf_name_data.push_back(allow_svi.get_name_leafdata());
    if (disable_offload.is_set || is_set(disable_offload.operation)) leaf_name_data.push_back(disable_offload.get_name_leafdata());
    if (enable_offload.is_set || is_set(enable_offload.operation)) leaf_name_data.push_back(enable_offload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-svi")
    {
        allow_svi = value;
    }
    if(value_path == "disable-offload")
    {
        disable_offload = value;
    }
    if(value_path == "enable-offload")
    {
        enable_offload = value;
    }
}

Native::Platform::Console::Console()
    :
    output{YType::enumeration, "output"}
{
    yang_name = "console"; yang_parent_name = "platform";
}

Native::Platform::Console::~Console()
{
}

bool Native::Platform::Console::has_data() const
{
    return output.is_set;
}

bool Native::Platform::Console::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation);
}

std::string Native::Platform::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:console";

    return path_buffer.str();

}

const EntityPath Native::Platform::Console::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Console::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Platform::Enable::Enable()
{
    yang_name = "enable"; yang_parent_name = "platform";
}

Native::Platform::Enable::~Enable()
{
}

bool Native::Platform::Enable::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::Enable::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Platform::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:enable";

    return path_buffer.str();

}

const EntityPath Native::Platform::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Platform::Enable::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Platform::Enable::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Enable::Controller::Controller()
    :
    sonet{YType::str, "SONET"}
{
    yang_name = "controller"; yang_parent_name = "enable";
}

Native::Platform::Enable::Controller::~Controller()
{
}

bool Native::Platform::Enable::Controller::has_data() const
{
    return sonet.is_set;
}

bool Native::Platform::Enable::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(sonet.operation);
}

std::string Native::Platform::Enable::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[SONET='" <<sonet <<"']";

    return path_buffer.str();

}

const EntityPath Native::Platform::Enable::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sonet.is_set || is_set(sonet.operation)) leaf_name_data.push_back(sonet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Enable::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Enable::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Enable::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "SONET")
    {
        sonet = value;
    }
}

Native::Platform::ExternalAlarm::ExternalAlarm()
    :
    alarm{YType::str, "alarm"},
    line{YType::uint32, "line"}
{
    yang_name = "external-alarm"; yang_parent_name = "platform";
}

Native::Platform::ExternalAlarm::~ExternalAlarm()
{
}

bool Native::Platform::ExternalAlarm::has_data() const
{
    return alarm.is_set
	|| line.is_set;
}

bool Native::Platform::ExternalAlarm::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm.operation)
	|| is_set(line.operation);
}

std::string Native::Platform::ExternalAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:external-alarm";

    return path_buffer.str();

}

const EntityPath Native::Platform::ExternalAlarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.operation)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::ExternalAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::ExternalAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::ExternalAlarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm")
    {
        alarm = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Platform::Hardware::Hardware()
    :
    lite(std::make_shared<Native::Platform::Hardware::Lite>())
	,throughput(std::make_shared<Native::Platform::Hardware::Throughput>())
{
    lite->parent = this;

    throughput->parent = this;

    yang_name = "hardware"; yang_parent_name = "platform";
}

Native::Platform::Hardware::~Hardware()
{
}

bool Native::Platform::Hardware::has_data() const
{
    return (lite !=  nullptr && lite->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Platform::Hardware::has_operation() const
{
    return is_set(operation)
	|| (lite !=  nullptr && lite->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Platform::Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:hardware";

    return path_buffer.str();

}

const EntityPath Native::Platform::Hardware::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lite")
    {
        if(lite == nullptr)
        {
            lite = std::make_shared<Native::Platform::Hardware::Lite>();
        }
        return lite;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Platform::Hardware::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lite != nullptr)
    {
        children["lite"] = lite;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Platform::Hardware::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Hardware::Lite::Lite()
    :
    license{YType::enumeration, "license"}
{
    yang_name = "lite"; yang_parent_name = "hardware";
}

Native::Platform::Hardware::Lite::~Lite()
{
}

bool Native::Platform::Hardware::Lite::has_data() const
{
    return license.is_set;
}

bool Native::Platform::Hardware::Lite::has_operation() const
{
    return is_set(operation)
	|| is_set(license.operation);
}

std::string Native::Platform::Hardware::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";

    return path_buffer.str();

}

const EntityPath Native::Platform::Hardware::Lite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (license.is_set || is_set(license.operation)) leaf_name_data.push_back(license.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Hardware::Lite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "license")
    {
        license = value;
    }
}

Native::Platform::Hardware::Throughput::Throughput()
    :
    disable{YType::enumeration, "disable"}
    	,
    level(std::make_shared<Native::Platform::Hardware::Throughput::Level>())
{
    level->parent = this;

    yang_name = "throughput"; yang_parent_name = "hardware";
}

Native::Platform::Hardware::Throughput::~Throughput()
{
}

bool Native::Platform::Hardware::Throughput::has_data() const
{
    return disable.is_set
	|| (level !=  nullptr && level->has_data());
}

bool Native::Platform::Hardware::Throughput::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Platform::Hardware::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Platform::Hardware::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Platform::Hardware::Throughput::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Platform::Hardware::Throughput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Platform::Hardware::Throughput::Level::Level()
    :
    eval_only{YType::empty, "eval-only"},
    kbps{YType::enumeration, "kbps"}
{
    yang_name = "level"; yang_parent_name = "throughput";
}

Native::Platform::Hardware::Throughput::Level::~Level()
{
}

bool Native::Platform::Hardware::Throughput::Level::has_data() const
{
    return eval_only.is_set
	|| kbps.is_set;
}

bool Native::Platform::Hardware::Throughput::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(eval_only.operation)
	|| is_set(kbps.operation);
}

std::string Native::Platform::Hardware::Throughput::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Platform::Hardware::Throughput::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/throughput/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eval_only.is_set || is_set(eval_only.operation)) leaf_name_data.push_back(eval_only.get_name_leafdata());
    if (kbps.is_set || is_set(kbps.operation)) leaf_name_data.push_back(kbps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Throughput::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Throughput::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Hardware::Throughput::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eval-only")
    {
        eval_only = value;
    }
    if(value_path == "kbps")
    {
        kbps = value;
    }
}

Native::Platform::Ipsec::Ipsec()
    :
    arlog_supress{YType::empty, "arlog-supress"},
    fips_mode{YType::empty, "fips-mode"},
    gdoi{YType::enumeration, "gdoi"}
    	,
    llq(std::make_shared<Native::Platform::Ipsec::Llq>())
	,reassemble(std::make_shared<Native::Platform::Ipsec::Reassemble>())
{
    llq->parent = this;

    reassemble->parent = this;

    yang_name = "ipsec"; yang_parent_name = "platform";
}

Native::Platform::Ipsec::~Ipsec()
{
}

bool Native::Platform::Ipsec::has_data() const
{
    return arlog_supress.is_set
	|| fips_mode.is_set
	|| gdoi.is_set
	|| (llq !=  nullptr && llq->has_data())
	|| (reassemble !=  nullptr && reassemble->has_data());
}

bool Native::Platform::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(arlog_supress.operation)
	|| is_set(fips_mode.operation)
	|| is_set(gdoi.operation)
	|| (llq !=  nullptr && llq->has_operation())
	|| (reassemble !=  nullptr && reassemble->has_operation());
}

std::string Native::Platform::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:ipsec";

    return path_buffer.str();

}

const EntityPath Native::Platform::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arlog_supress.is_set || is_set(arlog_supress.operation)) leaf_name_data.push_back(arlog_supress.get_name_leafdata());
    if (fips_mode.is_set || is_set(fips_mode.operation)) leaf_name_data.push_back(fips_mode.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.operation)) leaf_name_data.push_back(gdoi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "llq")
    {
        if(llq == nullptr)
        {
            llq = std::make_shared<Native::Platform::Ipsec::Llq>();
        }
        return llq;
    }

    if(child_yang_name == "reassemble")
    {
        if(reassemble == nullptr)
        {
            reassemble = std::make_shared<Native::Platform::Ipsec::Reassemble>();
        }
        return reassemble;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(llq != nullptr)
    {
        children["llq"] = llq;
    }

    if(reassemble != nullptr)
    {
        children["reassemble"] = reassemble;
    }

    return children;
}

void Native::Platform::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arlog-supress")
    {
        arlog_supress = value;
    }
    if(value_path == "fips-mode")
    {
        fips_mode = value;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
    }
}

Native::Platform::Ipsec::Llq::Llq()
    :
    qos_group{YType::uint8, "qos-group"}
{
    yang_name = "llq"; yang_parent_name = "ipsec";
}

Native::Platform::Ipsec::Llq::~Llq()
{
}

bool Native::Platform::Ipsec::Llq::has_data() const
{
    return qos_group.is_set;
}

bool Native::Platform::Ipsec::Llq::has_operation() const
{
    return is_set(operation)
	|| is_set(qos_group.operation);
}

std::string Native::Platform::Ipsec::Llq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "llq";

    return path_buffer.str();

}

const EntityPath Native::Platform::Ipsec::Llq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::Llq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::Llq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Ipsec::Llq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
}

Native::Platform::Ipsec::Reassemble::Reassemble()
    :
    transit{YType::empty, "transit"}
{
    yang_name = "reassemble"; yang_parent_name = "ipsec";
}

Native::Platform::Ipsec::Reassemble::~Reassemble()
{
}

bool Native::Platform::Ipsec::Reassemble::has_data() const
{
    return transit.is_set;
}

bool Native::Platform::Ipsec::Reassemble::has_operation() const
{
    return is_set(operation)
	|| is_set(transit.operation);
}

std::string Native::Platform::Ipsec::Reassemble::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reassemble";

    return path_buffer.str();

}

const EntityPath Native::Platform::Ipsec::Reassemble::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transit.is_set || is_set(transit.operation)) leaf_name_data.push_back(transit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::Reassemble::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::Reassemble::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Ipsec::Reassemble::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transit")
    {
        transit = value;
    }
}

Native::Platform::L2Vpn::L2Vpn()
    :
    hdlc_pass_through{YType::empty, "hdlc-pass-through"}
    	,
    statistics(std::make_shared<Native::Platform::L2Vpn::Statistics>())
{
    statistics->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "platform";
}

Native::Platform::L2Vpn::~L2Vpn()
{
}

bool Native::Platform::L2Vpn::has_data() const
{
    return hdlc_pass_through.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Platform::L2Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(hdlc_pass_through.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Platform::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:l2vpn";

    return path_buffer.str();

}

const EntityPath Native::Platform::L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hdlc_pass_through.is_set || is_set(hdlc_pass_through.operation)) leaf_name_data.push_back(hdlc_pass_through.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Platform::L2Vpn::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Platform::L2Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hdlc-pass-through")
    {
        hdlc_pass_through = value;
    }
}

Native::Platform::L2Vpn::Statistics::Statistics()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "statistics"; yang_parent_name = "l2vpn";
}

Native::Platform::L2Vpn::Statistics::~Statistics()
{
}

bool Native::Platform::L2Vpn::Statistics::has_data() const
{
    return enable.is_set;
}

bool Native::Platform::L2Vpn::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Platform::L2Vpn::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Native::Platform::L2Vpn::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::L2Vpn::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::L2Vpn::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::L2Vpn::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Platform::Multicast::Multicast()
    :
    mgre(std::make_shared<Native::Platform::Multicast::Mgre>())
	,oce(std::make_shared<Native::Platform::Multicast::Oce>())
{
    mgre->parent = this;

    oce->parent = this;

    yang_name = "multicast"; yang_parent_name = "platform";
}

Native::Platform::Multicast::~Multicast()
{
}

bool Native::Platform::Multicast::has_data() const
{
    return (mgre !=  nullptr && mgre->has_data())
	|| (oce !=  nullptr && oce->has_data());
}

bool Native::Platform::Multicast::has_operation() const
{
    return is_set(operation)
	|| (mgre !=  nullptr && mgre->has_operation())
	|| (oce !=  nullptr && oce->has_operation());
}

std::string Native::Platform::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:multicast";

    return path_buffer.str();

}

const EntityPath Native::Platform::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgre")
    {
        if(mgre == nullptr)
        {
            mgre = std::make_shared<Native::Platform::Multicast::Mgre>();
        }
        return mgre;
    }

    if(child_yang_name == "oce")
    {
        if(oce == nullptr)
        {
            oce = std::make_shared<Native::Platform::Multicast::Oce>();
        }
        return oce;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mgre != nullptr)
    {
        children["mgre"] = mgre;
    }

    if(oce != nullptr)
    {
        children["oce"] = oce;
    }

    return children;
}

void Native::Platform::Multicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Multicast::Mgre::Mgre()
    :
    injection{YType::empty, "injection"}
{
    yang_name = "mgre"; yang_parent_name = "multicast";
}

Native::Platform::Multicast::Mgre::~Mgre()
{
}

bool Native::Platform::Multicast::Mgre::has_data() const
{
    return injection.is_set;
}

bool Native::Platform::Multicast::Mgre::has_operation() const
{
    return is_set(operation)
	|| is_set(injection.operation);
}

std::string Native::Platform::Multicast::Mgre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgre";

    return path_buffer.str();

}

const EntityPath Native::Platform::Multicast::Mgre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (injection.is_set || is_set(injection.operation)) leaf_name_data.push_back(injection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Mgre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Mgre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Multicast::Mgre::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "injection")
    {
        injection = value;
    }
}

Native::Platform::Multicast::Oce::Oce()
    :
    flag(std::make_shared<Native::Platform::Multicast::Oce::Flag>())
{
    flag->parent = this;

    yang_name = "oce"; yang_parent_name = "multicast";
}

Native::Platform::Multicast::Oce::~Oce()
{
}

bool Native::Platform::Multicast::Oce::has_data() const
{
    return (flag !=  nullptr && flag->has_data());
}

bool Native::Platform::Multicast::Oce::has_operation() const
{
    return is_set(operation)
	|| (flag !=  nullptr && flag->has_operation());
}

std::string Native::Platform::Multicast::Oce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oce";

    return path_buffer.str();

}

const EntityPath Native::Platform::Multicast::Oce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Oce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flag")
    {
        if(flag == nullptr)
        {
            flag = std::make_shared<Native::Platform::Multicast::Oce::Flag>();
        }
        return flag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Oce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flag != nullptr)
    {
        children["flag"] = flag;
    }

    return children;
}

void Native::Platform::Multicast::Oce::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Multicast::Oce::Flag::Flag()
    :
    suppress{YType::empty, "suppress"}
{
    yang_name = "flag"; yang_parent_name = "oce";
}

Native::Platform::Multicast::Oce::Flag::~Flag()
{
}

bool Native::Platform::Multicast::Oce::Flag::has_data() const
{
    return suppress.is_set;
}

bool Native::Platform::Multicast::Oce::Flag::has_operation() const
{
    return is_set(operation)
	|| is_set(suppress.operation);
}

std::string Native::Platform::Multicast::Oce::Flag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flag";

    return path_buffer.str();

}

const EntityPath Native::Platform::Multicast::Oce::Flag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/oce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (suppress.is_set || is_set(suppress.operation)) leaf_name_data.push_back(suppress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Oce::Flag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Oce::Flag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Multicast::Oce::Flag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "suppress")
    {
        suppress = value;
    }
}

Native::Platform::PuntKeepalive::PuntKeepalive()
    :
    disable_kernel_core{YType::boolean, "disable-kernel-core"}
    	,
    settings(std::make_shared<Native::Platform::PuntKeepalive::Settings>())
{
    settings->parent = this;

    yang_name = "punt-keepalive"; yang_parent_name = "platform";
}

Native::Platform::PuntKeepalive::~PuntKeepalive()
{
}

bool Native::Platform::PuntKeepalive::has_data() const
{
    return disable_kernel_core.is_set
	|| (settings !=  nullptr && settings->has_data());
}

bool Native::Platform::PuntKeepalive::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_kernel_core.operation)
	|| (settings !=  nullptr && settings->has_operation());
}

std::string Native::Platform::PuntKeepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:punt-keepalive";

    return path_buffer.str();

}

const EntityPath Native::Platform::PuntKeepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_kernel_core.is_set || is_set(disable_kernel_core.operation)) leaf_name_data.push_back(disable_kernel_core.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::PuntKeepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "settings")
    {
        if(settings == nullptr)
        {
            settings = std::make_shared<Native::Platform::PuntKeepalive::Settings>();
        }
        return settings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntKeepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(settings != nullptr)
    {
        children["settings"] = settings;
    }

    return children;
}

void Native::Platform::PuntKeepalive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-kernel-core")
    {
        disable_kernel_core = value;
    }
}

Native::Platform::PuntKeepalive::Settings::Settings()
    :
    fatal_count{YType::uint16, "fatal-count"},
    transmit_interval{YType::uint16, "transmit-interval"},
    warning_count{YType::uint16, "warning-count"}
{
    yang_name = "settings"; yang_parent_name = "punt-keepalive";
}

Native::Platform::PuntKeepalive::Settings::~Settings()
{
}

bool Native::Platform::PuntKeepalive::Settings::has_data() const
{
    return fatal_count.is_set
	|| transmit_interval.is_set
	|| warning_count.is_set;
}

bool Native::Platform::PuntKeepalive::Settings::has_operation() const
{
    return is_set(operation)
	|| is_set(fatal_count.operation)
	|| is_set(transmit_interval.operation)
	|| is_set(warning_count.operation);
}

std::string Native::Platform::PuntKeepalive::Settings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "settings";

    return path_buffer.str();

}

const EntityPath Native::Platform::PuntKeepalive::Settings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:punt-keepalive/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fatal_count.is_set || is_set(fatal_count.operation)) leaf_name_data.push_back(fatal_count.get_name_leafdata());
    if (transmit_interval.is_set || is_set(transmit_interval.operation)) leaf_name_data.push_back(transmit_interval.get_name_leafdata());
    if (warning_count.is_set || is_set(warning_count.operation)) leaf_name_data.push_back(warning_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::PuntKeepalive::Settings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntKeepalive::Settings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::PuntKeepalive::Settings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fatal-count")
    {
        fatal_count = value;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval = value;
    }
    if(value_path == "warning-count")
    {
        warning_count = value;
    }
}

Native::Platform::PuntPolicer::PuntPolicer()
{
    yang_name = "punt-policer"; yang_parent_name = "platform";
}

Native::Platform::PuntPolicer::~PuntPolicer()
{
}

bool Native::Platform::PuntPolicer::has_data() const
{
    for (std::size_t index=0; index<punt_num.size(); index++)
    {
        if(punt_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::PuntPolicer::has_operation() const
{
    for (std::size_t index=0; index<punt_num.size(); index++)
    {
        if(punt_num[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Platform::PuntPolicer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:punt-policer";

    return path_buffer.str();

}

const EntityPath Native::Platform::PuntPolicer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::PuntPolicer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "punt-num")
    {
        for(auto const & c : punt_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Platform::PuntPolicer::PuntNum>();
        c->parent = this;
        punt_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntPolicer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : punt_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Platform::PuntPolicer::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::PuntPolicer::PuntNum::PuntNum()
    :
    cause{YType::uint8, "cause"},
    high{YType::empty, "high"},
    max_rate{YType::uint16, "max-rate"}
{
    yang_name = "punt-num"; yang_parent_name = "punt-policer";
}

Native::Platform::PuntPolicer::PuntNum::~PuntNum()
{
}

bool Native::Platform::PuntPolicer::PuntNum::has_data() const
{
    return cause.is_set
	|| high.is_set
	|| max_rate.is_set;
}

bool Native::Platform::PuntPolicer::PuntNum::has_operation() const
{
    return is_set(operation)
	|| is_set(cause.operation)
	|| is_set(high.operation)
	|| is_set(max_rate.operation);
}

std::string Native::Platform::PuntPolicer::PuntNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt-num" <<"[cause='" <<cause <<"']";

    return path_buffer.str();

}

const EntityPath Native::Platform::PuntPolicer::PuntNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:punt-policer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cause.is_set || is_set(cause.operation)) leaf_name_data.push_back(cause.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (max_rate.is_set || is_set(max_rate.operation)) leaf_name_data.push_back(max_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::PuntPolicer::PuntNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntPolicer::PuntNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::PuntPolicer::PuntNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cause")
    {
        cause = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "max-rate")
    {
        max_rate = value;
    }
}

Native::Platform::Qos::Qos()
    :
    cac_policer{YType::uint16, "cac-policer"},
    marker_statistics{YType::empty, "marker-statistics"},
    performance_monitor{YType::empty, "performance-monitor"},
    punt_path_matching{YType::empty, "punt-path-matching"}
    	,
    match_statistics(std::make_shared<Native::Platform::Qos::MatchStatistics>())
{
    match_statistics->parent = this;

    yang_name = "qos"; yang_parent_name = "platform";
}

Native::Platform::Qos::~Qos()
{
}

bool Native::Platform::Qos::has_data() const
{
    return cac_policer.is_set
	|| marker_statistics.is_set
	|| performance_monitor.is_set
	|| punt_path_matching.is_set
	|| (match_statistics !=  nullptr && match_statistics->has_data());
}

bool Native::Platform::Qos::has_operation() const
{
    return is_set(operation)
	|| is_set(cac_policer.operation)
	|| is_set(marker_statistics.operation)
	|| is_set(performance_monitor.operation)
	|| is_set(punt_path_matching.operation)
	|| (match_statistics !=  nullptr && match_statistics->has_operation());
}

std::string Native::Platform::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:qos";

    return path_buffer.str();

}

const EntityPath Native::Platform::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_policer.is_set || is_set(cac_policer.operation)) leaf_name_data.push_back(cac_policer.get_name_leafdata());
    if (marker_statistics.is_set || is_set(marker_statistics.operation)) leaf_name_data.push_back(marker_statistics.get_name_leafdata());
    if (performance_monitor.is_set || is_set(performance_monitor.operation)) leaf_name_data.push_back(performance_monitor.get_name_leafdata());
    if (punt_path_matching.is_set || is_set(punt_path_matching.operation)) leaf_name_data.push_back(punt_path_matching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-statistics")
    {
        if(match_statistics == nullptr)
        {
            match_statistics = std::make_shared<Native::Platform::Qos::MatchStatistics>();
        }
        return match_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_statistics != nullptr)
    {
        children["match-statistics"] = match_statistics;
    }

    return children;
}

void Native::Platform::Qos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-policer")
    {
        cac_policer = value;
    }
    if(value_path == "marker-statistics")
    {
        marker_statistics = value;
    }
    if(value_path == "performance-monitor")
    {
        performance_monitor = value;
    }
    if(value_path == "punt-path-matching")
    {
        punt_path_matching = value;
    }
}

Native::Platform::Qos::MatchStatistics::MatchStatistics()
    :
    per_ace{YType::empty, "per-ace"},
    per_filter{YType::empty, "per-filter"}
{
    yang_name = "match-statistics"; yang_parent_name = "qos";
}

Native::Platform::Qos::MatchStatistics::~MatchStatistics()
{
}

bool Native::Platform::Qos::MatchStatistics::has_data() const
{
    return per_ace.is_set
	|| per_filter.is_set;
}

bool Native::Platform::Qos::MatchStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(per_ace.operation)
	|| is_set(per_filter.operation);
}

std::string Native::Platform::Qos::MatchStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-statistics";

    return path_buffer.str();

}

const EntityPath Native::Platform::Qos::MatchStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ace.is_set || is_set(per_ace.operation)) leaf_name_data.push_back(per_ace.get_name_leafdata());
    if (per_filter.is_set || is_set(per_filter.operation)) leaf_name_data.push_back(per_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Qos::MatchStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Qos::MatchStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Qos::MatchStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-ace")
    {
        per_ace = value;
    }
    if(value_path == "per-filter")
    {
        per_filter = value;
    }
}

Native::Platform::Reload::Reload()
    :
    immediate{YType::empty, "immediate"}
{
    yang_name = "reload"; yang_parent_name = "platform";
}

Native::Platform::Reload::~Reload()
{
}

bool Native::Platform::Reload::has_data() const
{
    return immediate.is_set;
}

bool Native::Platform::Reload::has_operation() const
{
    return is_set(operation)
	|| is_set(immediate.operation);
}

std::string Native::Platform::Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:reload";

    return path_buffer.str();

}

const EntityPath Native::Platform::Reload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate.is_set || is_set(immediate.operation)) leaf_name_data.push_back(immediate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Reload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "immediate")
    {
        immediate = value;
    }
}

Native::Platform::Urpf::Urpf()
    :
    loose(std::make_shared<Native::Platform::Urpf::Loose>())
{
    loose->parent = this;

    yang_name = "urpf"; yang_parent_name = "platform";
}

Native::Platform::Urpf::~Urpf()
{
}

bool Native::Platform::Urpf::has_data() const
{
    return (loose !=  nullptr && loose->has_data());
}

bool Native::Platform::Urpf::has_operation() const
{
    return is_set(operation)
	|| (loose !=  nullptr && loose->has_operation());
}

std::string Native::Platform::Urpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:urpf";

    return path_buffer.str();

}

const EntityPath Native::Platform::Urpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Urpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loose")
    {
        if(loose == nullptr)
        {
            loose = std::make_shared<Native::Platform::Urpf::Loose>();
        }
        return loose;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loose != nullptr)
    {
        children["loose"] = loose;
    }

    return children;
}

void Native::Platform::Urpf::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Urpf::Loose::Loose()
    :
    counter(std::make_shared<Native::Platform::Urpf::Loose::Counter>())
{
    counter->parent = this;

    yang_name = "loose"; yang_parent_name = "urpf";
}

Native::Platform::Urpf::Loose::~Loose()
{
}

bool Native::Platform::Urpf::Loose::has_data() const
{
    return (counter !=  nullptr && counter->has_data());
}

bool Native::Platform::Urpf::Loose::has_operation() const
{
    return is_set(operation)
	|| (counter !=  nullptr && counter->has_operation());
}

std::string Native::Platform::Urpf::Loose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose";

    return path_buffer.str();

}

const EntityPath Native::Platform::Urpf::Loose::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Platform::Urpf::Loose::Counter>();
        }
        return counter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    return children;
}

void Native::Platform::Urpf::Loose::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Urpf::Loose::Counter::Counter()
    :
    ipv4(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4>())
	,ipv6(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "counter"; yang_parent_name = "loose";
}

Native::Platform::Urpf::Loose::Counter::~Counter()
{
}

bool Native::Platform::Urpf::Loose::Counter::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Platform::Urpf::Loose::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Platform::Urpf::Loose::Counter::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Ipv4()
    :
    supress(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4::Supress>())
{
    supress->parent = this;

    yang_name = "ipv4"; yang_parent_name = "counter";
}

Native::Platform::Urpf::Loose::Counter::Ipv4::~Ipv4()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_data() const
{
    return (supress !=  nullptr && supress->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (supress !=  nullptr && supress->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Platform::Urpf::Loose::Counter::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supress")
    {
        if(supress == nullptr)
        {
            supress = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4::Supress>();
        }
        return supress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supress != nullptr)
    {
        children["supress"] = supress;
    }

    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::Supress()
    :
    asymmetric_only{YType::empty, "asymmetric_only"}
{
    yang_name = "supress"; yang_parent_name = "ipv4";
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::~Supress()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_data() const
{
    return asymmetric_only.is_set;
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_operation() const
{
    return is_set(operation)
	|| is_set(asymmetric_only.operation);
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supress";

    return path_buffer.str();

}

const EntityPath Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asymmetric_only.is_set || is_set(asymmetric_only.operation)) leaf_name_data.push_back(asymmetric_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only = value;
    }
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Ipv6()
    :
    supress(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6::Supress>())
{
    supress->parent = this;

    yang_name = "ipv6"; yang_parent_name = "counter";
}

Native::Platform::Urpf::Loose::Counter::Ipv6::~Ipv6()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_data() const
{
    return (supress !=  nullptr && supress->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (supress !=  nullptr && supress->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Platform::Urpf::Loose::Counter::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supress")
    {
        if(supress == nullptr)
        {
            supress = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6::Supress>();
        }
        return supress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supress != nullptr)
    {
        children["supress"] = supress;
    }

    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::Supress()
    :
    asymmetric_only{YType::empty, "asymmetric_only"}
{
    yang_name = "supress"; yang_parent_name = "ipv6";
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::~Supress()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_data() const
{
    return asymmetric_only.is_set;
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_operation() const
{
    return is_set(operation)
	|| is_set(asymmetric_only.operation);
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supress";

    return path_buffer.str();

}

const EntityPath Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asymmetric_only.is_set || is_set(asymmetric_only.operation)) leaf_name_data.push_back(asymmetric_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only = value;
    }
}

Native::Platform::TcamThreshold::TcamThreshold()
    :
    alarm_frequency{YType::uint32, "alarm-frequency"}
{
    yang_name = "tcam-threshold"; yang_parent_name = "platform";
}

Native::Platform::TcamThreshold::~TcamThreshold()
{
}

bool Native::Platform::TcamThreshold::has_data() const
{
    return alarm_frequency.is_set;
}

bool Native::Platform::TcamThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm_frequency.operation);
}

std::string Native::Platform::TcamThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:tcam-threshold";

    return path_buffer.str();

}

const EntityPath Native::Platform::TcamThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_frequency.is_set || is_set(alarm_frequency.operation)) leaf_name_data.push_back(alarm_frequency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::TcamThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::TcamThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::TcamThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-frequency")
    {
        alarm_frequency = value;
    }
}

Native::Platform::Trace::Trace()
{
    yang_name = "trace"; yang_parent_name = "platform";
}

Native::Platform::Trace::~Trace()
{
}

bool Native::Platform::Trace::has_data() const
{
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::Trace::has_operation() const
{
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Platform::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:trace";

    return path_buffer.str();

}

const EntityPath Native::Platform::Trace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        for(auto const & c : runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Platform::Trace::Runtime>();
        c->parent = this;
        runtime.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : runtime)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Platform::Trace::set_value(const std::string & value_path, std::string value)
{
}

Native::Platform::Trace::Runtime::Runtime()
    :
    slot{YType::uint8, "slot"},
    bay{YType::uint8, "bay"},
    level{YType::enumeration, "level"},
    module{YType::enumeration, "module"},
    process{YType::enumeration, "process"}
{
    yang_name = "runtime"; yang_parent_name = "trace";
}

Native::Platform::Trace::Runtime::~Runtime()
{
}

bool Native::Platform::Trace::Runtime::has_data() const
{
    return slot.is_set
	|| bay.is_set
	|| level.is_set
	|| module.is_set
	|| process.is_set;
}

bool Native::Platform::Trace::Runtime::has_operation() const
{
    return is_set(operation)
	|| is_set(slot.operation)
	|| is_set(bay.operation)
	|| is_set(level.operation)
	|| is_set(module.operation)
	|| is_set(process.operation);
}

std::string Native::Platform::Trace::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime" <<"[slot='" <<slot <<"']" <<"[bay='" <<bay <<"']";

    return path_buffer.str();

}

const EntityPath Native::Platform::Trace::Runtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:trace/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (bay.is_set || is_set(bay.operation)) leaf_name_data.push_back(bay.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());
    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Trace::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Trace::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Trace::Runtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "bay")
    {
        bay = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "module")
    {
        module = value;
    }
    if(value_path == "process")
    {
        process = value;
    }
}

Native::Enable::Enable()
    :
    last_resort{YType::enumeration, "last-resort"},
    use_tacacs{YType::empty, "use-tacacs"}
    	,
    password(std::make_shared<Native::Enable::Password>())
	,secret(std::make_shared<Native::Enable::Secret>())
{
    password->parent = this;

    secret->parent = this;

    yang_name = "enable"; yang_parent_name = "native";
}

Native::Enable::~Enable()
{
}

bool Native::Enable::has_data() const
{
    return last_resort.is_set
	|| use_tacacs.is_set
	|| (password !=  nullptr && password->has_data())
	|| (secret !=  nullptr && secret->has_data());
}

bool Native::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(last_resort.operation)
	|| is_set(use_tacacs.operation)
	|| (password !=  nullptr && password->has_operation())
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Native::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_resort.is_set || is_set(last_resort.operation)) leaf_name_data.push_back(last_resort.get_name_leafdata());
    if (use_tacacs.is_set || is_set(use_tacacs.operation)) leaf_name_data.push_back(use_tacacs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Enable::Password>();
        }
        return password;
    }

    if(child_yang_name == "secret")
    {
        if(secret == nullptr)
        {
            secret = std::make_shared<Native::Enable::Secret>();
        }
        return secret;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(secret != nullptr)
    {
        children["secret"] = secret;
    }

    return children;
}

void Native::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-resort")
    {
        last_resort = value;
    }
    if(value_path == "use-tacacs")
    {
        use_tacacs = value;
    }
}

Native::Enable::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{
    yang_name = "password"; yang_parent_name = "enable";
}

Native::Enable::Password::~Password()
{
}

bool Native::Enable::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Enable::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(secret.operation)
	|| is_set(type.operation);
}

std::string Native::Enable::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Enable::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Enable::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Enable::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Enable::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Enable::Secret::Secret()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{
    yang_name = "secret"; yang_parent_name = "enable";
}

Native::Enable::Secret::~Secret()
{
}

bool Native::Enable::Secret::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Enable::Secret::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(secret.operation)
	|| is_set(type.operation);
}

std::string Native::Enable::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";

    return path_buffer.str();

}

const EntityPath Native::Enable::Secret::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Enable::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Enable::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Enable::Secret::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Password::Password()
    :
    encryption(std::make_shared<Native::Password::Encryption>())
{
    encryption->parent = this;

    yang_name = "password"; yang_parent_name = "native";
}

Native::Password::~Password()
{
}

bool Native::Password::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Password::has_operation() const
{
    return is_set(operation)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Password::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Password::set_value(const std::string & value_path, std::string value)
{
}

Native::Password::Encryption::Encryption()
    :
    aes{YType::empty, "aes"}
{
    yang_name = "encryption"; yang_parent_name = "password";
}

Native::Password::Encryption::~Encryption()
{
}

bool Native::Password::Encryption::has_data() const
{
    return aes.is_set;
}

bool Native::Password::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(aes.operation);
}

std::string Native::Password::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

const EntityPath Native::Password::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes.is_set || is_set(aes.operation)) leaf_name_data.push_back(aes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Password::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Password::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Password::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aes")
    {
        aes = value;
    }
}

Native::Eap::Eap()
{
    yang_name = "eap"; yang_parent_name = "native";
}

Native::Eap::~Eap()
{
}

bool Native::Eap::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Eap::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Eap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Eap::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Eap::set_value(const std::string & value_path, std::string value)
{
}

Native::Eap::Profile::Profile()
    :
    name{YType::str, "name"},
    pki_trustpoint{YType::str, "pki-trustpoint"}
    	,
    method(std::make_shared<Native::Eap::Profile::Method>())
{
    method->parent = this;

    yang_name = "profile"; yang_parent_name = "eap";
}

Native::Eap::Profile::~Profile()
{
}

bool Native::Eap::Profile::has_data() const
{
    return name.is_set
	|| pki_trustpoint.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Eap::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(pki_trustpoint.operation)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Eap::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Eap::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/eap/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.operation)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Eap::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Eap::Profile::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Eap::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Eap::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
    }
}

Native::Eap::Profile::Method::Method()
    :
    fast{YType::empty, "fast"},
    gtc{YType::empty, "gtc"},
    leap{YType::empty, "leap"},
    md5{YType::empty, "md5"},
    mschapv2{YType::empty, "mschapv2"},
    peap{YType::empty, "peap"},
    tls{YType::empty, "tls"}
{
    yang_name = "method"; yang_parent_name = "profile";
}

Native::Eap::Profile::Method::~Method()
{
}

bool Native::Eap::Profile::Method::has_data() const
{
    return fast.is_set
	|| gtc.is_set
	|| leap.is_set
	|| md5.is_set
	|| mschapv2.is_set
	|| peap.is_set
	|| tls.is_set;
}

bool Native::Eap::Profile::Method::has_operation() const
{
    return is_set(operation)
	|| is_set(fast.operation)
	|| is_set(gtc.operation)
	|| is_set(leap.operation)
	|| is_set(md5.operation)
	|| is_set(mschapv2.operation)
	|| is_set(peap.operation)
	|| is_set(tls.operation);
}

std::string Native::Eap::Profile::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

const EntityPath Native::Eap::Profile::Method::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Method' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast.is_set || is_set(fast.operation)) leaf_name_data.push_back(fast.get_name_leafdata());
    if (gtc.is_set || is_set(gtc.operation)) leaf_name_data.push_back(gtc.get_name_leafdata());
    if (leap.is_set || is_set(leap.operation)) leaf_name_data.push_back(leap.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (mschapv2.is_set || is_set(mschapv2.operation)) leaf_name_data.push_back(mschapv2.get_name_leafdata());
    if (peap.is_set || is_set(peap.operation)) leaf_name_data.push_back(peap.get_name_leafdata());
    if (tls.is_set || is_set(tls.operation)) leaf_name_data.push_back(tls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Eap::Profile::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Eap::Profile::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Eap::Profile::Method::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast")
    {
        fast = value;
    }
    if(value_path == "gtc")
    {
        gtc = value;
    }
    if(value_path == "leap")
    {
        leap = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "mschapv2")
    {
        mschapv2 = value;
    }
    if(value_path == "peap")
    {
        peap = value;
    }
    if(value_path == "tls")
    {
        tls = value;
    }
}

Native::Archive::Archive()
    :
    maximum{YType::uint8, "maximum"},
    path{YType::str, "path"},
    time_period{YType::uint32, "time-period"}
    	,
    log(std::make_shared<Native::Archive::Log>())
{
    log->parent = this;

    yang_name = "archive"; yang_parent_name = "native";
}

Native::Archive::~Archive()
{
}

bool Native::Archive::has_data() const
{
    return maximum.is_set
	|| path.is_set
	|| time_period.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Archive::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(path.operation)
	|| is_set(time_period.operation)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Archive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archive";

    return path_buffer.str();

}

const EntityPath Native::Archive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.operation)) leaf_name_data.push_back(time_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Archive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Archive::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Archive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "time-period")
    {
        time_period = value;
    }
}

Native::Archive::Log::Log()
    :
    config(std::make_shared<Native::Archive::Log::Config>())
{
    config->parent = this;

    yang_name = "log"; yang_parent_name = "archive";
}

Native::Archive::Log::~Log()
{
}

bool Native::Archive::Log::has_data() const
{
    return (config !=  nullptr && config->has_data());
}

bool Native::Archive::Log::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation());
}

std::string Native::Archive::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";

    return path_buffer.str();

}

const EntityPath Native::Archive::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/archive/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Archive::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Archive::Log::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Native::Archive::Log::set_value(const std::string & value_path, std::string value)
{
}

Native::Archive::Log::Config::Config()
    :
    hidekeys{YType::empty, "hidekeys"}
    	,
    logging(std::make_shared<Native::Archive::Log::Config::Logging>())
	,notify(std::make_shared<Native::Archive::Log::Config::Notify>())
{
    logging->parent = this;

    notify->parent = this;

    yang_name = "config"; yang_parent_name = "log";
}

Native::Archive::Log::Config::~Config()
{
}

bool Native::Archive::Log::Config::has_data() const
{
    return hidekeys.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (notify !=  nullptr && notify->has_data());
}

bool Native::Archive::Log::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(hidekeys.operation)
	|| (logging !=  nullptr && logging->has_operation())
	|| (notify !=  nullptr && notify->has_operation());
}

std::string Native::Archive::Log::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Native::Archive::Log::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/archive/log/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hidekeys.is_set || is_set(hidekeys.operation)) leaf_name_data.push_back(hidekeys.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Archive::Log::Config::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "notify")
    {
        if(notify == nullptr)
        {
            notify = std::make_shared<Native::Archive::Log::Config::Notify>();
        }
        return notify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(notify != nullptr)
    {
        children["notify"] = notify;
    }

    return children;
}

void Native::Archive::Log::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hidekeys")
    {
        hidekeys = value;
    }
}

Native::Archive::Log::Config::Logging::Logging()
    :
    enable{YType::empty, "enable"},
    size{YType::uint16, "size"}
    	,
    persistent(nullptr) // presence node
{
    yang_name = "logging"; yang_parent_name = "config";
}

Native::Archive::Log::Config::Logging::~Logging()
{
}

bool Native::Archive::Log::Config::Logging::has_data() const
{
    return enable.is_set
	|| size.is_set
	|| (persistent !=  nullptr && persistent->has_data());
}

bool Native::Archive::Log::Config::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(size.operation)
	|| (persistent !=  nullptr && persistent->has_operation());
}

std::string Native::Archive::Log::Config::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Archive::Log::Config::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::Archive::Log::Config::Logging::Persistent>();
        }
        return persistent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(persistent != nullptr)
    {
        children["persistent"] = persistent;
    }

    return children;
}

void Native::Archive::Log::Config::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Archive::Log::Config::Logging::Persistent::Persistent()
    :
    auto_{YType::empty, "auto"},
    reload{YType::empty, "reload"}
{
    yang_name = "persistent"; yang_parent_name = "logging";
}

Native::Archive::Log::Config::Logging::Persistent::~Persistent()
{
}

bool Native::Archive::Log::Config::Logging::Persistent::has_data() const
{
    return auto_.is_set
	|| reload.is_set;
}

bool Native::Archive::Log::Config::Logging::Persistent::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation)
	|| is_set(reload.operation);
}

std::string Native::Archive::Log::Config::Logging::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";

    return path_buffer.str();

}

const EntityPath Native::Archive::Log::Config::Logging::Persistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (reload.is_set || is_set(reload.operation)) leaf_name_data.push_back(reload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::Logging::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::Logging::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Archive::Log::Config::Logging::Persistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
    if(value_path == "reload")
    {
        reload = value;
    }
}

Native::Archive::Log::Config::Notify::Notify()
    :
    syslog(nullptr) // presence node
{
    yang_name = "notify"; yang_parent_name = "config";
}

Native::Archive::Log::Config::Notify::~Notify()
{
}

bool Native::Archive::Log::Config::Notify::has_data() const
{
    return (syslog !=  nullptr && syslog->has_data());
}

bool Native::Archive::Log::Config::Notify::has_operation() const
{
    return is_set(operation)
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Archive::Log::Config::Notify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify";

    return path_buffer.str();

}

const EntityPath Native::Archive::Log::Config::Notify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::Notify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Archive::Log::Config::Notify::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::Notify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::Archive::Log::Config::Notify::set_value(const std::string & value_path, std::string value)
{
}

Native::Archive::Log::Config::Notify::Syslog::Syslog()
    :
    contenttype{YType::enumeration, "contenttype"}
{
    yang_name = "syslog"; yang_parent_name = "notify";
}

Native::Archive::Log::Config::Notify::Syslog::~Syslog()
{
}

bool Native::Archive::Log::Config::Notify::Syslog::has_data() const
{
    return contenttype.is_set;
}

bool Native::Archive::Log::Config::Notify::Syslog::has_operation() const
{
    return is_set(operation)
	|| is_set(contenttype.operation);
}

std::string Native::Archive::Log::Config::Notify::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Native::Archive::Log::Config::Notify::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/notify/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contenttype.is_set || is_set(contenttype.operation)) leaf_name_data.push_back(contenttype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::Notify::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::Notify::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Archive::Log::Config::Notify::Syslog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "contenttype")
    {
        contenttype = value;
    }
}

Native::Username::Username()
    :
    name{YType::str, "name"},
    one_time{YType::empty, "one-time"},
    privilege{YType::uint8, "privilege"}
    	,
    password(std::make_shared<Native::Username::Password>())
	,secret(std::make_shared<Native::Username::Secret>())
{
    password->parent = this;

    secret->parent = this;

    yang_name = "username"; yang_parent_name = "native";
}

Native::Username::~Username()
{
}

bool Native::Username::has_data() const
{
    return name.is_set
	|| one_time.is_set
	|| privilege.is_set
	|| (password !=  nullptr && password->has_data())
	|| (secret !=  nullptr && secret->has_data());
}

bool Native::Username::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(one_time.operation)
	|| is_set(privilege.operation)
	|| (password !=  nullptr && password->has_operation())
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Native::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Username::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (one_time.is_set || is_set(one_time.operation)) leaf_name_data.push_back(one_time.get_name_leafdata());
    if (privilege.is_set || is_set(privilege.operation)) leaf_name_data.push_back(privilege.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Username::Password>();
        }
        return password;
    }

    if(child_yang_name == "secret")
    {
        if(secret == nullptr)
        {
            secret = std::make_shared<Native::Username::Secret>();
        }
        return secret;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(secret != nullptr)
    {
        children["secret"] = secret;
    }

    return children;
}

void Native::Username::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "one-time")
    {
        one_time = value;
    }
    if(value_path == "privilege")
    {
        privilege = value;
    }
}

Native::Username::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    password{YType::str, "password"}
{
    yang_name = "password"; yang_parent_name = "username";
}

Native::Username::Password::~Password()
{
}

bool Native::Username::Password::has_data() const
{
    return encryption.is_set
	|| password.is_set;
}

bool Native::Username::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(password.operation);
}

std::string Native::Username::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Username::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Username::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Username::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Username::Secret::Secret()
    :
    encryption{YType::enumeration, "encryption"},
    secret{YType::str, "secret"}
{
    yang_name = "secret"; yang_parent_name = "username";
}

Native::Username::Secret::~Secret()
{
}

bool Native::Username::Secret::has_data() const
{
    return encryption.is_set
	|| secret.is_set;
}

bool Native::Username::Secret::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(secret.operation);
}

std::string Native::Username::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";

    return path_buffer.str();

}

const EntityPath Native::Username::Secret::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secret' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Username::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Username::Secret::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
}

Native::Controller::Controller()
{
    yang_name = "controller"; yang_parent_name = "native";
}

Native::Controller::~Controller()
{
}

bool Native::Controller::has_data() const
{
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<controller_tx_ex_list.size(); index++)
    {
        if(controller_tx_ex_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sonet.size(); index++)
    {
        if(sonet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sonet_acr.size(); index++)
    {
        if(sonet_acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wanphy.size(); index++)
    {
        if(wanphy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::has_operation() const
{
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<controller_tx_ex_list.size(); index++)
    {
        if(controller_tx_ex_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sonet.size(); index++)
    {
        if(sonet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sonet_acr.size(); index++)
    {
        if(sonet_acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wanphy.size(); index++)
    {
        if(wanphy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";

    return path_buffer.str();

}

const EntityPath Native::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cellular")
    {
        for(auto const & c : cellular)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Cellular>();
        c->parent = this;
        cellular.push_back(c);
        return c;
    }

    if(child_yang_name == "controller-tx-ex-list")
    {
        for(auto const & c : controller_tx_ex_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::ControllerTxExList>();
        c->parent = this;
        controller_tx_ex_list.push_back(c);
        return c;
    }

    if(child_yang_name == "SONET")
    {
        for(auto const & c : sonet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet>();
        c->parent = this;
        sonet.push_back(c);
        return c;
    }

    if(child_yang_name == "SONET-ACR")
    {
        for(auto const & c : sonet_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr>();
        c->parent = this;
        sonet_acr.push_back(c);
        return c;
    }

    if(child_yang_name == "wanphy")
    {
        for(auto const & c : wanphy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Wanphy>();
        c->parent = this;
        wanphy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cellular)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : controller_tx_ex_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sonet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sonet_acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wanphy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::ControllerTxExList::ControllerTxExList()
    :
    name{YType::enumeration, "name"},
    number{YType::str, "number"},
    atm{YType::empty, "atm"},
    framing{YType::str, "framing"},
    linecode{YType::enumeration, "linecode"}
    	,
    cablelength(std::make_shared<Native::Controller::ControllerTxExList::Cablelength>())
	,clock(std::make_shared<Native::Controller::ControllerTxExList::Clock>())
{
    cablelength->parent = this;

    clock->parent = this;

    yang_name = "controller-tx-ex-list"; yang_parent_name = "controller";
}

Native::Controller::ControllerTxExList::~ControllerTxExList()
{
}

bool Native::Controller::ControllerTxExList::has_data() const
{
    for (std::size_t index=0; index<channel_group.size(); index++)
    {
        if(channel_group[index]->has_data())
            return true;
    }
    return name.is_set
	|| number.is_set
	|| atm.is_set
	|| framing.is_set
	|| linecode.is_set
	|| (cablelength !=  nullptr && cablelength->has_data())
	|| (clock !=  nullptr && clock->has_data());
}

bool Native::Controller::ControllerTxExList::has_operation() const
{
    for (std::size_t index=0; index<channel_group.size(); index++)
    {
        if(channel_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(number.operation)
	|| is_set(atm.operation)
	|| is_set(framing.operation)
	|| is_set(linecode.operation)
	|| (cablelength !=  nullptr && cablelength->has_operation())
	|| (clock !=  nullptr && clock->has_operation());
}

std::string Native::Controller::ControllerTxExList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:controller-tx-ex-list" <<"[name='" <<name <<"']" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::ControllerTxExList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (linecode.is_set || is_set(linecode.operation)) leaf_name_data.push_back(linecode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cablelength")
    {
        if(cablelength == nullptr)
        {
            cablelength = std::make_shared<Native::Controller::ControllerTxExList::Cablelength>();
        }
        return cablelength;
    }

    if(child_yang_name == "channel-group")
    {
        for(auto const & c : channel_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::ControllerTxExList::ChannelGroup>();
        c->parent = this;
        channel_group.push_back(c);
        return c;
    }

    if(child_yang_name == "clock")
    {
        if(clock == nullptr)
        {
            clock = std::make_shared<Native::Controller::ControllerTxExList::Clock>();
        }
        return clock;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cablelength != nullptr)
    {
        children["cablelength"] = cablelength;
    }

    for (auto const & c : channel_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(clock != nullptr)
    {
        children["clock"] = clock;
    }

    return children;
}

void Native::Controller::ControllerTxExList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "atm")
    {
        atm = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
    if(value_path == "linecode")
    {
        linecode = value;
    }
}

Native::Controller::ControllerTxExList::Clock::Clock()
    :
    source(std::make_shared<Native::Controller::ControllerTxExList::Clock::Source>())
{
    source->parent = this;

    yang_name = "clock"; yang_parent_name = "controller-tx-ex-list";
}

Native::Controller::ControllerTxExList::Clock::~Clock()
{
}

bool Native::Controller::ControllerTxExList::Clock::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Controller::ControllerTxExList::Clock::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Controller::ControllerTxExList::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";

    return path_buffer.str();

}

const EntityPath Native::Controller::ControllerTxExList::Clock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clock' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Controller::ControllerTxExList::Clock::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Controller::ControllerTxExList::Clock::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::ControllerTxExList::Clock::Source::Source()
    :
    internal{YType::empty, "internal"},
    loop_timed{YType::empty, "loop-timed"}
    	,
    line(nullptr) // presence node
{
    yang_name = "source"; yang_parent_name = "clock";
}

Native::Controller::ControllerTxExList::Clock::Source::~Source()
{
}

bool Native::Controller::ControllerTxExList::Clock::Source::has_data() const
{
    return internal.is_set
	|| loop_timed.is_set
	|| (line !=  nullptr && line->has_data());
}

bool Native::Controller::ControllerTxExList::Clock::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(internal.operation)
	|| is_set(loop_timed.operation)
	|| (line !=  nullptr && line->has_operation());
}

std::string Native::Controller::ControllerTxExList::Clock::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Controller::ControllerTxExList::Clock::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (loop_timed.is_set || is_set(loop_timed.operation)) leaf_name_data.push_back(loop_timed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<Native::Controller::ControllerTxExList::Clock::Source::Line>();
        }
        return line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line != nullptr)
    {
        children["line"] = line;
    }

    return children;
}

void Native::Controller::ControllerTxExList::Clock::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal")
    {
        internal = value;
    }
    if(value_path == "loop-timed")
    {
        loop_timed = value;
    }
}

Native::Controller::ControllerTxExList::Clock::Source::Line::Line()
    :
    line_mode{YType::enumeration, "line-mode"}
{
    yang_name = "line"; yang_parent_name = "source";
}

Native::Controller::ControllerTxExList::Clock::Source::Line::~Line()
{
}

bool Native::Controller::ControllerTxExList::Clock::Source::Line::has_data() const
{
    return line_mode.is_set;
}

bool Native::Controller::ControllerTxExList::Clock::Source::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_mode.operation);
}

std::string Native::Controller::ControllerTxExList::Clock::Source::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

const EntityPath Native::Controller::ControllerTxExList::Clock::Source::Line::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Line' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_mode.is_set || is_set(line_mode.operation)) leaf_name_data.push_back(line_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock::Source::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock::Source::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::Clock::Source::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-mode")
    {
        line_mode = value;
    }
}

Native::Controller::ControllerTxExList::Cablelength::Cablelength()
    :
    long_{YType::str, "long"},
    short{YType::str, "short"}
{
    yang_name = "cablelength"; yang_parent_name = "controller-tx-ex-list";
}

Native::Controller::ControllerTxExList::Cablelength::~Cablelength()
{
}

bool Native::Controller::ControllerTxExList::Cablelength::has_data() const
{
    return long_.is_set
	|| short.is_set;
}

bool Native::Controller::ControllerTxExList::Cablelength::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation)
	|| is_set(short.operation);
}

std::string Native::Controller::ControllerTxExList::Cablelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cablelength";

    return path_buffer.str();

}

const EntityPath Native::Controller::ControllerTxExList::Cablelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cablelength' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short.is_set || is_set(short.operation)) leaf_name_data.push_back(short.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Cablelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Cablelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::Cablelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
    if(value_path == "short")
    {
        short = value;
    }
}

Native::Controller::ControllerTxExList::ChannelGroup::ChannelGroup()
    :
    number{YType::uint8, "number"},
    timeslots{YType::str, "timeslots"}
{
    yang_name = "channel-group"; yang_parent_name = "controller-tx-ex-list";
}

Native::Controller::ControllerTxExList::ChannelGroup::~ChannelGroup()
{
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_data() const
{
    for (auto const & leaf : timeslots.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return number.is_set;
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_operation() const
{
    for (auto const & leaf : timeslots.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(timeslots.operation);
}

std::string Native::Controller::ControllerTxExList::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::ControllerTxExList::ChannelGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChannelGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());

    auto timeslots_name_datas = timeslots.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timeslots_name_datas.begin(), timeslots_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::ChannelGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "timeslots")
    {
        timeslots.append(value);
    }
}

Native::Controller::Cellular::Cellular()
    :
    id{YType::str, "id"}
    	,
    lte(std::make_shared<Native::Controller::Cellular::Lte>())
{
    lte->parent = this;

    yang_name = "Cellular"; yang_parent_name = "controller";
}

Native::Controller::Cellular::~Cellular()
{
}

bool Native::Controller::Cellular::has_data() const
{
    return id.is_set
	|| (lte !=  nullptr && lte->has_data());
}

bool Native::Controller::Cellular::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lte !=  nullptr && lte->has_operation());
}

std::string Native::Controller::Cellular::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:Cellular" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Cellular::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Cellular::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lte")
    {
        if(lte == nullptr)
        {
            lte = std::make_shared<Native::Controller::Cellular::Lte>();
        }
        return lte;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lte != nullptr)
    {
        children["lte"] = lte;
    }

    return children;
}

void Native::Controller::Cellular::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Controller::Cellular::Lte::Lte()
    :
    modem(std::make_shared<Native::Controller::Cellular::Lte::Modem>())
{
    modem->parent = this;

    yang_name = "lte"; yang_parent_name = "Cellular";
}

Native::Controller::Cellular::Lte::~Lte()
{
}

bool Native::Controller::Cellular::Lte::has_data() const
{
    return (modem !=  nullptr && modem->has_data());
}

bool Native::Controller::Cellular::Lte::has_operation() const
{
    return is_set(operation)
	|| (modem !=  nullptr && modem->has_operation());
}

std::string Native::Controller::Cellular::Lte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lte";

    return path_buffer.str();

}

const EntityPath Native::Controller::Cellular::Lte::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lte' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Controller::Cellular::Lte::Modem>();
        }
        return modem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    return children;
}

void Native::Controller::Cellular::Lte::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Cellular::Lte::Modem::Modem()
    :
    link_recovery(std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery>())
{
    link_recovery->parent = this;

    yang_name = "modem"; yang_parent_name = "lte";
}

Native::Controller::Cellular::Lte::Modem::~Modem()
{
}

bool Native::Controller::Cellular::Lte::Modem::has_data() const
{
    return (link_recovery !=  nullptr && link_recovery->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::has_operation() const
{
    return is_set(operation)
	|| (link_recovery !=  nullptr && link_recovery->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";

    return path_buffer.str();

}

const EntityPath Native::Controller::Cellular::Lte::Modem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-recovery")
    {
        if(link_recovery == nullptr)
        {
            link_recovery = std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery>();
        }
        return link_recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_recovery != nullptr)
    {
        children["link-recovery"] = link_recovery;
    }

    return children;
}

void Native::Controller::Cellular::Lte::Modem::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::LinkRecovery()
    :
    debounce_count{YType::uint32, "debounce-count"},
    monitor_timer{YType::uint32, "monitor-timer"},
    wait_timer{YType::uint32, "wait-timer"}
    	,
    rssi(std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi>())
{
    rssi->parent = this;

    yang_name = "link-recovery"; yang_parent_name = "modem";
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::~LinkRecovery()
{
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_data() const
{
    return debounce_count.is_set
	|| monitor_timer.is_set
	|| wait_timer.is_set
	|| (rssi !=  nullptr && rssi->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(monitor_timer.operation)
	|| is_set(wait_timer.operation)
	|| (rssi !=  nullptr && rssi->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-recovery";

    return path_buffer.str();

}

const EntityPath Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkRecovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (monitor_timer.is_set || is_set(monitor_timer.operation)) leaf_name_data.push_back(monitor_timer.get_name_leafdata());
    if (wait_timer.is_set || is_set(wait_timer.operation)) leaf_name_data.push_back(wait_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssi")
    {
        if(rssi == nullptr)
        {
            rssi = std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi>();
        }
        return rssi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rssi != nullptr)
    {
        children["rssi"] = rssi;
    }

    return children;
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "monitor-timer")
    {
        monitor_timer = value;
    }
    if(value_path == "wait-timer")
    {
        wait_timer = value;
    }
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::Rssi()
    :
    onset_threshold{YType::int32, "onset-threshold"}
{
    yang_name = "rssi"; yang_parent_name = "link-recovery";
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::~Rssi()
{
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_data() const
{
    return onset_threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_operation() const
{
    return is_set(operation)
	|| is_set(onset_threshold.operation);
}

std::string Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssi";

    return path_buffer.str();

}

const EntityPath Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rssi' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onset_threshold.is_set || is_set(onset_threshold.operation)) leaf_name_data.push_back(onset_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "onset-threshold")
    {
        onset_threshold = value;
    }
}

Native::Controller::Sonet::Sonet()
    :
    name{YType::str, "name"},
    framing{YType::enumeration, "framing"},
    shutdown{YType::empty, "shutdown"}
    	,
    aps(std::make_shared<Native::Controller::Sonet::Aps>())
	,au_4_atm(std::make_shared<Native::Controller::Sonet::Au4Atm>())
	,aug(std::make_shared<Native::Controller::Sonet::Aug>())
	,clock(std::make_shared<Native::Controller::Sonet::Clock>())
{
    aps->parent = this;

    au_4_atm->parent = this;

    aug->parent = this;

    clock->parent = this;

    yang_name = "SONET"; yang_parent_name = "controller";
}

Native::Controller::Sonet::~Sonet()
{
}

bool Native::Controller::Sonet::has_data() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_data())
            return true;
    }
    return name.is_set
	|| framing.is_set
	|| shutdown.is_set
	|| (aps !=  nullptr && aps->has_data())
	|| (au_4_atm !=  nullptr && au_4_atm->has_data())
	|| (aug !=  nullptr && aug->has_data())
	|| (clock !=  nullptr && clock->has_data());
}

bool Native::Controller::Sonet::has_operation() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(framing.operation)
	|| is_set(shutdown.operation)
	|| (aps !=  nullptr && aps->has_operation())
	|| (au_4_atm !=  nullptr && au_4_atm->has_operation())
	|| (aug !=  nullptr && aug->has_operation())
	|| (clock !=  nullptr && clock->has_operation());
}

std::string Native::Controller::Sonet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:SONET" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<Native::Controller::Sonet::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "au-3")
    {
        for(auto const & c : au_3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet::Au3>();
        c->parent = this;
        au_3.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4")
    {
        for(auto const & c : au_4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet::Au4>();
        c->parent = this;
        au_4.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4-atm")
    {
        if(au_4_atm == nullptr)
        {
            au_4_atm = std::make_shared<Native::Controller::Sonet::Au4Atm>();
        }
        return au_4_atm;
    }

    if(child_yang_name == "aug")
    {
        if(aug == nullptr)
        {
            aug = std::make_shared<Native::Controller::Sonet::Aug>();
        }
        return aug;
    }

    if(child_yang_name == "clock")
    {
        if(clock == nullptr)
        {
            clock = std::make_shared<Native::Controller::Sonet::Clock>();
        }
        return clock;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    for (auto const & c : au_3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : au_4)
    {
        children[c->get_segment_path()] = c;
    }

    if(au_4_atm != nullptr)
    {
        children["au-4-atm"] = au_4_atm;
    }

    if(aug != nullptr)
    {
        children["aug"] = aug;
    }

    if(clock != nullptr)
    {
        children["clock"] = clock;
    }

    return children;
}

void Native::Controller::Sonet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Controller::Sonet::Clock::Clock()
    :
    source{YType::enumeration, "source"}
{
    yang_name = "clock"; yang_parent_name = "SONET";
}

Native::Controller::Sonet::Clock::~Clock()
{
}

bool Native::Controller::Sonet::Clock::has_data() const
{
    return source.is_set;
}

bool Native::Controller::Sonet::Clock::has_operation() const
{
    return is_set(operation)
	|| is_set(source.operation);
}

std::string Native::Controller::Sonet::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Clock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clock' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Clock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source")
    {
        source = value;
    }
}

Native::Controller::Sonet::Aug::Aug()
    :
    mapping{YType::enumeration, "mapping"}
{
    yang_name = "aug"; yang_parent_name = "SONET";
}

Native::Controller::Sonet::Aug::~Aug()
{
}

bool Native::Controller::Sonet::Aug::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::Sonet::Aug::has_operation() const
{
    return is_set(operation)
	|| is_set(mapping.operation);
}

std::string Native::Controller::Sonet::Aug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aug";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Aug::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aug' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.operation)) leaf_name_data.push_back(mapping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Aug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Aug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Aug::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mapping")
    {
        mapping = value;
    }
}

Native::Controller::Sonet::Au3::Au3()
    :
    number{YType::int8, "number"}
    	,
    mode(std::make_shared<Native::Controller::Sonet::Au3::Mode>())
	,overhead(std::make_shared<Native::Controller::Sonet::Au3::Overhead>())
{
    mode->parent = this;

    overhead->parent = this;

    yang_name = "au-3"; yang_parent_name = "SONET";
}

Native::Controller::Sonet::Au3::~Au3()
{
}

bool Native::Controller::Sonet::Au3::has_data() const
{
    return number.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (overhead !=  nullptr && overhead->has_data());
}

bool Native::Controller::Sonet::Au3::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (mode !=  nullptr && mode->has_operation())
	|| (overhead !=  nullptr && overhead->has_operation());
}

std::string Native::Controller::Sonet::Au3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-3" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Au3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::Sonet::Au3::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "overhead")
    {
        if(overhead == nullptr)
        {
            overhead = std::make_shared<Native::Controller::Sonet::Au3::Overhead>();
        }
        return overhead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(overhead != nullptr)
    {
        children["overhead"] = overhead;
    }

    return children;
}

void Native::Controller::Sonet::Au3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Controller::Sonet::Au3::Overhead::Overhead()
    :
    byte{YType::enumeration, "byte"},
    length{YType::uint8, "length"}
{
    yang_name = "overhead"; yang_parent_name = "au-3";
}

Native::Controller::Sonet::Au3::Overhead::~Overhead()
{
}

bool Native::Controller::Sonet::Au3::Overhead::has_data() const
{
    return byte.is_set
	|| length.is_set;
}

bool Native::Controller::Sonet::Au3::Overhead::has_operation() const
{
    return is_set(operation)
	|| is_set(byte.operation)
	|| is_set(length.operation);
}

std::string Native::Controller::Sonet::Au3::Overhead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overhead";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au3::Overhead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Overhead' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte.is_set || is_set(byte.operation)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au3::Overhead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au3::Overhead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au3::Overhead::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte")
    {
        byte = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
}

Native::Controller::Sonet::Au3::Mode::Mode()
    :
    mapping{YType::enumeration, "mapping"}
{
    yang_name = "mode"; yang_parent_name = "au-3";
}

Native::Controller::Sonet::Au3::Mode::~Mode()
{
}

bool Native::Controller::Sonet::Au3::Mode::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::Sonet::Au3::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(mapping.operation);
}

std::string Native::Controller::Sonet::Au3::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au3::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.operation)) leaf_name_data.push_back(mapping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au3::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au3::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au3::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mapping")
    {
        mapping = value;
    }
}

Native::Controller::Sonet::Au4Atm::Au4Atm()
    :
    au_4(std::make_shared<Native::Controller::Sonet::Au4Atm::Au4>())
{
    au_4->parent = this;

    yang_name = "au-4-atm"; yang_parent_name = "SONET";
}

Native::Controller::Sonet::Au4Atm::~Au4Atm()
{
}

bool Native::Controller::Sonet::Au4Atm::has_data() const
{
    return (au_4 !=  nullptr && au_4->has_data());
}

bool Native::Controller::Sonet::Au4Atm::has_operation() const
{
    return is_set(operation)
	|| (au_4 !=  nullptr && au_4->has_operation());
}

std::string Native::Controller::Sonet::Au4Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4-atm";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Au4Atm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "au-4")
    {
        if(au_4 == nullptr)
        {
            au_4 = std::make_shared<Native::Controller::Sonet::Au4Atm::Au4>();
        }
        return au_4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(au_4 != nullptr)
    {
        children["au-4"] = au_4;
    }

    return children;
}

void Native::Controller::Sonet::Au4Atm::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Sonet::Au4Atm::Au4::Au4()
    :
    atm{YType::empty, "atm"},
    number{YType::int8, "number"}
{
    yang_name = "au-4"; yang_parent_name = "au-4-atm";
}

Native::Controller::Sonet::Au4Atm::Au4::~Au4()
{
}

bool Native::Controller::Sonet::Au4Atm::Au4::has_data() const
{
    return atm.is_set
	|| number.is_set;
}

bool Native::Controller::Sonet::Au4Atm::Au4::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation)
	|| is_set(number.operation);
}

std::string Native::Controller::Sonet::Au4Atm::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4Atm::Au4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Au4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4Atm::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4Atm::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au4Atm::Au4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm")
    {
        atm = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Controller::Sonet::Au4::Au4()
    :
    number{YType::int8, "number"},
    tug_3{YType::int8, "tug-3"},
    cem_group{YType::int32, "cem-group"},
    framing{YType::enumeration, "framing"},
    mode{YType::enumeration, "mode"},
    unframed{YType::empty, "unframed"}
    	,
    cem_group_atm(std::make_shared<Native::Controller::Sonet::Au4::CemGroupAtm>())
	,cem_group_timeslots(std::make_shared<Native::Controller::Sonet::Au4::CemGroupTimeslots>())
	,cem_group_unframed(std::make_shared<Native::Controller::Sonet::Au4::CemGroupUnframed>())
	,channel_group_timeslots(std::make_shared<Native::Controller::Sonet::Au4::ChannelGroupTimeslots>())
	,framing_unframed(std::make_shared<Native::Controller::Sonet::Au4::FramingUnframed>())
	,ima_group(std::make_shared<Native::Controller::Sonet::Au4::ImaGroup>())
{
    cem_group_atm->parent = this;

    cem_group_timeslots->parent = this;

    cem_group_unframed->parent = this;

    channel_group_timeslots->parent = this;

    framing_unframed->parent = this;

    ima_group->parent = this;

    yang_name = "au-4"; yang_parent_name = "SONET";
}

Native::Controller::Sonet::Au4::~Au4()
{
}

bool Native::Controller::Sonet::Au4::has_data() const
{
    return number.is_set
	|| tug_3.is_set
	|| cem_group.is_set
	|| framing.is_set
	|| mode.is_set
	|| unframed.is_set
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_data())
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_data())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_data())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_data())
	|| (framing_unframed !=  nullptr && framing_unframed->has_data())
	|| (ima_group !=  nullptr && ima_group->has_data());
}

bool Native::Controller::Sonet::Au4::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(tug_3.operation)
	|| is_set(cem_group.operation)
	|| is_set(framing.operation)
	|| is_set(mode.operation)
	|| is_set(unframed.operation)
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_operation())
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_operation())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_operation())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_operation())
	|| (framing_unframed !=  nullptr && framing_unframed->has_operation())
	|| (ima_group !=  nullptr && ima_group->has_operation());
}

std::string Native::Controller::Sonet::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4" <<"[number='" <<number <<"']" <<"[tug-3='" <<tug_3 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Au4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (tug_3.is_set || is_set(tug_3.operation)) leaf_name_data.push_back(tug_3.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.operation)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.operation)) leaf_name_data.push_back(unframed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cem-group-atm")
    {
        if(cem_group_atm == nullptr)
        {
            cem_group_atm = std::make_shared<Native::Controller::Sonet::Au4::CemGroupAtm>();
        }
        return cem_group_atm;
    }

    if(child_yang_name == "cem-group-timeslots")
    {
        if(cem_group_timeslots == nullptr)
        {
            cem_group_timeslots = std::make_shared<Native::Controller::Sonet::Au4::CemGroupTimeslots>();
        }
        return cem_group_timeslots;
    }

    if(child_yang_name == "cem-group-unframed")
    {
        if(cem_group_unframed == nullptr)
        {
            cem_group_unframed = std::make_shared<Native::Controller::Sonet::Au4::CemGroupUnframed>();
        }
        return cem_group_unframed;
    }

    if(child_yang_name == "channel-group-timeslots")
    {
        if(channel_group_timeslots == nullptr)
        {
            channel_group_timeslots = std::make_shared<Native::Controller::Sonet::Au4::ChannelGroupTimeslots>();
        }
        return channel_group_timeslots;
    }

    if(child_yang_name == "framing-unframed")
    {
        if(framing_unframed == nullptr)
        {
            framing_unframed = std::make_shared<Native::Controller::Sonet::Au4::FramingUnframed>();
        }
        return framing_unframed;
    }

    if(child_yang_name == "ima-group")
    {
        if(ima_group == nullptr)
        {
            ima_group = std::make_shared<Native::Controller::Sonet::Au4::ImaGroup>();
        }
        return ima_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cem_group_atm != nullptr)
    {
        children["cem-group-atm"] = cem_group_atm;
    }

    if(cem_group_timeslots != nullptr)
    {
        children["cem-group-timeslots"] = cem_group_timeslots;
    }

    if(cem_group_unframed != nullptr)
    {
        children["cem-group-unframed"] = cem_group_unframed;
    }

    if(channel_group_timeslots != nullptr)
    {
        children["channel-group-timeslots"] = channel_group_timeslots;
    }

    if(framing_unframed != nullptr)
    {
        children["framing-unframed"] = framing_unframed;
    }

    if(ima_group != nullptr)
    {
        children["ima-group"] = ima_group;
    }

    return children;
}

void Native::Controller::Sonet::Au4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "tug-3")
    {
        tug_3 = value;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "unframed")
    {
        unframed = value;
    }
}

Native::Controller::Sonet::Au4::CemGroupTimeslots::CemGroupTimeslots()
{
    yang_name = "cem-group-timeslots"; yang_parent_name = "au-4";
}

Native::Controller::Sonet::Au4::CemGroupTimeslots::~CemGroupTimeslots()
{
}

bool Native::Controller::Sonet::Au4::CemGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::Sonet::Au4::CemGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::Sonet::Au4::CemGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-timeslots";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::CemGroupTimeslots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CemGroupTimeslots' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::CemGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::CemGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::Sonet::Au4::CemGroupTimeslots::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    timeslots{YType::str, "timeslots"}
{
    yang_name = "tug-2"; yang_parent_name = "cem-group-timeslots";
}

Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(cem_group.operation)
	|| is_set(timeslots.operation);
}

std::string Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.operation)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.operation)) leaf_name_data.push_back(timeslots.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au4::CemGroupTimeslots::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
    }
}

Native::Controller::Sonet::Au4::ChannelGroupTimeslots::ChannelGroupTimeslots()
{
    yang_name = "channel-group-timeslots"; yang_parent_name = "au-4";
}

Native::Controller::Sonet::Au4::ChannelGroupTimeslots::~ChannelGroupTimeslots()
{
}

bool Native::Controller::Sonet::Au4::ChannelGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::Sonet::Au4::ChannelGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::Sonet::Au4::ChannelGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group-timeslots";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::ChannelGroupTimeslots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChannelGroupTimeslots' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::ChannelGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::ChannelGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::Sonet::Au4::ChannelGroupTimeslots::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    channel_group{YType::int32, "channel-group"},
    timeslots{YType::str, "timeslots"}
{
    yang_name = "tug-2"; yang_parent_name = "channel-group-timeslots";
}

Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| channel_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(channel_group.operation)
	|| is_set(timeslots.operation);
}

std::string Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[channel-group='" <<channel_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (channel_group.is_set || is_set(channel_group.operation)) leaf_name_data.push_back(channel_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.operation)) leaf_name_data.push_back(timeslots.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au4::ChannelGroupTimeslots::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "channel-group")
    {
        channel_group = value;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
    }
}

Native::Controller::Sonet::Au4::CemGroupUnframed::CemGroupUnframed()
{
    yang_name = "cem-group-unframed"; yang_parent_name = "au-4";
}

Native::Controller::Sonet::Au4::CemGroupUnframed::~CemGroupUnframed()
{
}

bool Native::Controller::Sonet::Au4::CemGroupUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::Sonet::Au4::CemGroupUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::Sonet::Au4::CemGroupUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-unframed";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::CemGroupUnframed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CemGroupUnframed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::CemGroupUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::CemGroupUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::Sonet::Au4::CemGroupUnframed::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"}
{
    yang_name = "tug-2"; yang_parent_name = "cem-group-unframed";
}

Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| unframed.is_set;
}

bool Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(cem_group.operation)
	|| is_set(unframed.operation);
}

std::string Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.operation)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.operation)) leaf_name_data.push_back(unframed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au4::CemGroupUnframed::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
    }
    if(value_path == "unframed")
    {
        unframed = value;
    }
}

Native::Controller::Sonet::Au4::FramingUnframed::FramingUnframed()
{
    yang_name = "framing-unframed"; yang_parent_name = "au-4";
}

Native::Controller::Sonet::Au4::FramingUnframed::~FramingUnframed()
{
}

bool Native::Controller::Sonet::Au4::FramingUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::Sonet::Au4::FramingUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::Sonet::Au4::FramingUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framing-unframed";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::FramingUnframed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FramingUnframed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::FramingUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet::Au4::FramingUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::FramingUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::Sonet::Au4::FramingUnframed::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Sonet::Au4::FramingUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    framing{YType::enumeration, "framing"}
{
    yang_name = "tug-2"; yang_parent_name = "framing-unframed";
}

Native::Controller::Sonet::Au4::FramingUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::Sonet::Au4::FramingUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| framing.is_set;
}

bool Native::Controller::Sonet::Au4::FramingUnframed::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(framing.operation);
}

std::string Native::Controller::Sonet::Au4::FramingUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::FramingUnframed::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::FramingUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::FramingUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au4::FramingUnframed::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
}

Native::Controller::Sonet::Au4::CemGroupAtm::CemGroupAtm()
{
    yang_name = "cem-group-atm"; yang_parent_name = "au-4";
}

Native::Controller::Sonet::Au4::CemGroupAtm::~CemGroupAtm()
{
}

bool Native::Controller::Sonet::Au4::CemGroupAtm::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::Sonet::Au4::CemGroupAtm::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::Sonet::Au4::CemGroupAtm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-atm";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::CemGroupAtm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CemGroupAtm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::CemGroupAtm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet::Au4::CemGroupAtm::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::CemGroupAtm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::Sonet::Au4::CemGroupAtm::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    atm{YType::empty, "atm"}
{
    yang_name = "tug-2"; yang_parent_name = "cem-group-atm";
}

Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::~Tug2()
{
}

bool Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| atm.is_set;
}

bool Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(atm.operation);
}

std::string Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au4::CemGroupAtm::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "atm")
    {
        atm = value;
    }
}

Native::Controller::Sonet::Au4::ImaGroup::ImaGroup()
{
    yang_name = "ima-group"; yang_parent_name = "au-4";
}

Native::Controller::Sonet::Au4::ImaGroup::~ImaGroup()
{
}

bool Native::Controller::Sonet::Au4::ImaGroup::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::Sonet::Au4::ImaGroup::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::Sonet::Au4::ImaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-group";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::ImaGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImaGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::ImaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Sonet::Au4::ImaGroup::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::ImaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::Sonet::Au4::ImaGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::Sonet::Au4::ImaGroup::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    ima_group{YType::int32, "ima-group"}
{
    yang_name = "tug-2"; yang_parent_name = "ima-group";
}

Native::Controller::Sonet::Au4::ImaGroup::Tug2::~Tug2()
{
}

bool Native::Controller::Sonet::Au4::ImaGroup::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| ima_group.is_set;
}

bool Native::Controller::Sonet::Au4::ImaGroup::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(ima_group.operation);
}

std::string Native::Controller::Sonet::Au4::ImaGroup::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[ima-group='" <<ima_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Au4::ImaGroup::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (ima_group.is_set || is_set(ima_group.operation)) leaf_name_data.push_back(ima_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Au4::ImaGroup::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Au4::ImaGroup::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Au4::ImaGroup::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "ima-group")
    {
        ima_group = value;
    }
}

Native::Controller::Sonet::Aps::Aps()
    :
    hspw_icrm_grp{YType::uint8, "hspw-icrm-grp"},
    working{YType::int8, "working"}
    	,
    group(std::make_shared<Native::Controller::Sonet::Aps::Group>())
	,interchassis(std::make_shared<Native::Controller::Sonet::Aps::Interchassis>())
	,protect(std::make_shared<Native::Controller::Sonet::Aps::Protect>())
{
    group->parent = this;

    interchassis->parent = this;

    protect->parent = this;

    yang_name = "aps"; yang_parent_name = "SONET";
}

Native::Controller::Sonet::Aps::~Aps()
{
}

bool Native::Controller::Sonet::Aps::has_data() const
{
    return hspw_icrm_grp.is_set
	|| working.is_set
	|| (group !=  nullptr && group->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data())
	|| (protect !=  nullptr && protect->has_data());
}

bool Native::Controller::Sonet::Aps::has_operation() const
{
    return is_set(operation)
	|| is_set(hspw_icrm_grp.operation)
	|| is_set(working.operation)
	|| (group !=  nullptr && group->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation())
	|| (protect !=  nullptr && protect->has_operation());
}

std::string Native::Controller::Sonet::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Aps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hspw_icrm_grp.is_set || is_set(hspw_icrm_grp.operation)) leaf_name_data.push_back(hspw_icrm_grp.get_name_leafdata());
    if (working.is_set || is_set(working.operation)) leaf_name_data.push_back(working.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Controller::Sonet::Aps::Group>();
        }
        return group;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Controller::Sonet::Aps::Interchassis>();
        }
        return interchassis;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<Native::Controller::Sonet::Aps::Protect>();
        }
        return protect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    if(protect != nullptr)
    {
        children["protect"] = protect;
    }

    return children;
}

void Native::Controller::Sonet::Aps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp = value;
    }
    if(value_path == "working")
    {
        working = value;
    }
}

Native::Controller::Sonet::Aps::Group::Group()
    :
    acr{YType::int8, "acr"},
    group_number{YType::uint8, "group-number"}
{
    yang_name = "group"; yang_parent_name = "aps";
}

Native::Controller::Sonet::Aps::Group::~Group()
{
}

bool Native::Controller::Sonet::Aps::Group::has_data() const
{
    return acr.is_set
	|| group_number.is_set;
}

bool Native::Controller::Sonet::Aps::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(acr.operation)
	|| is_set(group_number.operation);
}

std::string Native::Controller::Sonet::Aps::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Aps::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.operation)) leaf_name_data.push_back(acr.get_name_leafdata());
    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Aps::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Aps::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Aps::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr")
    {
        acr = value;
    }
    if(value_path == "group-number")
    {
        group_number = value;
    }
}

Native::Controller::Sonet::Aps::Protect::Protect()
    :
    ip_addr{YType::str, "ip-addr"},
    number{YType::int8, "number"}
{
    yang_name = "protect"; yang_parent_name = "aps";
}

Native::Controller::Sonet::Aps::Protect::~Protect()
{
}

bool Native::Controller::Sonet::Aps::Protect::has_data() const
{
    return ip_addr.is_set
	|| number.is_set;
}

bool Native::Controller::Sonet::Aps::Protect::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(number.operation);
}

std::string Native::Controller::Sonet::Aps::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Aps::Protect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Aps::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Aps::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Aps::Protect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Controller::Sonet::Aps::Interchassis::Interchassis()
    :
    group{YType::uint8, "group"}
{
    yang_name = "interchassis"; yang_parent_name = "aps";
}

Native::Controller::Sonet::Aps::Interchassis::~Interchassis()
{
}

bool Native::Controller::Sonet::Aps::Interchassis::has_data() const
{
    return group.is_set;
}

bool Native::Controller::Sonet::Aps::Interchassis::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Controller::Sonet::Aps::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";

    return path_buffer.str();

}

const EntityPath Native::Controller::Sonet::Aps::Interchassis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interchassis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::Sonet::Aps::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Sonet::Aps::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Sonet::Aps::Interchassis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Controller::SonetAcr::SonetAcr()
    :
    name{YType::str, "name"},
    framing{YType::enumeration, "framing"},
    shutdown{YType::empty, "shutdown"}
    	,
    aps(std::make_shared<Native::Controller::SonetAcr::Aps>())
	,au_4_atm(std::make_shared<Native::Controller::SonetAcr::Au4Atm>())
	,aug(std::make_shared<Native::Controller::SonetAcr::Aug>())
	,clock(std::make_shared<Native::Controller::SonetAcr::Clock>())
{
    aps->parent = this;

    au_4_atm->parent = this;

    aug->parent = this;

    clock->parent = this;

    yang_name = "SONET-ACR"; yang_parent_name = "controller";
}

Native::Controller::SonetAcr::~SonetAcr()
{
}

bool Native::Controller::SonetAcr::has_data() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_data())
            return true;
    }
    return name.is_set
	|| framing.is_set
	|| shutdown.is_set
	|| (aps !=  nullptr && aps->has_data())
	|| (au_4_atm !=  nullptr && au_4_atm->has_data())
	|| (aug !=  nullptr && aug->has_data())
	|| (clock !=  nullptr && clock->has_data());
}

bool Native::Controller::SonetAcr::has_operation() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(framing.operation)
	|| is_set(shutdown.operation)
	|| (aps !=  nullptr && aps->has_operation())
	|| (au_4_atm !=  nullptr && au_4_atm->has_operation())
	|| (aug !=  nullptr && aug->has_operation())
	|| (clock !=  nullptr && clock->has_operation());
}

std::string Native::Controller::SonetAcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:SONET-ACR" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<Native::Controller::SonetAcr::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "au-3")
    {
        for(auto const & c : au_3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr::Au3>();
        c->parent = this;
        au_3.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4")
    {
        for(auto const & c : au_4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr::Au4>();
        c->parent = this;
        au_4.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4-atm")
    {
        if(au_4_atm == nullptr)
        {
            au_4_atm = std::make_shared<Native::Controller::SonetAcr::Au4Atm>();
        }
        return au_4_atm;
    }

    if(child_yang_name == "aug")
    {
        if(aug == nullptr)
        {
            aug = std::make_shared<Native::Controller::SonetAcr::Aug>();
        }
        return aug;
    }

    if(child_yang_name == "clock")
    {
        if(clock == nullptr)
        {
            clock = std::make_shared<Native::Controller::SonetAcr::Clock>();
        }
        return clock;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    for (auto const & c : au_3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : au_4)
    {
        children[c->get_segment_path()] = c;
    }

    if(au_4_atm != nullptr)
    {
        children["au-4-atm"] = au_4_atm;
    }

    if(aug != nullptr)
    {
        children["aug"] = aug;
    }

    if(clock != nullptr)
    {
        children["clock"] = clock;
    }

    return children;
}

void Native::Controller::SonetAcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Controller::SonetAcr::Clock::Clock()
    :
    source{YType::enumeration, "source"}
{
    yang_name = "clock"; yang_parent_name = "SONET-ACR";
}

Native::Controller::SonetAcr::Clock::~Clock()
{
}

bool Native::Controller::SonetAcr::Clock::has_data() const
{
    return source.is_set;
}

bool Native::Controller::SonetAcr::Clock::has_operation() const
{
    return is_set(operation)
	|| is_set(source.operation);
}

std::string Native::Controller::SonetAcr::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Clock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clock' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Clock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source")
    {
        source = value;
    }
}

Native::Controller::SonetAcr::Aug::Aug()
    :
    mapping{YType::enumeration, "mapping"}
{
    yang_name = "aug"; yang_parent_name = "SONET-ACR";
}

Native::Controller::SonetAcr::Aug::~Aug()
{
}

bool Native::Controller::SonetAcr::Aug::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SonetAcr::Aug::has_operation() const
{
    return is_set(operation)
	|| is_set(mapping.operation);
}

std::string Native::Controller::SonetAcr::Aug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aug";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Aug::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aug' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.operation)) leaf_name_data.push_back(mapping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Aug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Aug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Aug::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mapping")
    {
        mapping = value;
    }
}

Native::Controller::SonetAcr::Au3::Au3()
    :
    number{YType::int8, "number"}
    	,
    mode(std::make_shared<Native::Controller::SonetAcr::Au3::Mode>())
	,overhead(std::make_shared<Native::Controller::SonetAcr::Au3::Overhead>())
{
    mode->parent = this;

    overhead->parent = this;

    yang_name = "au-3"; yang_parent_name = "SONET-ACR";
}

Native::Controller::SonetAcr::Au3::~Au3()
{
}

bool Native::Controller::SonetAcr::Au3::has_data() const
{
    return number.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (overhead !=  nullptr && overhead->has_data());
}

bool Native::Controller::SonetAcr::Au3::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (mode !=  nullptr && mode->has_operation())
	|| (overhead !=  nullptr && overhead->has_operation());
}

std::string Native::Controller::SonetAcr::Au3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-3" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Au3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::SonetAcr::Au3::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "overhead")
    {
        if(overhead == nullptr)
        {
            overhead = std::make_shared<Native::Controller::SonetAcr::Au3::Overhead>();
        }
        return overhead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(overhead != nullptr)
    {
        children["overhead"] = overhead;
    }

    return children;
}

void Native::Controller::SonetAcr::Au3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Controller::SonetAcr::Au3::Overhead::Overhead()
    :
    byte{YType::enumeration, "byte"},
    length{YType::uint8, "length"}
{
    yang_name = "overhead"; yang_parent_name = "au-3";
}

Native::Controller::SonetAcr::Au3::Overhead::~Overhead()
{
}

bool Native::Controller::SonetAcr::Au3::Overhead::has_data() const
{
    return byte.is_set
	|| length.is_set;
}

bool Native::Controller::SonetAcr::Au3::Overhead::has_operation() const
{
    return is_set(operation)
	|| is_set(byte.operation)
	|| is_set(length.operation);
}

std::string Native::Controller::SonetAcr::Au3::Overhead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overhead";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au3::Overhead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Overhead' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte.is_set || is_set(byte.operation)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au3::Overhead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au3::Overhead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au3::Overhead::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte")
    {
        byte = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
}

Native::Controller::SonetAcr::Au3::Mode::Mode()
    :
    mapping{YType::enumeration, "mapping"}
{
    yang_name = "mode"; yang_parent_name = "au-3";
}

Native::Controller::SonetAcr::Au3::Mode::~Mode()
{
}

bool Native::Controller::SonetAcr::Au3::Mode::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SonetAcr::Au3::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(mapping.operation);
}

std::string Native::Controller::SonetAcr::Au3::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au3::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.operation)) leaf_name_data.push_back(mapping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au3::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au3::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au3::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mapping")
    {
        mapping = value;
    }
}

Native::Controller::SonetAcr::Au4Atm::Au4Atm()
    :
    au_4(std::make_shared<Native::Controller::SonetAcr::Au4Atm::Au4>())
{
    au_4->parent = this;

    yang_name = "au-4-atm"; yang_parent_name = "SONET-ACR";
}

Native::Controller::SonetAcr::Au4Atm::~Au4Atm()
{
}

bool Native::Controller::SonetAcr::Au4Atm::has_data() const
{
    return (au_4 !=  nullptr && au_4->has_data());
}

bool Native::Controller::SonetAcr::Au4Atm::has_operation() const
{
    return is_set(operation)
	|| (au_4 !=  nullptr && au_4->has_operation());
}

std::string Native::Controller::SonetAcr::Au4Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4-atm";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Au4Atm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "au-4")
    {
        if(au_4 == nullptr)
        {
            au_4 = std::make_shared<Native::Controller::SonetAcr::Au4Atm::Au4>();
        }
        return au_4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(au_4 != nullptr)
    {
        children["au-4"] = au_4;
    }

    return children;
}

void Native::Controller::SonetAcr::Au4Atm::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::SonetAcr::Au4Atm::Au4::Au4()
    :
    atm{YType::empty, "atm"},
    number{YType::int8, "number"}
{
    yang_name = "au-4"; yang_parent_name = "au-4-atm";
}

Native::Controller::SonetAcr::Au4Atm::Au4::~Au4()
{
}

bool Native::Controller::SonetAcr::Au4Atm::Au4::has_data() const
{
    return atm.is_set
	|| number.is_set;
}

bool Native::Controller::SonetAcr::Au4Atm::Au4::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation)
	|| is_set(number.operation);
}

std::string Native::Controller::SonetAcr::Au4Atm::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4Atm::Au4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Au4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4Atm::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4Atm::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au4Atm::Au4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm")
    {
        atm = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Controller::SonetAcr::Au4::Au4()
    :
    number{YType::int8, "number"},
    tug_3{YType::int8, "tug-3"},
    cem_group{YType::int32, "cem-group"},
    framing{YType::enumeration, "framing"},
    mode{YType::enumeration, "mode"},
    unframed{YType::empty, "unframed"}
    	,
    cem_group_atm(std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupAtm>())
	,cem_group_timeslots(std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupTimeslots>())
	,cem_group_unframed(std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupUnframed>())
	,channel_group_timeslots(std::make_shared<Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots>())
	,framing_unframed(std::make_shared<Native::Controller::SonetAcr::Au4::FramingUnframed>())
	,ima_group(std::make_shared<Native::Controller::SonetAcr::Au4::ImaGroup>())
{
    cem_group_atm->parent = this;

    cem_group_timeslots->parent = this;

    cem_group_unframed->parent = this;

    channel_group_timeslots->parent = this;

    framing_unframed->parent = this;

    ima_group->parent = this;

    yang_name = "au-4"; yang_parent_name = "SONET-ACR";
}

Native::Controller::SonetAcr::Au4::~Au4()
{
}

bool Native::Controller::SonetAcr::Au4::has_data() const
{
    return number.is_set
	|| tug_3.is_set
	|| cem_group.is_set
	|| framing.is_set
	|| mode.is_set
	|| unframed.is_set
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_data())
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_data())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_data())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_data())
	|| (framing_unframed !=  nullptr && framing_unframed->has_data())
	|| (ima_group !=  nullptr && ima_group->has_data());
}

bool Native::Controller::SonetAcr::Au4::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(tug_3.operation)
	|| is_set(cem_group.operation)
	|| is_set(framing.operation)
	|| is_set(mode.operation)
	|| is_set(unframed.operation)
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_operation())
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_operation())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_operation())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_operation())
	|| (framing_unframed !=  nullptr && framing_unframed->has_operation())
	|| (ima_group !=  nullptr && ima_group->has_operation());
}

std::string Native::Controller::SonetAcr::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4" <<"[number='" <<number <<"']" <<"[tug-3='" <<tug_3 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Au4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (tug_3.is_set || is_set(tug_3.operation)) leaf_name_data.push_back(tug_3.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.operation)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.operation)) leaf_name_data.push_back(unframed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cem-group-atm")
    {
        if(cem_group_atm == nullptr)
        {
            cem_group_atm = std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupAtm>();
        }
        return cem_group_atm;
    }

    if(child_yang_name == "cem-group-timeslots")
    {
        if(cem_group_timeslots == nullptr)
        {
            cem_group_timeslots = std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupTimeslots>();
        }
        return cem_group_timeslots;
    }

    if(child_yang_name == "cem-group-unframed")
    {
        if(cem_group_unframed == nullptr)
        {
            cem_group_unframed = std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupUnframed>();
        }
        return cem_group_unframed;
    }

    if(child_yang_name == "channel-group-timeslots")
    {
        if(channel_group_timeslots == nullptr)
        {
            channel_group_timeslots = std::make_shared<Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots>();
        }
        return channel_group_timeslots;
    }

    if(child_yang_name == "framing-unframed")
    {
        if(framing_unframed == nullptr)
        {
            framing_unframed = std::make_shared<Native::Controller::SonetAcr::Au4::FramingUnframed>();
        }
        return framing_unframed;
    }

    if(child_yang_name == "ima-group")
    {
        if(ima_group == nullptr)
        {
            ima_group = std::make_shared<Native::Controller::SonetAcr::Au4::ImaGroup>();
        }
        return ima_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cem_group_atm != nullptr)
    {
        children["cem-group-atm"] = cem_group_atm;
    }

    if(cem_group_timeslots != nullptr)
    {
        children["cem-group-timeslots"] = cem_group_timeslots;
    }

    if(cem_group_unframed != nullptr)
    {
        children["cem-group-unframed"] = cem_group_unframed;
    }

    if(channel_group_timeslots != nullptr)
    {
        children["channel-group-timeslots"] = channel_group_timeslots;
    }

    if(framing_unframed != nullptr)
    {
        children["framing-unframed"] = framing_unframed;
    }

    if(ima_group != nullptr)
    {
        children["ima-group"] = ima_group;
    }

    return children;
}

void Native::Controller::SonetAcr::Au4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "tug-3")
    {
        tug_3 = value;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "unframed")
    {
        unframed = value;
    }
}

Native::Controller::SonetAcr::Au4::CemGroupTimeslots::CemGroupTimeslots()
{
    yang_name = "cem-group-timeslots"; yang_parent_name = "au-4";
}

Native::Controller::SonetAcr::Au4::CemGroupTimeslots::~CemGroupTimeslots()
{
}

bool Native::Controller::SonetAcr::Au4::CemGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SonetAcr::Au4::CemGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::SonetAcr::Au4::CemGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-timeslots";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::CemGroupTimeslots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CemGroupTimeslots' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::CemGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::CemGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SonetAcr::Au4::CemGroupTimeslots::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    timeslots{YType::str, "timeslots"}
{
    yang_name = "tug-2"; yang_parent_name = "cem-group-timeslots";
}

Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(cem_group.operation)
	|| is_set(timeslots.operation);
}

std::string Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.operation)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.operation)) leaf_name_data.push_back(timeslots.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au4::CemGroupTimeslots::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
    }
}

Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::ChannelGroupTimeslots()
{
    yang_name = "channel-group-timeslots"; yang_parent_name = "au-4";
}

Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::~ChannelGroupTimeslots()
{
}

bool Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group-timeslots";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChannelGroupTimeslots' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    channel_group{YType::int32, "channel-group"},
    timeslots{YType::str, "timeslots"}
{
    yang_name = "tug-2"; yang_parent_name = "channel-group-timeslots";
}

Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| channel_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(channel_group.operation)
	|| is_set(timeslots.operation);
}

std::string Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[channel-group='" <<channel_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (channel_group.is_set || is_set(channel_group.operation)) leaf_name_data.push_back(channel_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.operation)) leaf_name_data.push_back(timeslots.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au4::ChannelGroupTimeslots::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "channel-group")
    {
        channel_group = value;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
    }
}

Native::Controller::SonetAcr::Au4::CemGroupUnframed::CemGroupUnframed()
{
    yang_name = "cem-group-unframed"; yang_parent_name = "au-4";
}

Native::Controller::SonetAcr::Au4::CemGroupUnframed::~CemGroupUnframed()
{
}

bool Native::Controller::SonetAcr::Au4::CemGroupUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SonetAcr::Au4::CemGroupUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::SonetAcr::Au4::CemGroupUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-unframed";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::CemGroupUnframed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CemGroupUnframed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::CemGroupUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::CemGroupUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SonetAcr::Au4::CemGroupUnframed::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"}
{
    yang_name = "tug-2"; yang_parent_name = "cem-group-unframed";
}

Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| unframed.is_set;
}

bool Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(cem_group.operation)
	|| is_set(unframed.operation);
}

std::string Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.operation)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.operation)) leaf_name_data.push_back(unframed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au4::CemGroupUnframed::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
    }
    if(value_path == "unframed")
    {
        unframed = value;
    }
}

Native::Controller::SonetAcr::Au4::FramingUnframed::FramingUnframed()
{
    yang_name = "framing-unframed"; yang_parent_name = "au-4";
}

Native::Controller::SonetAcr::Au4::FramingUnframed::~FramingUnframed()
{
}

bool Native::Controller::SonetAcr::Au4::FramingUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SonetAcr::Au4::FramingUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::SonetAcr::Au4::FramingUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framing-unframed";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::FramingUnframed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FramingUnframed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::FramingUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::FramingUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SonetAcr::Au4::FramingUnframed::set_value(const std::string & value_path, std::string value)
{
}

Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    framing{YType::enumeration, "framing"}
{
    yang_name = "tug-2"; yang_parent_name = "framing-unframed";
}

Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| framing.is_set;
}

bool Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(e1.operation)
	|| is_set(framing.operation);
}

std::string Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tug2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.operation)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "e1")
    {
        e1 = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
}

Native::Controller::SonetAcr::Au4::CemGroupAtm::CemGroupAtm()
{
    yang_name = "cem-group-atm"; yang_parent_name = "au-4";
}

Native::Controller::SonetAcr::Au4::CemGroupAtm::~CemGroupAtm()
{
}

bool Native::Controller::SonetAcr::Au4::CemGroupAtm::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SonetAcr::Au4::CemGroupAtm::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Controller::SonetAcr::Au4::CemGroupAtm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-atm";

    return path_buffer.str();

}

const EntityPath Native::Controller::SonetAcr::Au4::CemGroupAtm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CemGroupAtm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Controller::SonetAcr::Au4::CemGroupAtm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SonetAcr::Au4::CemGroupAtm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SonetAcr::Au4::CemGroupAtm::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Platform::TcamParityErrorEnum::enable {0, "enable"};
const Enum::YLeaf Native::Platform::TcamParityErrorEnum::disable {1, "disable"};

const Enum::YLeaf Native::Platform::Console::OutputEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Platform::Console::OutputEnum::serial {1, "serial"};
const Enum::YLeaf Native::Platform::Console::OutputEnum::virtual_ {2, "virtual"};

const Enum::YLeaf Native::Platform::Hardware::Lite::LicenseEnum::enable {0, "enable"};

const Enum::YLeaf Native::Platform::Hardware::Throughput::DisableEnum::internal_license {0, "internal-license"};

const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::KbpsEnum::Y_10000 {0, "10000"};
const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::KbpsEnum::Y_25000 {1, "25000"};
const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::KbpsEnum::Y_50000 {2, "50000"};

const Enum::YLeaf Native::Platform::Ipsec::GdoiEnum::accept_both {0, "accept-both"};

const Enum::YLeaf Native::Platform::Trace::Runtime::ProcessEnum::iomd {0, "iomd"};

const Enum::YLeaf Native::Platform::Trace::Runtime::ModuleEnum::all_modules {0, "all-modules"};

const Enum::YLeaf Native::Platform::Trace::Runtime::LevelEnum::info {0, "info"};

const Enum::YLeaf Native::Enable::LastResortEnum::password {0, "password"};
const Enum::YLeaf Native::Enable::LastResortEnum::succeed {1, "succeed"};

const Enum::YLeaf Native::Enable::Password::TypeEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Enable::Password::TypeEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Enable::Secret::TypeEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Enable::Secret::TypeEnum::Y_4 {1, "4"};
const Enum::YLeaf Native::Enable::Secret::TypeEnum::Y_5 {2, "5"};

const Enum::YLeaf Native::Archive::PathEnum::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Archive::PathEnum::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Archive::PathEnum::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Archive::PathEnum::harddisk__COLON__ {3, "harddisk:"};
const Enum::YLeaf Native::Archive::PathEnum::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Archive::PathEnum::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Archive::PathEnum::pram__COLON__ {6, "pram:"};
const Enum::YLeaf Native::Archive::PathEnum::rcp__COLON__ {7, "rcp:"};
const Enum::YLeaf Native::Archive::PathEnum::scp__COLON__ {8, "scp:"};
const Enum::YLeaf Native::Archive::PathEnum::tftp__COLON__ {9, "tftp:"};

const Enum::YLeaf Native::Archive::Log::Config::Notify::Syslog::ContenttypeEnum::plaintext {0, "plaintext"};
const Enum::YLeaf Native::Archive::Log::Config::Notify::Syslog::ContenttypeEnum::xml {1, "xml"};

const Enum::YLeaf Native::Username::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Username::Password::EncryptionEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Username::Secret::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Username::Secret::EncryptionEnum::Y_5 {1, "5"};

const Enum::YLeaf Native::Controller::ControllerTxExList::NameEnum::t1 {0, "t1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::NameEnum::e1 {1, "e1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::NameEnum::t3 {2, "t3"};
const Enum::YLeaf Native::Controller::ControllerTxExList::NameEnum::T1 {3, "T1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::NameEnum::E1 {4, "E1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::NameEnum::T3 {5, "T3"};

const Enum::YLeaf Native::Controller::ControllerTxExList::LinecodeEnum::ami {0, "ami"};
const Enum::YLeaf Native::Controller::ControllerTxExList::LinecodeEnum::b8zs {1, "b8zs"};
const Enum::YLeaf Native::Controller::ControllerTxExList::LinecodeEnum::hdb3 {2, "hdb3"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Clock::Source::Line::LineModeEnum::primary {0, "primary"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Clock::Source::Line::LineModeEnum::secondary {1, "secondary"};

const Enum::YLeaf Native::Controller::Sonet::FramingEnum::sonet {0, "sonet"};
const Enum::YLeaf Native::Controller::Sonet::FramingEnum::sdh {1, "sdh"};

const Enum::YLeaf Native::Controller::Sonet::Clock::SourceEnum::internal {0, "internal"};
const Enum::YLeaf Native::Controller::Sonet::Clock::SourceEnum::line {1, "line"};

const Enum::YLeaf Native::Controller::Sonet::Aug::MappingEnum::au_3 {0, "au-3"};
const Enum::YLeaf Native::Controller::Sonet::Aug::MappingEnum::au_4 {1, "au-4"};

const Enum::YLeaf Native::Controller::Sonet::Au3::Overhead::ByteEnum::j1 {0, "j1"};

const Enum::YLeaf Native::Controller::Sonet::Au3::Mode::MappingEnum::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::Sonet::Au3::Mode::MappingEnum::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::Sonet::Au3::Mode::MappingEnum::c_2 {2, "c-2"};

const Enum::YLeaf Native::Controller::Sonet::Au4::ModeEnum::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::Sonet::Au4::ModeEnum::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::Sonet::Au4::ModeEnum::c_2 {2, "c-2"};
const Enum::YLeaf Native::Controller::Sonet::Au4::ModeEnum::c_3 {3, "c-3"};
const Enum::YLeaf Native::Controller::Sonet::Au4::ModeEnum::c_4 {4, "c-4"};
const Enum::YLeaf Native::Controller::Sonet::Au4::ModeEnum::e3 {5, "e3"};

const Enum::YLeaf Native::Controller::Sonet::Au4::FramingEnum::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::Sonet::Au4::FramingUnframed::Tug2::FramingEnum::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SonetAcr::FramingEnum::sonet {0, "sonet"};
const Enum::YLeaf Native::Controller::SonetAcr::FramingEnum::sdh {1, "sdh"};

const Enum::YLeaf Native::Controller::SonetAcr::Clock::SourceEnum::internal {0, "internal"};
const Enum::YLeaf Native::Controller::SonetAcr::Clock::SourceEnum::line {1, "line"};

const Enum::YLeaf Native::Controller::SonetAcr::Aug::MappingEnum::au_3 {0, "au-3"};
const Enum::YLeaf Native::Controller::SonetAcr::Aug::MappingEnum::au_4 {1, "au-4"};

const Enum::YLeaf Native::Controller::SonetAcr::Au3::Overhead::ByteEnum::j1 {0, "j1"};

const Enum::YLeaf Native::Controller::SonetAcr::Au3::Mode::MappingEnum::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SonetAcr::Au3::Mode::MappingEnum::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SonetAcr::Au3::Mode::MappingEnum::c_2 {2, "c-2"};

const Enum::YLeaf Native::Controller::SonetAcr::Au4::ModeEnum::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SonetAcr::Au4::ModeEnum::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SonetAcr::Au4::ModeEnum::c_2 {2, "c-2"};
const Enum::YLeaf Native::Controller::SonetAcr::Au4::ModeEnum::c_3 {3, "c-3"};
const Enum::YLeaf Native::Controller::SonetAcr::Au4::ModeEnum::c_4 {4, "c-4"};
const Enum::YLeaf Native::Controller::SonetAcr::Au4::ModeEnum::e3 {5, "e3"};

const Enum::YLeaf Native::Controller::SonetAcr::Au4::FramingEnum::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SonetAcr::Au4::FramingUnframed::Tug2::FramingEnum::unframed {0, "unframed"};


}
}

